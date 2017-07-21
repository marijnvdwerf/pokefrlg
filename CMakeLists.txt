cmake_minimum_required(VERSION 3.6)

set(PROJECT pokefrlg)

if (CMAKE_BINARY_DIR STREQUAL CMAKE_SOURCE_DIR)
    message(FATAL_ERROR "Building in-source is not supported! Create a build dir and remove ${CMAKE_SOURCE_DIR}/CMakeCache.txt")
endif ()

set(DEVKITARM "" CACHE STRING "")
if (DEVKITARM STREQUAL "")
    message(FATAL_ERROR "DEVKITARM not specified")
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


set(ASM_OBJS)
file(GLOB_RECURSE ASM_SOURCES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "asm/*.s" "src/*.s" "lib/*.s")

set(C_OBJS)
file(GLOB_RECURSE C_SOURCES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "src/*.c" "lib/*.c")

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

        # Custom command to do the processing
        add_custom_command(
                OUTPUT "${ASM_OUT}"
                COMMAND ${CMAKE_COMMAND} -E make_directory "${DIR}"
                COMMAND ${AS} ${AS_FLAGS} -I "${CMAKE_SOURCE_DIR}" -o "${ASM_OUT}" "${ASM_IN}"
                DEPENDS "${ASM_IN}"
        )

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