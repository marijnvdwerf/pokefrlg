	.include "constants/gba_constants.inc"

	.syntax unified

	.global Start

	.text

	.arm

Start: @ 8000000
	b Init

	.global RomHeaderNintendoLogo
RomHeaderNintendoLogo:
	.byte 0x24,0xff,0xae,0x51,0x69,0x9a,0xa2,0x21
	.byte 0x3d,0x84,0x82,0x0a,0x84,0xe4,0x09,0xad
	.byte 0x11,0x24,0x8b,0x98,0xc0,0x81,0x7f,0x21
	.byte 0xa3,0x52,0xbe,0x19,0x93,0x09,0xce,0x20
	.byte 0x10,0x46,0x4a,0x4a,0xf8,0x27,0x31,0xec
	.byte 0x58,0xc7,0xe8,0x33,0x82,0xe3,0xce,0xbf
	.byte 0x85,0xf4,0xdf,0x94,0xce,0x4b,0x09,0xc1
	.byte 0x94,0x56,0x8a,0xc0,0x13,0x72,0xa7,0xfc
	.byte 0x9f,0x84,0x4d,0x73,0xa3,0xca,0x9a,0x61
	.byte 0x58,0x97,0xa3,0x27,0xfc,0x03,0x98,0x76
	.byte 0x23,0x1d,0xc7,0x61,0x03,0x04,0xae,0x56
	.byte 0xbf,0x38,0x84,0x00,0x40,0xa7,0x0e,0xfd
	.byte 0xff,0x52,0xfe,0x03,0x6f,0x95,0x30,0xf1
	.byte 0x97,0xfb,0xc0,0x85,0x60,0xd6,0x80,0x25
	.byte 0xa9,0x63,0xbe,0x03,0x01,0x4e,0x38,0xe2
	.byte 0xf9,0xa2,0x34,0xff,0xbb,0x3e,0x03,0x44
	.byte 0x78,0x00,0x90,0xcb,0x88,0x11,0x3a,0x94
	.byte 0x65,0xc0,0x7c,0x63,0x87,0xf0,0x3c,0xaf
	.byte 0xd6,0x25,0xe4,0x8b,0x38,0x0a,0xac,0x72
	.byte 0x21,0xd4,0xf8,0x07

RomHeaderGameTitle:
	.ascii "POKEMON FIRE"

RomHeaderGameCode:
	.ascii "BPRE"

RomHeaderMakerCode:
	.ascii "01"

RomHeaderMagic:
	.byte 0x96

RomHeaderMainUnitCode:
	.byte 0

RomHeaderDeviceType:
	.byte 0

RomHeaderReserved1:
	.space 7

RomHeaderSoftwareVersion:
.ifeq (REVISION - 0)
	.byte 0
.else
	.byte 1
.endif

RomHeaderChecksum:
.ifeq (REVISION - 0)
	.byte 0x68
.else
	.byte 0x67
.endif

RomHeaderReserved2:
	.space 2

@ 80000C0
	.word 0

	.global GPIOPortData
GPIOPortData: @ 80000C4
	.hword 0

	.global GPIOPortDirection
GPIOPortDirection: @ 80000C6
	.hword 0

	.global GPIOPortReadEnable
GPIOPortReadEnable: @ 80000C8
	.hword 0

	.space 6

@ 80000D0

	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte 0xFFFFFFFF
	.4byte          4
	.4byte          2
	.ascii "pokemon red version"
	.space 13
	.4byte kMonFrontPicTable
	.4byte kMonBackPicTable
	.4byte kMonPaletteTable
	.4byte kMonShinyPaletteTable
	.4byte kMonIconTable
	.4byte UNK_83D3E80
	.4byte borg_83D4038
	.4byte UNK_8245EE0
	.4byte UNK_8247094
	.4byte kDecorations
	.4byte 0xEE0
	.4byte 0x1000
	.4byte 0x18
	.4byte 0x5F8
	.4byte 0x3A18
	.4byte 0x3C
	.4byte 0x838
	.4byte 0x839
	.4byte 0x182
	.4byte 0xA0A0A07
	.4byte 0xC060C0C
	.4byte 0xC121006
	.4byte 0x8010B0F
	.4byte 0xC
	.4byte 0xF24
	.4byte 0x3D68
	.4byte 0x34
	.4byte 0x38
	.4byte 9
	.4byte 0xA
	.4byte 0
	.4byte 8
	.4byte 0xAD
	.4byte 0xAD
	.4byte 0x30BB
	.4byte 0x30A7
	.4byte 0
	.4byte UNK_8254784
	.4byte UNK_824FC40
	.4byte List_824FB08
	.4byte kItems
	.4byte UNK_8250C04
	.4byte UNK_826056C
	.4byte UNK_82605CC
	.4byte 0xA8
	.4byte 0x82C
	.4byte 0x83B
	.4byte 0x3A0D1E2A
	.4byte 0x1E2B
	.4byte 0x298
	.4byte 0x309C
	.4byte 0x30EC
	.4byte 0x34
	.4byte 0
	.4byte 0xFFFFFFFF

	.arm
	.align 2, 0
	.global Init
Init:
	mov r0, PSR_IRQ_MODE
	msr cpsr_cf, r0
	ldr sp, =IWRAM_END - 0x60
	mov r0, PSR_SYS_MODE
	msr cpsr_cf, r0
	ldr sp, _mainStackTop
	ldr r1, =INTR_VECTOR
	adr r0, IntrMain
	str r0, [r1]
	ldr r1, =AgbMain
	mov lr, pc
	bx r1
	b Init

	.align 2, 0
_mainStackTop:
	.word IWRAM_END - 0x1C0
    .pool

	.arm
	.align 2, 0
	.global IntrMain
IntrMain:
	mov r3, REG_BASE
	add r3, r3, OFFSET_REG_IE
	ldr r2, [r3, REG_IE - REG_IE]
	ldrh r1, [r3, REG_IME - REG_IE]
	mrs r0, spsr
	stmdb sp!, {r0-r3,lr}
	mov r0, 0
	strh r0, [r3, REG_IME - REG_IE]
	and r1, r2, r2, lsr 16
	mov r12, 0
	ands r0, r1, INTR_FLAG_VCOUNT
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	mov r0, 1
	strh r0, [r3, REG_IME - REG_IE]
	ands r0, r1, INTR_FLAG_SERIAL
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_TIMER3
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_HBLANK
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_VBLANK
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_TIMER0
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_TIMER1
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_TIMER2
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_DMA0
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_DMA1
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_DMA2
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_DMA3
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_KEYPAD
	bne IntrMain_FoundIntr
	add r12, r12, 0x4
	ands r0, r1, INTR_FLAG_GAMEPAK
	strbne r0, [r3, OFFSET_REG_SOUNDCNT_X - 0x200]
IntrMain_Loop:
	bne IntrMain_Loop
IntrMain_FoundIntr:
	strh r0, [r3, OFFSET_REG_IF - 0x200]
	BIC     R2, R2, R0
    LDR     R0, =STWI_status
    LDR     R0, [R0]
    LDRB    R0, [R0,#0xA]
    MOV     R1, #8
    MOV     R0, R1,LSL R0
    ORR     R0, R0, #0x2000
    ORR     R1, R0, #0xC6
	and r1, r1, r2
	strh r1, [r3, OFFSET_REG_IE - 0x200]
	mrs r3, cpsr
	bic r3, r3, PSR_I_BIT | PSR_F_BIT | PSR_MODE_MASK
	orr r3, r3, PSR_SYS_MODE
	msr cpsr_cf, r3
	ldr r1, =gIntrTable
	add r1, r1, r12
	ldr r0, [r1]
	stmdb sp!, {lr}
	adr lr, IntrMain_RetAddr
	bx r0
IntrMain_RetAddr:
	ldmia sp!, {lr}
	mrs r3, cpsr
	bic r3, r3, PSR_I_BIT | PSR_F_BIT | PSR_MODE_MASK
	orr r3, r3, PSR_I_BIT | PSR_IRQ_MODE
	msr cpsr_cf, r3
	ldmia sp!, {r0-r3,lr}
	strh r2, [r3, OFFSET_REG_IE - 0x200]
	strh r1, [r3, OFFSET_REG_IME - 0x200]
	msr spsr_cf, r0
	bx lr

	.pool

	.align 2, 0 @ Don't pad with nop.
