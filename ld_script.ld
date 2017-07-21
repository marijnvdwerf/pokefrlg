ENTRY(Start)

gMaxLines = 0;
gNumMusicPlayers = 4;

gUnknown_03001300 = 0x3002088;
rfuSlotStatus_UNI = 0x3007440;
rfuSlotStatus_NI  = 0x3007450;
rfuLinkStatus   = 0x3007460  ;
rfuStatic    = 0x3007464    ;
rfuFixed     = 0x3007468     ;
gUnknown_030078A0 = 0x3007470;
STWI_status = 0x03007438;
gUnknown_03007868 = 0x03007438;
gUnknown_089A324C = 0x86FC068;
gUnknown_089A3258 = 0x86FC074;
gIntrTable = 0x3003540;
gUnknown_030000F0 = 0x30000F0;
gUnknown_030000FA = 0x30000FA;
gUnknown_089A3220 = 0x86FC03C;
gSongTable = 0x84A32CC;
gMPlayTable = 0x84A329C;
gScaleTable = 0x8489A08 ;
gFreqTable = 0x8489ABC ;
gXcmdTable = 0x8489C54;
gCgbScaleTable = 0x8489B04;
gCgbFreqTable = 0x8489B88;
gNoiseTable = 0x8489BA0;
gMPlayJumpTableTemplate = 0x08489968;
gCgb3Vol = 0x8489BDC;
gClockTable = 0x8489BEC;
gPcmSamplesPerVBlankTable = 0x8489AEC;
gDeltaEncodingTable = 0x84899F8;
gMPlayMemAccArea = 0x30073C0;
sSetupInfos = 0x86FBF24;

ProgramFlashByte =  0x3007424;
ProgramFlashSector =  0x300741C;
EraseFlashChip =  0x300742C;
EraseFlashSector =  0x3007430;
WaitForFlashWrite =  0x3007418;
gFlashMaxTime =  0x3007434;
gFlash =  0x3007420;

gPokemonCrySongTemplate = 0x8489C20;
gCgbChans = 0x3007080;
gPokemonCryMusicPlayers = 0x3006F70;
gPokemonCrySong = 0x30072C0;
gPokemonCryTracks = 0x3007180;
gSoundInfo = 0x3005F50;
SoundMainRAM_Buffer = 0x30028E0;
PollFlashStatus = 0x3007414;
gFlashNumRemainingBytes = 0x3007428;
gPokemonCrySongs = 0x3006F00;
gFlashTimeoutFlag = 0x3007410;
gMPlayJumpTable = 0x3006FF0;

SECTIONS {

    . = 0x3000000;

    . = 0x30027F8;
    .bss (NOLOAD) :
    ALIGN(4)
    {
        lib/flash/agb_flash.c.o(.bss)
        ${LIBGCC_A}:dp-bit.o(.bss)
        ${LIBGCC_A}:fp-bit.o(.bss)

        /* .bss.code starts at 0x3001AA8 */
        lib/m4a/m4a_2.c.o(.bss.code);
    } =0

    . = 0x8000000;

    .text :
    ALIGN(4)
    {
        src/crt0.s.o(.text)
        asm/text.s.o(.text)
    } =0

    .script_data :
    ALIGN(4)
    {
        asm/data.s.o(.text);

        lib/gcnmultiboot/libgcnmultiboot.s.o(.text);
        lib/m4a/m4a_1.s.o(.text);
        lib/m4a/m4a_2.c.o(.text);
        lib/m4a/m4a_3.s.o(.text);
        lib/m4a/m4a_4.c.o(.text);
        lib/flash/agb_flash.c.o(.text);
        lib/flash/agb_flash_1m.c.o(.text);
        lib/flash/agb_flash_mx.c.o(.text);
        lib/flash/agb_flash_le.c.o(.text);
        lib/rfu/librfu.s.o(.text);
        lib/isagbprn/libisagbprn.s.o(.text);
        lib/agbsyscall/libagbsyscall.s.o(.text);
        ${LIBGCC_A}:_call_via_rX.o(.text);
        ${LIBGCC_A}:_divdi3.o(.text);
        ${LIBGCC_A}:_divsi3.o(.text);
        ${LIBGCC_A}:_dvmd_tls.o(.text);
        ${LIBGCC_A}:_fixunsdfsi.o(.text);
        ${LIBGCC_A}:_fixunssfsi.o(.text);
        ${LIBGCC_A}:_modsi3.o(.text);
        ${LIBGCC_A}:_muldi3.o(.text);
        ${LIBGCC_A}:_udivdi3.o(.text);
        ${LIBGCC_A}:_udivsi3.o(.text);
        ${LIBGCC_A}:_umodsi3.o(.text);
        ${LIBGCC_A}:dp-bit.o(.text);
        ${LIBGCC_A}:fp-bit.o(.text);
        ${LIBGCC_A}:_lshrdi3.o(.text);
        ${LIBGCC_A}:_negdi2.o(.text);
        lib/c/libc.s.o(.text);
    } =0

    .rodata :
    ALIGN(4)
    {
        asm/data.s.o(.rodata);
        ${LIBGCC_A}:_divdi3.o(.rodata);
        ${LIBGCC_A}:_udivdi3.o(.rodata);
        asm/data.s.o(.rodata3);
    } =0

    . = 0x8D00000;

    .gfx_data :
    ALIGN(4)
    {
        .gfx_data = .;
        asm/data.s.o(.gfx_data);
    }

    /* DWARF 2 sections */
    .debug_aranges  0 : { *(.debug_aranges) }
    .debug_pubnames 0 : { *(.debug_pubnames) }
    .debug_info     0 : { *(.debug_info) }
    .debug_abbrev   0 : { *(.debug_abbrev) }
    .debug_line     0 : { *(.debug_line) }
    .debug_frame    0 : { *(.debug_frame) }
    .debug_str      0 : { *(.debug_str) }
    .debug_loc      0 : { *(.debug_loc) }
    .debug_macinfo  0 : { *(.debug_macinfo) }

    /* Discard everything not specifically mentioned above. */
    /DISCARD/ :
    {
        *(*);
    }
}
