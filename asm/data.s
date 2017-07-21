
    .text

    .global Script
Script:
.incbin "baserom.gba", 0x15F9B4, 0x1BB8A7-0x15F9B4

    .global Script2
Script2:
.incbin "baserom.gba", 0x1BB8A7, 0x1C55C9-0x1BB8A7

    .global Script3
Script3:
.incbin "baserom.gba", 0x1C55C9, 0x1DBD34-0x1C55C9
    .global Script3_End
Script3_End:



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


    .section .gfx_data, "aw", %progbits
    .global GfxData
GfxData:
.incbin "baserom.gba", 0xD00000, 0x1B0B20
