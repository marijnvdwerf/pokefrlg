cmake_minimum_required(VERSION 3.6)

set(PROJECT pokefrlg)

if (CMAKE_BINARY_DIR STREQUAL CMAKE_SOURCE_DIR)
    message(FATAL_ERROR "Building in-source is not supported! Create a build dir and remove ${CMAKE_SOURCE_DIR}/CMakeCache.txt")
endif ()

set(DEVKITARM "" CACHE STRING "")
if (DEVKITARM STREQUAL "")
    message(FATAL_ERROR "DEVKITARM not specified")
endif ()

set(POKERUBY "" CACHE STRING "")
if (POKERUBY STREQUAL "")
    message(FATAL_ERROR "POKERUBY not specified")
endif ()

# DevkitARM tools
set(AS ${DEVKITARM}/bin/arm-none-eabi-as)
set(AS_FLAGS -mcpu=arm7tdmi)
set(CPP ${DEVKITARM}/bin/arm-none-eabi-cpp)
set(CPP_FLAGS -I${AGBCC}/include -I${CMAKE_CURRENT_SOURCE_DIR}/lib -nostdinc -undef)
set(LD ${DEVKITARM}/bin/arm-none-eabi-ld)
set(OBJCOPY ${DEVKITARM}/bin/arm-none-eabi-objcopy)

# PokeRuby tools
set(CC1 ${AGBCC}/bin/agbcc)
set(CC1_OLD ${AGBCC}/bin/old_agbcc)
set(C_FLAGS -mthumb-interwork -Wimplicit -Wparentheses -Wunused -Werror -O2 -fhex-asm)
set(LIBGCC_A ${AGBCC}/lib/libgcc.a)
set(PREPROC ${POKERUBY}/tools/preproc/preproc)
set(SCANINC ${POKERUBY}/tools/scaninc/scaninc)
set(GBAGFX ${POKERUBY}/tools/gbagfx/gbagfx)


set(ASM_OBJS)
file(GLOB_RECURSE ASM_SOURCES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "asm/*.s" "src/*.s" "lib/*.s" "data/*.s")

set(C_OBJS)
file(GLOB_RECURSE C_SOURCES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "src/*.c" "lib/*.c")

set(GENERATED)

function(poke_require_file PATH OUT_PATH OUT_STATUS)
    set(_OUT_PATH "${CMAKE_BINARY_DIR}/${PATH}")

    if (${PATH} IN_LIST GENERATED)
        set(${OUT_PATH} "${_OUT_PATH}" PARENT_SCOPE)
        set(${OUT_STATUS} "previous generated" PARENT_SCOPE)
        return()
    endif ()

    if (EXISTS "${CMAKE_SOURCE_DIR}/${PATH}")
        set(${OUT_PATH} "${CMAKE_SOURCE_DIR}/${PATH}" PARENT_SCOPE)
        set(${OUT_STATUS} "existing" PARENT_SCOPE)
        return()
    endif ()

    set(${OUT_PATH} "${_OUT_PATH}" PARENT_SCOPE)
    set(${OUT_STATUS} "generated" PARENT_SCOPE)

    if ((${PATH} MATCHES "\\.lz$") OR (${PATH} MATCHES "\\.rl$"))
        string(REGEX REPLACE "\\.(lz|rl)$" "" FILE_IN_NAME "${PATH}")
        poke_require_file(${FILE_IN_NAME} FILE_IN FILE_IN_STATUS)

        get_filename_component(DIR "${_OUT_PATH}" DIRECTORY)
        add_custom_command(
                OUTPUT ${_OUT_PATH}
                COMMAND ${CMAKE_COMMAND} -E make_directory "${DIR}"
                COMMAND ${GBAGFX} ${FILE_IN} ${_OUT_PATH}
                DEPENDS ${FILE_IN}
        )
        list(APPEND GENERATED ${PATH})
        set(GENERATED ${GENERATED} PARENT_SCOPE)
        return()
    endif ()

    set(TOOL NONE)
    # Generate input file name
    if ((${PATH} MATCHES "\\.1bpp$") OR (${PATH} MATCHES "\\.4bpp$") OR (${PATH} MATCHES "\\.8bpp$"))
        string(REGEX REPLACE "\\.(1|4|8)bpp$" ".png" FILE_IN_NAME "${PATH}")
        set(TOOL GBAGFX)
    elseif (${PATH} MATCHES "\\.gbapal$")
        string(REGEX REPLACE "\\.gbapal$" ".pal" FILE_IN_NAME "${PATH}")
        set(TOOL GBAGFX)
    elseif (${PATH} MATCHES "\\.(pcm|bin)$")
        string(REGEX REPLACE "\\.(pcm|bin)$" ".aif" FILE_IN_NAME "${PATH}")
        set(TOOL AIF)
    else ()
        message("!! Unknown non-existing file encountered: ${PATH}")
        return()
    endif ()

    set(ARGS)

    poke_require_file(${FILE_IN_NAME} FILE_IN FILE_IN_STATUS)


    if (${PATH} MATCHES "graphics/unknown/unknown_8e86240.4bpp$")
        list(APPEND ARGS -num_tiles 233)
    elseif (${PATH} MATCHES "graphics/unknown/unknown_8ea99f4.4bpp$")
        list(APPEND ARGS -num_tiles 63)
    elseif (${PATH} MATCHES "graphics/unknown/unknown_8ea9f88.4bpp$")
        list(APPEND ARGS -num_tiles 201)
    endif ()

    get_filename_component(DIR "${_OUT_PATH}" DIRECTORY)
    add_custom_command(
            OUTPUT ${_OUT_PATH}
            COMMAND ${CMAKE_COMMAND} -E make_directory "${DIR}"
            COMMAND ${GBAGFX} ${FILE_IN} ${_OUT_PATH} ${ARGS}
            DEPENDS ${FILE_IN}
    )

    list(APPEND GENERATED ${PATH})
    set(GENERATED ${GENERATED} PARENT_SCOPE)

endfunction()

function(scaninc FILE OUT_DEPS)
    set(DEPS)
    execute_process(
            COMMAND ${SCANINC} ${FILE}
            OUTPUT_VARIABLE SCANINC_OUT
            OUTPUT_STRIP_TRAILING_WHITESPACE
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )

    string(REPLACE "\n" ";" SCANINC_OUT "${SCANINC_OUT}")
    foreach (LINE ${SCANINC_OUT})
        list(APPEND DEPS ${LINE})
    endforeach ()

    set(${OUT_DEPS} ${DEPS} PARENT_SCOPE)
endfunction()


macro(add_rom NAME)
    set(OUT_GBA "${CMAKE_CURRENT_BINARY_DIR}/${NAME}.gba")
    set(OUT_ELF "${CMAKE_CURRENT_BINARY_DIR}/${NAME}/rom.elf")
    set(OUT_MAP "${CMAKE_CURRENT_BINARY_DIR}/${NAME}/rom.map")
    set(OUT_LD_SCRIPT "${CMAKE_CURRENT_BINARY_DIR}/${NAME}/ld_script.ld")

    configure_file("${CMAKE_CURRENT_SOURCE_DIR}/ld_script.ld" "${OUT_LD_SCRIPT}")

    set(ASM_OBJS "")
    set(C_OBJS "")

    foreach (ASM_NAME ${ASM_SOURCES})
        # Generate output file name
        set(ASM_OUT "${CMAKE_CURRENT_BINARY_DIR}/${NAME}/${ASM_NAME}.o")

        # Generate input file name
        set(ASM_IN "${CMAKE_CURRENT_SOURCE_DIR}/${ASM_NAME}")

        get_filename_component(DIR "${ASM_OUT}" DIRECTORY)

        set(DEPS)
        scaninc(${ASM_IN} RAW_DEPS)
        foreach (DEP ${RAW_DEPS})
            poke_require_file(${DEP} DEP_PATH DEP_STATUS)
            list(APPEND DEPS ${DEP_PATH})
        endforeach ()

        if (${ASM_NAME} MATCHES "^data/")
            add_custom_command(
                    OUTPUT "${ASM_OUT}"
                    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
                    COMMAND ${CMAKE_COMMAND} -E make_directory "${DIR}"
                    COMMAND ${PREPROC} "${ASM_IN}" "${CMAKE_CURRENT_SOURCE_DIR}/charmap.txt" | ${AS} ${AS_FLAGS} -I${CMAKE_CURRENT_BINARY_DIR}/${NAME} -I${CMAKE_SOURCE_DIR} -I${CMAKE_CURRENT_BINARY_DIR} -o "${ASM_OUT}" -
                    DEPENDS "${ASM_IN}" ${DEPS}
            )
        else ()
            add_custom_command(
                    OUTPUT "${ASM_OUT}"
                    COMMAND ${CMAKE_COMMAND} -E make_directory "${DIR}"
                    COMMAND ${AS} ${AS_FLAGS} -I${CMAKE_CURRENT_BINARY_DIR}/${NAME} -I${CMAKE_SOURCE_DIR} -o "${ASM_OUT}" "${ASM_IN}"
                    DEPENDS "${ASM_IN}" ${DEPS}
            )
        endif ()

        # Finally remember the output file for dependencies
        list(APPEND ASM_OBJS ${ASM_OUT})
    endforeach ()

    foreach (C_NAME ${C_SOURCES})
        # Generate output file name
        set(C_INT "${CMAKE_CURRENT_BINARY_DIR}/${NAME}/${C_NAME}.i")
        set(C_ASM "${CMAKE_CURRENT_BINARY_DIR}/${NAME}/${C_NAME}.s")
        set(C_OBJ "${CMAKE_CURRENT_BINARY_DIR}/${NAME}/${C_NAME}.o")

        set(CC ${CC1})
        set(FLAGS "${C_FLAGS}")

        if ("${C_NAME}" STREQUAL "src/c/libc.c")
            set(CC ${CC1_OLD})
            set(FLAGS "-O2")
        elseif (("${C_NAME}" STREQUAL "lib/flash/agb_flash.c")
                OR ("${C_NAME}" STREQUAL "lib/flash/agb_flash_1m.c")
                OR ("${C_NAME}" STREQUAL "lib/flash/agb_flash_mx.c"))
            set(FLAGS -O -mthumb-interwork)
        elseif (("${C_NAME}" STREQUAL "lib/m4a/m4a_2.c")
                OR ("${C_NAME}" STREQUAL "lib/m4a/m4a_4.c"))
            set(CC ${CC1_OLD})
        endif ()

        # Generate input file name
        set(C_SRC "${CMAKE_CURRENT_SOURCE_DIR}/${C_NAME}")

        get_filename_component(DIR "${C_OBJ}" DIRECTORY)

        # Custom command to do the processing
        add_custom_command(
                OUTPUT "${C_OBJ}"
                BYPRODUCTS ${C_INT} ${C_ASM}
                COMMAND ${CMAKE_COMMAND} -E make_directory "${DIR}"
                COMMAND ${CPP} ${CPP_FLAGS} "${C_SRC}" -o "${C_INT}"
                COMMAND ${CC} ${FLAGS} -o "${C_ASM}" "${C_INT}"
                COMMAND ${CMAKE_COMMAND} -E echo ".text" >> ${C_ASM}
                COMMAND ${CMAKE_COMMAND} -E echo ".align 2, 0" >> ${C_ASM}
                COMMAND ${AS} ${AS_FLAGS} -I "${CMAKE_SOURCE_DIR}" -o "${C_OBJ}" "${C_ASM}"
                DEPENDS "${C_SRC}"
        )

        # Finally remember the output file for dependencies
        list(APPEND C_OBJS ${C_OBJ})
    endforeach ()


    add_custom_command(
            OUTPUT ${OUT_ELF}
            COMMAND ${LD} -T ${OUT_LD_SCRIPT} -Map ${OUT_MAP} -o ${OUT_ELF} ${LIBGCC_A}
            WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/${NAME}"
            DEPENDS ${OUT_LD_SCRIPT} ${ASM_OBJS} ${C_OBJS}
            BYPRODUCTS ${OUT_MAP}
    )
    add_custom_command(
            OUTPUT ${OUT_GBA}
            COMMAND ${OBJCOPY} -O binary --gap-fill 0xFF --pad-to 0x9000000 ${OUT_ELF} ${OUT_GBA}
            DEPENDS ${OUT_ELF}
    )
    add_custom_target(${NAME} DEPENDS ${OUT_GBA})
endmacro()

add_rom(firered)