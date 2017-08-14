
    .text




    .section .rodata

    .global Data
Data:
.incbin "baserom.gba", 0x1E9F10, 0x44e850 - 0x1E9F10

    .global Data2
Data2:
.incbin "baserom.gba", 0x44e850, 0x6FC0F0 - 0x44e850

    .section .rodata3, "aw", %progbits
    .global Data3
Data3:
.incbin "baserom.gba", 0x6FC2F0, 0x71A23C - 0x6FC2F0
