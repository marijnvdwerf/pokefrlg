	thumb_func_start sub_8079730
sub_8079730:
	push	{r4, lr}
	add	r4, r0, #0
	add	r2, r4, #0
	add	r2, r2, #0x2e
	ldrh	r0, [r4, #0x2e]
	ldrh	r1, [r2, #0x2]
	sub	r0, r0, r1
	strh	r0, [r4, #0x2e]
	lsl	r0, r0, #0x10
	asr	r0, r0, #0x14
	strh	r0, [r4, #0x20]
	mov	r1, #0x8
	neg	r1, r1
	cmp	r0, r1
	blt	.Lsub_8079730_2	@cond_branch
	ldrh	r0, [r2, #0x6]
	ldrh	r1, [r2, #0x4]
	add	r0, r0, r1
	strh	r0, [r2, #0x4]
	lsl	r0, r0, #0x10
	asr	r0, r0, #0x14
	strh	r0, [r4, #0x22]
	sub	r0, r0, #0x10
	lsl	r0, r0, #0x10
	lsr	r0, r0, #0x10
	cmp	r0, #0xb8
	bhi	.Lsub_8079730_2	@cond_branch
	add	r0, r4, #0
	add	r0, r0, #0x3f
	ldrb	r1, [r0]
	mov	r0, #0x10
	and	r0, r0, r1
	cmp	r0, #0
	beq	.Lsub_8079730_3	@cond_branch
.Lsub_8079730_2:
	add	r0, r4, #0
	bl	obj_delete_and_free_tiles
	b	.Lsub_8079730_6
.Lsub_8079730_3:
	ldrh	r1, [r2, #0xe]
	mov	r3, #0xe
	ldsh	r0, [r2, r3]
	cmp	r0, #0
	beq	.Lsub_8079730_6	@cond_branch
	sub	r0, r1, #1
	strh	r0, [r2, #0xe]
	lsl	r0, r0, #0x10
	cmp	r0, #0
	bne	.Lsub_8079730_6	@cond_branch
	add	r0, r4, #0
	mov	r1, #0x0
	bl	obj_anim_image_start
	add	r2, r4, #0
	add	r2, r2, #0x3e
	ldrb	r1, [r2]
	mov	r0, #0x5
	neg	r0, r0
	and	r0, r0, r1
	strb	r0, [r2]
.Lsub_8079730_6:
	pop	{r4}
	pop	{r0}
	bx	r0
	thumb_func_end sub_8079730

	thumb_func_start sub_80797AC
sub_80797AC:
	push	{r4, r5, r6, r7, lr}
	mov	r7, r8
	push	{r7}
	add	r4, r0, #0
	add	r5, r1, #0
	mov	r8, r2
	add	r7, r3, #0
	ldr	r0, [sp, #0x18]
	cmp	r0, #0
	beq	.Lsub_80797AC_1	@cond_branch
	ldr	r0, .Lsub_80797AC_3 @ SpriteTemplate_83BFB04
	b	.Lsub_80797AC_2
.Lsub_80797AC_4:
	.align	2, 0
.Lsub_80797AC_3:
	.word	SpriteTemplate_83BFB04
.Lsub_80797AC_1:
	ldr	r0, .Lsub_80797AC_8 @ SpriteTemplate_83BFB1C
.Lsub_80797AC_2:
	lsl	r1, r4, #0x10
	asr	r1, r1, #0x10
	lsl	r2, r5, #0x10
	asr	r2, r2, #0x10
	mov	r3, #0x0
	bl	template_instanciate_forward_search
	lsl	r0, r0, #0x18
	lsr	r1, r0, #0x18
	cmp	r1, #0x40
	beq	.Lsub_80797AC_5	@cond_branch
	ldr	r0, .Lsub_80797AC_8 + 4 @ 0x202063c
	mov	ip, r0
	lsl	r0, r1, #0x4
	add	r0, r0, r1
	lsl	r6, r0, #0x2
	mov	r1, ip
	add	r2, r6, r1
	lsl	r0, r4, #0x4
	mov	r1, #0x0
	strh	r0, [r2, #0x2e]
	mov	r0, r8
	strh	r0, [r2, #0x30]
	lsl	r0, r5, #0x4
	strh	r0, [r2, #0x32]
	strh	r7, [r2, #0x34]
	strh	r1, [r2, #0x36]
	mov	r3, r8
	mul	r3, r3, r7
	add	r0, r3, #0
	cmp	r3, #0
	bge	.Lsub_80797AC_6	@cond_branch
	add	r0, r0, #0xf
.Lsub_80797AC_6:
	asr	r0, r0, #0x4
	lsl	r0, r0, #0x4
	sub	r0, r3, r0
	strh	r0, [r2, #0x38]
	mov	r1, sp
	ldrh	r1, [r1, #0x18]
	strh	r1, [r2, #0x3a]
	mov	r0, ip
	add	r0, r0, #0x1c
	add	r0, r6, r0
	ldr	r1, .Lsub_80797AC_8 + 8 @ sub_8079730 + 1
	str	r1, [r0]
	mov	r0, #0x1
	b	.Lsub_80797AC_7
.Lsub_80797AC_9:
	.align	2, 0
.Lsub_80797AC_8:
	.word	SpriteTemplate_83BFB1C
	.word	0x202063c
	.word	sub_8079730 + 1
.Lsub_80797AC_5:
	mov	r0, #0x0
.Lsub_80797AC_7:
	pop	{r3}
	mov	r8, r3
	pop	{r4, r5, r6, r7}
	pop	{r1}
	bx	r1
	thumb_func_end sub_80797AC

	thumb_func_start task05_08079840
task05_08079840:
	push	{r4, r5, r6, r7, lr}
	mov	r7, r9
	mov	r6, r8
	push	{r6, r7}
	add	sp, sp, #0xfffffffc
	lsl	r0, r0, #0x18
	lsr	r5, r0, #0x18
	lsl	r0, r5, #0x2
	add	r0, r0, r5
	lsl	r0, r0, #0x3
	ldr	r1, .Ltask05_08079840_4 @ 0x3005098
	add	r6, r0, r1
	mov	r1, #0x0
	ldsh	r0, [r6, r1]
	cmp	r0, #0
	beq	.Ltask05_08079840_1	@cond_branch
	cmp	r0, #0x1
	beq	.Ltask05_08079840_2	@cond_branch
	b	.Ltask05_08079840_12
.Ltask05_08079840_5:
	.align	2, 0
.Ltask05_08079840_4:
	.word	0x3005098
.Ltask05_08079840_1:
	ldr	r2, .Ltask05_08079840_7 @ 0x7878
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_807999C
	ldrh	r0, [r6]
	add	r0, r0, #0x1
	strh	r0, [r6]
	b	.Ltask05_08079840_12
.Ltask05_08079840_8:
	.align	2, 0
.Ltask05_08079840_7:
	.word	0x7878
.Ltask05_08079840_2:
	ldrh	r0, [r6, #0x2]
	add	r0, r0, #0x1
	strh	r0, [r6, #0x2]
	lsl	r0, r0, #0x10
	asr	r0, r0, #0x10
	mov	r2, #0x4
	ldsh	r1, [r6, r2]
	cmp	r0, r1
	blt	.Ltask05_08079840_12	@cond_branch
	mov	r0, #0x0
	strh	r0, [r6, #0x2]
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	mov	r0, #0x12
	strh	r0, [r6, #0x4]
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	lsl	r0, r0, #0x10
	mov	r1, #0xc0
	lsl	r1, r1, #0xa
	and	r1, r1, r0
	lsr	r1, r1, #0x10
	sub	r1, r1, #0x2
	mov	r8, r1
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	lsl	r0, r0, #0x10
	mov	r1, #0xe0
	lsl	r1, r1, #0xb
	and	r1, r1, r0
	lsr	r1, r1, #0x10
	add	r7, r1, #0
	sub	r7, r7, #0x10
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	lsl	r0, r0, #0x10
	lsr	r0, r0, #0x10
	mov	r1, #0x3
	bl	__umodsi3
	lsl	r0, r0, #0x10
	lsr	r0, r0, #0x10
	add	r0, r0, #0x74
	mov	r9, r0
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	lsl	r0, r0, #0x10
	lsr	r0, r0, #0x10
	mov	r1, #0xf0
	bl	__umodsi3
	lsl	r0, r0, #0x10
	lsr	r4, r0, #0x10
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	mov	r2, #0x0
	lsl	r0, r0, #0x10
	mov	r1, #0xf0
	lsl	r1, r1, #0xc
	and	r1, r1, r0
	lsr	r1, r1, #0x10
	cmp	r1, #0x7
	bls	.Ltask05_08079840_10	@cond_branch
	mov	r2, #0x1
.Ltask05_08079840_10:
	str	r2, [sp]
	add	r0, r4, #0
	mov	r1, r9
	mov	r2, r8
	add	r3, r7, #0
	bl	sub_80797AC
	mov	r4, #0x0
.Ltask05_08079840_11:
	ldr	r1, .Ltask05_08079840_13 @ UNK_83BFBD4
	add	r1, r4, r1
	mov	r2, #0xa
	ldsh	r0, [r6, r2]
	ldrb	r1, [r1]
	add	r0, r0, r1
	mov	r1, #0x1
	str	r1, [sp]
	mov	r1, r9
	mov	r2, r8
	add	r3, r7, #0
	bl	sub_80797AC
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	lsl	r0, r0, #0x10
	mov	r1, #0xc0
	lsl	r1, r1, #0xa
	and	r1, r1, r0
	lsr	r1, r1, #0x10
	sub	r1, r1, #0x2
	mov	r8, r1
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	lsl	r0, r0, #0x10
	mov	r1, #0xe0
	lsl	r1, r1, #0xb
	and	r1, r1, r0
	lsr	r1, r1, #0x10
	add	r7, r1, #0
	sub	r7, r7, #0x10
	add	r4, r4, #0x1
	cmp	r4, #0xe
	ble	.Ltask05_08079840_11	@cond_branch
	ldrh	r0, [r6, #0xa]
	add	r0, r0, #0x1
	strh	r0, [r6, #0xa]
	lsl	r0, r0, #0x10
	asr	r0, r0, #0x10
	cmp	r0, #0x3
	ble	.Ltask05_08079840_12	@cond_branch
	mov	r0, #0x0
	strh	r0, [r6, #0xa]
.Ltask05_08079840_12:
	add	sp, sp, #0x4
	pop	{r3, r4}
	mov	r8, r3
	mov	r9, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.Ltask05_08079840_14:
	.align	2, 0
.Ltask05_08079840_13:
	.word	UNK_83BFBD4
	thumb_func_end task05_08079840
