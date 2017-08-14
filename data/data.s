
    .include "asm/macros.inc"
    .include "constants/constants.inc"
    .include "constants/map_constants.inc"
    .text




    .section .rodata
    .include "data/data.inc"
    .section .rodata3, "aw", %progbits
    .global Data3
Data3:
.incbin "baserom.gba", 0x6FC2F0, 0x71A23C - 0x6FC2F0
