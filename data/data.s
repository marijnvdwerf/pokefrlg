
    .include "asm/macros.inc"
	.include "asm/macros/m4a.inc"
	.include "asm/macros/music_voice.inc"
    .include "constants/constants.inc"
    .include "constants/map_constants.inc"
    .text

.macro debug_path
.ifeq (REVISION - 0)
    .ascii "C:/WORK/POKeFRLG/src/pm_lgfr_ose/source/"
.else
    .ascii "C:/WORK/POKeFRLG/Src/pm_lgfr_ose/source/"
.endif
.endm

    .section .rodata
Data:: @ 81E9F10
.ifeq (VERSION - VERSION_FIRERED)
    .byte 4
.else
    .byte 5
.endif

unk_81E9F11:: @ 81E9F11
    .incbin "baserom.gba", 0x1E9F11, 0x3

    .align 2
ascii_81E9F14:: @ 81E9F14
.ifeq (REVISION - 0)
    .asciz "2004 04 26 11:20"
.else
    .asciz "2004 07 20 09:30"
.endif

    .incbin "baserom.gba", 0x1E9F25, 0x3

    .include "data/data1.inc"
.ifeq (VERSION - VERSION_FIRERED)
    .include "data/data.inc"
.else
    .include "data/pokedex-lg.inc"
.endif
    .include "data/data3.inc"

    .section .rodata2, "aw", %progbits

    .global gUnknown_089A3220
    .global gUnknown_089A3220
gUnknown_089A3220: @ 86FC03C
    .incbin "baserom.gba", 0x6FC03C, 0x2C

    .global gUnknown_089A324C
gUnknown_089A324C: @ 86FC068
    .incbin "baserom.gba", 0x6FC068, 0xC

    .global gUnknown_089A3258
gUnknown_089A3258: @ 86FC074
    .incbin "baserom.gba", 0x6FC074, 0x18

    .global ascii_86FC08C
ascii_86FC08C: @ 86FC08C
    .asciz "ASSERTION FAILED  FILE=[%s] LINE=[%d]  EXP=[%s] \n"

    .incbin "baserom.gba", 0x6FC0BE, 0x2

    .global ascii_86FC0C0
ascii_86FC0C0: @ 86FC0C0
    .asciz "WARING FILE=[%s] LINE=[%d]  EXP=[%s] \n"

    .incbin "baserom.gba", 0x6FC0E7, 0x1

    .global List_86FC0E8
List_86FC0E8: @ 86FC0E8
    .4byte ascii_86FC08C
    .4byte ascii_86FC0C0




    .section .rodata3, "aw", %progbits
    .global Data3
Data3::
    .incbin "baserom.gba", 0x6FC2F0, 0x4

    .global UNK_86FC2F4
UNK_86FC2F4: @ 86FC2F4
    .incbin "baserom.gba", 0x6FC2F4, 0x10

    .global UNK_86FC304
UNK_86FC304: @ 86FC304
    .incbin "baserom.gba", 0x6FC304, 0x10

    .global UNK_86FC314
UNK_86FC314: @ 86FC314
    .incbin "baserom.gba", 0x6FC314, 0x4

    .global UNK_86FC318
UNK_86FC318: @ 86FC318
    .incbin "baserom.gba", 0x6FC318, 0x4

    .global UNK_86FC31C
UNK_86FC31C: @ 86FC31C
    .incbin "baserom.gba", 0x6FC31C, 0x14

    .global UNK_86FC330
UNK_86FC330: @ 86FC330
    .incbin "baserom.gba", 0x6FC330, 0x8

    .global UNK_86FC338
UNK_86FC338: @ 86FC338
    .incbin "baserom.gba", 0x6FC338, 0x14

    .global UNK_86FC34C
UNK_86FC34C: @ 86FC34C
    .incbin "baserom.gba", 0x6FC34C, 0x1C

    .global UNK_86FC368
UNK_86FC368: @ 86FC368
    .incbin "baserom.gba", 0x6FC368, 0x4

    .global UNK_86FC36C
UNK_86FC36C: @ 86FC36C
    .incbin "baserom.gba", 0x6FC36C, 0x4

    .global UNK_86FC370
UNK_86FC370: @ 86FC370
    .incbin "baserom.gba", 0x6FC370, 0xC

    .global UNK_86FC37C
UNK_86FC37C: @ 86FC37C
    .incbin "baserom.gba", 0x6FC37C, 0x4

    .global UNK_86FC380
UNK_86FC380: @ 86FC380
    .incbin "baserom.gba", 0x6FC380, 0x4

    .global List_86FC384
List_86FC384: @ 86FC384
    .4byte _86FC3B8
    .4byte _86FC3B4
    .4byte _86FC3B4
    .4byte _86FC3B4
    .4byte _86FC3B4
    .4byte _86FC3B4
    .4byte _86FC3B4
    .4byte _86FC3B4
    .4byte _86FC3B4
    .4byte _86FC3B4

    .incbin "baserom.gba", 0x6FC3AC, 0x8

    .global _86FC3B4
_86FC3B4: @ 86FC3B4
    .incbin "baserom.gba", 0x6FC3B4, 0x4

    .global _86FC3B8
_86FC3B8: @ 86FC3B8
    .incbin "baserom.gba", 0x6FC3B8, 0x4

    .global UNK_86FC3BC
UNK_86FC3BC: @ 86FC3BC
    .incbin "baserom.gba", 0x6FC3BC, 0x4

    .global UNK_86FC3C0
UNK_86FC3C0: @ 86FC3C0
    .incbin "baserom.gba", 0x6FC3C0, 0xC

    .global UNK_86FC3CC
UNK_86FC3CC: @ 86FC3CC
    .incbin "baserom.gba", 0x6FC3CC, 0xC8

    .global UNK_86FC494
UNK_86FC494: @ 86FC494
    .incbin "baserom.gba", 0x6FC494, 0x50

    .global UNK_86FC4E4
UNK_86FC4E4: @ 86FC4E4
    .incbin "baserom.gba", 0x6FC4E4, 0x4

    .global UNK_86FC4E8
UNK_86FC4E8: @ 86FC4E8
    .incbin "baserom.gba", 0x6FC4E8, 0x24

    .global UNK_86FC50C
UNK_86FC50C: @ 86FC50C
    .incbin "baserom.gba", 0x6FC50C, 0x3760

    .global UNK_86FFC6C
UNK_86FFC6C: @ 86FFC6C
    .incbin "baserom.gba", 0x6FFC6C, 0x3BF4

    .global UNK_8703860
UNK_8703860: @ 8703860
    .incbin "baserom.gba", 0x703860, 0x169DC


