	.include "asm/macros.inc"

	.text

	thumb_func_start AGBPrintInit
AGBPrintInit:
	push	{r4, r7, lr}
	add	sp, sp, #0xfffffff0
	mov	r7, sp
	ldr	r0, .LAGBPrintInit_1 @ 0x0
	str	r0, [r7]
	ldr	r0, .LAGBPrintInit_1 + 4 @ 0x0
	str	r0, [r7, #0x4]
	ldr	r0, .LAGBPrintInit_1 + 8 @ 0x0
	str	r0, [r7, #0x8]
	add	r0, r7, #0
	add	r0, r0, #0xc
	ldr	r1, [r7, #0x4]
	ldrh	r2, [r1]
	strh	r2, [r0]
	ldr	r0, [r7, #0x4]
	mov	r2, #0xc0
	lsl	r2, r2, #0x5
	add	r1, r2, #0
	strh	r1, [r0]
	ldr	r0, [r7, #0x8]
	mov	r1, #0x20
	strh	r1, [r0]
	ldr	r0, [r7]
	ldr	r1, [r7]
	ldr	r2, [r7]
	ldrh	r3, [r2, #0x6]
	mov	r4, #0x0
	and	r3, r3, r4
	add	r4, r3, #0
	strh	r4, [r2, #0x6]
	ldrh	r2, [r1, #0x4]
	mov	r3, #0x0
	and	r2, r2, r3
	add	r3, r2, #0
	strh	r3, [r1, #0x4]
	ldrh	r1, [r0]
	mov	r2, #0x0
	and	r1, r1, r2
	add	r2, r1, #0
	strh	r2, [r0]
	ldr	r0, [r7]
	ldrh	r1, [r0, #0x2]
	mov	r2, #0x0
	and	r1, r1, r2
	add	r2, r1, #0
	mov	r3, #0xfd
	add	r1, r2, #0
	orr	r1, r1, r3
	add	r2, r1, #0
	strh	r2, [r0, #0x2]
	ldr	r0, [r7, #0x8]
	mov	r1, #0x0
	strh	r1, [r0]
	ldr	r0, [r7, #0x4]
	add	r1, r7, #0
	add	r1, r1, #0xc
	ldrh	r2, [r1]
	strh	r2, [r0]
	add	sp, sp, #0x10
	pop	{r4, r7}
	pop	{r0}
	bx	r0
.LAGBPrintInit_2:
	.align	2, 0
.LAGBPrintInit_1:
	.word	0x9fe20f8
	.word	0x4000204
	.word	0x9fe2ffe
	thumb_func_end AGBPrintInit

	thumb_func_start AGBPutcInternal
AGBPutcInternal:
	push	{r4, r7, lr}
	add	sp, sp, #0xffffffec
	mov	r7, sp
	add	r1, r7, #0
	strb	r0, [r1]
	ldr	r0, .LAGBPutcInternal_3 @ 0x0
	str	r0, [r7, #0x4]
	ldr	r0, [r7, #0x4]
	ldrh	r1, [r0, #0x2]
	lsl	r2, r1, #0x10
	lsr	r0, r2, #0x10
	lsl	r1, r0, #0x10
	mov	r2, #0x80
	lsl	r2, r2, #0x14
	add	r0, r1, r2
	str	r0, [r7, #0x8]
	ldr	r0, .LAGBPutcInternal_3 + 4 @ 0x0
	str	r0, [r7, #0xc]
	add	r0, r7, #0
	add	r0, r0, #0x10
	ldr	r1, [r7, #0x4]
	ldrh	r2, [r1, #0x6]
	lsl	r1, r2, #0x10
	lsr	r2, r1, #0x10
	lsr	r1, r2, #0x1
	add	r3, r1, #0
	lsl	r2, r3, #0x10
	lsr	r1, r2, #0x10
	add	r2, r1, #0
	lsl	r1, r2, #0x1
	ldr	r2, [r7, #0x8]
	add	r1, r1, r2
	ldrh	r2, [r1]
	strh	r2, [r0]
	ldr	r0, [r7, #0xc]
	mov	r1, #0x20
	strh	r1, [r0]
	add	r0, r7, #0
	add	r0, r0, #0x10
	ldr	r1, [r7, #0x4]
	ldrh	r2, [r1, #0x6]
	mov	r3, #0x1
	add	r1, r2, #0
	and	r1, r1, r3
	add	r3, r1, #0
	lsl	r2, r3, #0x10
	lsr	r1, r2, #0x10
	cmp	r1, #0
	beq	.LAGBPutcInternal_1	@cond_branch
	add	r1, r7, #0
	add	r1, r1, #0x10
	ldrh	r2, [r1]
	mov	r3, #0xff
	add	r1, r2, #0
	and	r1, r1, r3
	add	r2, r7, #0
	ldrb	r3, [r2]
	add	r2, r3, #0
	lsl	r3, r2, #0x8
	add	r2, r3, #0
	add	r3, r1, #0
	orr	r3, r3, r2
	add	r1, r3, #0
	b	.LAGBPutcInternal_2
.LAGBPutcInternal_4:
	.align	2, 0
.LAGBPutcInternal_3:
	.word	0x9fe20f8
	.word	0x9fe2ffe
.LAGBPutcInternal_1:
	add	r2, r7, #0
	add	r2, r2, #0x10
	ldrh	r3, [r2]
	mov	r4, #0xff
	lsl	r4, r4, #0x8
	add	r2, r3, #0
	and	r2, r2, r4
	add	r3, r7, #0
	ldrb	r4, [r3]
	add	r3, r4, #0
	orr	r3, r3, r2
	add	r1, r3, #0
.LAGBPutcInternal_2:
	strh	r1, [r0]
	ldr	r0, [r7, #0x4]
	ldrh	r1, [r0, #0x6]
	lsl	r0, r1, #0x10
	lsr	r1, r0, #0x10
	lsr	r0, r1, #0x1
	add	r2, r0, #0
	lsl	r1, r2, #0x10
	lsr	r0, r1, #0x10
	add	r1, r0, #0
	lsl	r0, r1, #0x1
	ldr	r1, [r7, #0x8]
	add	r0, r0, r1
	add	r1, r7, #0
	add	r1, r1, #0x10
	ldrh	r2, [r1]
	strh	r2, [r0]
	ldr	r1, [r7, #0x4]
	ldr	r0, [r7, #0x4]
	ldr	r1, [r7, #0x4]
	ldrh	r2, [r1, #0x6]
	add	r1, r2, #1
	ldrh	r2, [r0, #0x6]
	mov	r3, #0x0
	and	r2, r2, r3
	add	r3, r2, #0
	add	r2, r3, #0
	orr	r2, r2, r1
	add	r1, r2, #0
	strh	r1, [r0, #0x6]
	ldr	r0, [r7, #0xc]
	mov	r1, #0x0
	strh	r1, [r0]
	add	sp, sp, #0x14
	pop	{r4, r7}
	pop	{r0}
	bx	r0
	thumb_func_end AGBPutcInternal

	thumb_func_start AGBPutc
AGBPutc:
	push	{r7, lr}
	add	sp, sp, #0xfffffff0
	mov	r7, sp
	add	r1, r7, #0
	strb	r0, [r1]
	ldr	r0, .LAGBPutc_2 @ 0x0
	str	r0, [r7, #0x4]
	add	r0, r7, #0
	add	r0, r0, #0x8
	ldr	r1, [r7, #0x4]
	ldrh	r2, [r1]
	strh	r2, [r0]
	ldr	r0, [r7, #0x4]
	mov	r2, #0xc0
	lsl	r2, r2, #0x5
	add	r1, r2, #0
	strh	r1, [r0]
	add	r0, r7, #0
	ldrb	r1, [r0]
	add	r0, r1, #0
	bl	AGBPutcInternal
	ldr	r0, [r7, #0x4]
	add	r1, r7, #0
	add	r1, r1, #0x8
	ldrh	r2, [r1]
	strh	r2, [r0]
	ldr	r0, .LAGBPutc_2 + 4 @ 0x0
	str	r0, [r7, #0xc]
	ldr	r1, [r7, #0xc]
	ldrh	r0, [r1, #0x6]
	ldr	r1, [r7, #0xc]
	ldrh	r2, [r1, #0x4]
	sub	r1, r2, #1
	lsl	r2, r1, #0x10
	lsr	r1, r2, #0x10
	cmp	r0, r1
	bne	.LAGBPutc_1	@cond_branch
	bl	AGBPrintFlush1Block
.LAGBPutc_1:
	add	sp, sp, #0x10
	pop	{r7}
	pop	{r0}
	bx	r0
.LAGBPutc_3:
	.align	2, 0
.LAGBPutc_2:
	.word	0x4000204
	.word	0x9fe20f8
	thumb_func_end AGBPutc

	thumb_func_start AGBPrint
AGBPrint:
	push	{r7, lr}
	add	sp, sp, #0xfffffff0
	mov	r7, sp
	str	r0, [r7]
	ldr	r0, .LAGBPrint_3 @ 0x0
	str	r0, [r7, #0x4]
	ldr	r0, .LAGBPrint_3 + 4 @ 0x0
	str	r0, [r7, #0x8]
	add	r0, r7, #0
	add	r0, r0, #0xc
	ldr	r1, [r7, #0x8]
	ldrh	r2, [r1]
	strh	r2, [r0]
	ldr	r0, [r7, #0x8]
	mov	r2, #0xc0
	lsl	r2, r2, #0x5
	add	r1, r2, #0
	strh	r1, [r0]
.LAGBPrint_5:
	ldr	r0, [r7]
	ldrb	r1, [r0]
	cmp	r1, #0
	bne	.LAGBPrint_1	@cond_branch
	b	.LAGBPrint_2
.LAGBPrint_4:
	.align	2, 0
.LAGBPrint_3:
	.word	0x9fe20f8
	.word	0x4000204
.LAGBPrint_1:
	ldr	r0, [r7]
	ldrb	r1, [r0]
	add	r0, r1, #0
	bl	AGBPutc
	ldr	r0, [r7]
	add	r1, r0, #1
	str	r1, [r7]
	b	.LAGBPrint_5
.LAGBPrint_2:
	ldr	r0, [r7, #0x8]
	add	r1, r7, #0
	add	r1, r1, #0xc
	ldrh	r2, [r1]
	strh	r2, [r0]
	add	sp, sp, #0x10
	pop	{r7}
	pop	{r0}
	bx	r0
	thumb_func_end AGBPrint

	thumb_func_start AGBPrintf
AGBPrintf:
	push	{r0, r1, r2, r3}
	push	{r7, lr}
	add	sp, sp, #0xfffffefc
	mov	r7, sp
	mov	r1, #0x88
	lsl	r1, r1, #0x1
	add	r0, r7, r1
	add	r1, r7, #0
	mov	r3, #0x80
	lsl	r3, r3, #0x1
	add	r2, r7, r3
	str	r0, [r2]
	add	r0, r7, #0
	add	r1, r7, #0
	mov	r1, #0x80
	lsl	r1, r1, #0x1
	add	r3, r7, r1
	ldr	r2, [r3]
	mov	r3, #0x86
	lsl	r3, r3, #0x1
	add	r3, r3, r7
	ldr	r1, [r3]
	bl	vsprintf
	add	r1, r7, #0
	add	r0, r1, #0
	bl	AGBPrint
	add	sp, sp, #0x104
	pop	{r7}
	pop	{r3}
	add	sp, sp, #0x10
	bx	r3
	thumb_func_end AGBPrintf

	thumb_func_start AGBPrintTransferDataInternal
AGBPrintTransferDataInternal:
	push	{r4, r7, lr}
	add	sp, sp, #0xffffffe0
	mov	r7, sp
	str	r0, [r7]
	ldr	r0, .LAGBPrintTransferDataInternal_4 @ 0x0
	str	r0, [r7, #0x18]
	ldr	r0, .LAGBPrintTransferDataInternal_4 + 4 @ 0x0
	str	r0, [r7, #0x1c]
	ldr	r0, .LAGBPrintTransferDataInternal_4 + 8 @ 0x0
	str	r0, [r7, #0x4]
	ldr	r0, .LAGBPrintTransferDataInternal_4 + 12 @ 0x0
	str	r0, [r7, #0x8]
	add	r0, r7, #0
	add	r0, r0, #0xc
	ldr	r1, [r7, #0x8]
	ldrh	r2, [r1]
	strh	r2, [r0]
	ldr	r0, .LAGBPrintTransferDataInternal_4 + 16 @ 0x0
	str	r0, [r7, #0x10]
	add	r0, r7, #0
	add	r0, r0, #0x14
	ldr	r1, [r7, #0x10]
	ldrh	r2, [r1]
	strh	r2, [r0]
	ldr	r0, [r7, #0x8]
	add	r1, r7, #0
	add	r1, r1, #0xc
	ldrh	r2, [r1]
	ldr	r3, .LAGBPrintTransferDataInternal_4 + 20 @ 0x0
	add	r1, r2, #0
	and	r1, r1, r3
	add	r2, r1, #0
	strh	r2, [r0]
	ldr	r0, [r7, #0x10]
	mov	r2, #0xc0
	lsl	r2, r2, #0x5
	add	r1, r2, #0
	strh	r1, [r0]
	ldr	r0, [r7]
	cmp	r0, #0
	beq	.LAGBPrintTransferDataInternal_1	@cond_branch
.LAGBPrintTransferDataInternal_6:
	ldr	r1, [r7, #0x1c]
	ldr	r0, [r7, #0x1c]
	ldrh	r1, [r1, #0x6]
	lsl	r2, r1, #0x10
	lsr	r1, r2, #0x10
	ldrh	r0, [r0, #0x4]
	lsl	r2, r0, #0x10
	lsr	r0, r2, #0x10
	cmp	r1, r0
	bne	.LAGBPrintTransferDataInternal_2	@cond_branch
	b	.LAGBPrintTransferDataInternal_3
.LAGBPrintTransferDataInternal_5:
	.align	2, 0
.LAGBPrintTransferDataInternal_4:
	.word	0x9fe2ffe
	.word	0x9fe20f8
	.word	0x9fe209d
	.word	0x4000208
	.word	0x4000204
	.word	0xfffe
.LAGBPrintTransferDataInternal_2:
	ldr	r0, [r7, #0x18]
	mov	r1, #0x20
	strh	r1, [r0]
	ldr	r4, [r7, #0x4]
	bl	_call_via_r4
	ldr	r0, [r7, #0x18]
	mov	r1, #0x0
	strh	r1, [r0]
	b	.LAGBPrintTransferDataInternal_6
.LAGBPrintTransferDataInternal_3:
	b	.LAGBPrintTransferDataInternal_8
.LAGBPrintTransferDataInternal_1:
	ldr	r1, [r7, #0x1c]
	ldr	r0, [r7, #0x1c]
	ldrh	r1, [r1, #0x6]
	lsl	r2, r1, #0x10
	lsr	r1, r2, #0x10
	ldrh	r0, [r0, #0x4]
	lsl	r2, r0, #0x10
	lsr	r0, r2, #0x10
	cmp	r1, r0
	beq	.LAGBPrintTransferDataInternal_8	@cond_branch
	ldr	r0, [r7, #0x18]
	mov	r1, #0x20
	strh	r1, [r0]
	ldr	r4, [r7, #0x4]
	bl	_call_via_r4
	ldr	r0, [r7, #0x18]
	mov	r1, #0x0
	strh	r1, [r0]
.LAGBPrintTransferDataInternal_8:
	ldr	r0, [r7, #0x10]
	add	r1, r7, #0
	add	r1, r1, #0x14
	ldrh	r2, [r1]
	strh	r2, [r0]
	ldr	r0, [r7, #0x8]
	add	r1, r7, #0
	add	r1, r1, #0xc
	ldrh	r2, [r1]
	strh	r2, [r0]
	add	sp, sp, #0x20
	pop	{r4, r7}
	pop	{r0}
	bx	r0
	thumb_func_end AGBPrintTransferDataInternal

	thumb_func_start AGBPrintFlush1Block
AGBPrintFlush1Block:
	push	{r7, lr}
	mov	r7, sp
	mov	r0, #0x0
	bl	AGBPrintTransferDataInternal
	pop	{r7}
	pop	{r0}
	bx	r0
	thumb_func_end AGBPrintFlush1Block

	thumb_func_start AGBPrintFlush
AGBPrintFlush:
	push	{r7, lr}
	mov	r7, sp
	mov	r0, #0x1
	bl	AGBPrintTransferDataInternal
	pop	{r7}
	pop	{r0}
	bx	r0
	thumb_func_end AGBPrintFlush

	thumb_func_start AGBAssert
AGBAssert:
	push	{r7, lr}
	add	sp, sp, #0xfffffff0
	mov	r7, sp
	str	r0, [r7]
	str	r1, [r7, #0x4]
	str	r2, [r7, #0x8]
	str	r3, [r7, #0xc]
	ldr	r0, [r7, #0xc]
	cmp	r0, #0
	beq	.LAGBAssert_1	@cond_branch
	ldr	r0, .LAGBAssert_3 @ Data2+0x2ad83c
	ldr	r2, [r7, #0x4]
	ldr	r3, [r7, #0x8]
	ldr	r1, [r7]
	bl	AGBPrintf
	bl	AGBPrintFlush
	.2byte 0xEFFF
	b	.LAGBAssert_2
.LAGBAssert_4:
	.align	2, 0
.LAGBAssert_3:
	.word	Data2+0x2ad83c
.LAGBAssert_1:
	ldr	r0, .LAGBAssert_5 @ Data2+0x2ad870
	ldr	r2, [r7, #0x4]
	ldr	r3, [r7, #0x8]
	ldr	r1, [r7]
	bl	AGBPrintf
.LAGBAssert_2:
	add	sp, sp, #0x10
	pop	{r7}
	pop	{r0}
	bx	r0
.LAGBAssert_6:
	.align	2, 0
.LAGBAssert_5:
	.word	Data2+0x2ad870
	thumb_func_end AGBAssert