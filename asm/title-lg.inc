
	thumb_func_start sub_8079730
sub_8079730:
	push	{r4, lr}
	add	r2, r0, #0
	add	r3, r2, #0
	add	r3, r3, #0x2e
	ldrh	r0, [r2, #0x2e]
	ldrh	r1, [r3, #0x2]
	sub	r0, r0, r1
	strh	r0, [r2, #0x2e]
	lsl	r0, r0, #0x10
	asr	r0, r0, #0x14
	strh	r0, [r2, #0x20]
	mov	r1, #0x8
	neg	r1, r1
	cmp	r0, r1
	blt	.Lsub_8079730_1	@cond_branch
	ldrh	r0, [r3, #0x6]
	ldrh	r1, [r3, #0x4]
	add	r0, r0, r1
	strh	r0, [r3, #0x4]
	lsl	r0, r0, #0x10
	asr	r0, r0, #0x14
	strh	r0, [r2, #0x22]
	sub	r0, r0, #0x10
	lsl	r0, r0, #0x10
	lsr	r0, r0, #0x10
	cmp	r0, #0xb8
	bls	.Lsub_8079730_2	@cond_branch
.Lsub_8079730_1:
	add	r0, r2, #0
	bl	obj_delete_and_free_tiles
	b	.Lsub_8079730_5
.Lsub_8079730_2:
	mov	r2, #0xa
	ldsh	r0, [r3, r2]
	cmp	r0, #0
	bne	.Lsub_8079730_5	@cond_branch
	ldrh	r0, [r3, #0xc]
	add	r0, r0, #0x1
	strh	r0, [r3, #0xc]
	mov	r4, #0x2
	ldsh	r0, [r3, r4]
	mov	r2, #0xc
	ldsh	r1, [r3, r2]
	add	r2, r0, #0
	mul	r2, r2, r1
	mov	r4, #0x6
	ldsh	r0, [r3, r4]
	mul	r1, r1, r0
	add	r0, r2, #0
	mul	r0, r0, r2
	asr	r2, r0, #0x4
	add	r0, r1, #0
	mul	r0, r0, r1
	asr	r1, r0, #0x4
	add	r1, r2, r1
	ldr	r0, .Lsub_8079730_6 @ 0x50f
	cmp	r1, r0
	ble	.Lsub_8079730_5	@cond_branch
	mov	r0, #0x1
	strh	r0, [r3, #0xa]
.Lsub_8079730_5:
	pop	{r4}
	pop	{r0}
	bx	r0
.Lsub_8079730_7:
	.align	2, 0
.Lsub_8079730_6:
	.word	0x50f
	thumb_func_end sub_8079730

	thumb_func_start sub_80797B0
sub_80797B0:
	push	{r4, r5, r6, lr}
	add	r4, r0, #0
	add	r5, r1, #0
	add	r6, r2, #0
	ldr	r0, .Lsub_80797B0_2 @ SpriteTemplate_83BF938
	lsl	r2, r4, #0x10
	asr	r2, r2, #0x10
	mov	r1, #0xf0
	mov	r3, #0x0
	bl	template_instanciate_forward_search
	lsl	r0, r0, #0x18
	lsr	r1, r0, #0x18
	cmp	r1, #0x40
	beq	.Lsub_80797B0_1	@cond_branch
	ldr	r3, .Lsub_80797B0_2 + 4 @ 0x202063c
	lsl	r0, r1, #0x4
	add	r0, r0, r1
	lsl	r0, r0, #0x2
	add	r2, r0, r3
	mov	r1, #0xf0
	lsl	r1, r1, #0x4
	strh	r1, [r2, #0x2e]
	strh	r5, [r2, #0x30]
	lsl	r1, r4, #0x4
	strh	r1, [r2, #0x32]
	strh	r6, [r2, #0x34]
	add	r3, r3, #0x1c
	add	r0, r0, r3
	ldr	r1, .Lsub_80797B0_2 + 8 @ sub_8079730 + 1
	str	r1, [r0]
.Lsub_80797B0_1:
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
.Lsub_80797B0_3:
	.align	2, 0
.Lsub_80797B0_2:
	.word	SpriteTemplate_83BF938
	.word	0x202063c
	.word	sub_8079730 + 1
	thumb_func_end sub_80797B0

	thumb_func_start sub_8079800
sub_8079800:
	push	{lr}
	add	r2, r0, #0
	ldrh	r0, [r2, #0x20]
	sub	r0, r0, #0x7
	strh	r0, [r2, #0x20]
	lsl	r0, r0, #0x10
	asr	r0, r0, #0x10
	mov	r1, #0x10
	neg	r1, r1
	cmp	r0, r1
	bge	.Lsub_8079800_1	@cond_branch
	mov	r0, #0x80
	lsl	r0, r0, #0x1
	strh	r0, [r2, #0x20]
	ldrh	r0, [r2, #0x3c]
	add	r0, r0, #0x1
	strh	r0, [r2, #0x3c]
	lsl	r0, r0, #0x10
	lsr	r0, r0, #0x10
	cmp	r0, #0x7
	bls	.Lsub_8079800_2	@cond_branch
	mov	r0, #0x0
	strh	r0, [r2, #0x3c]
.Lsub_8079800_2:
	ldr	r0, .Lsub_8079800_3 @ UNK_83BFBD4
	mov	r3, #0x3c
	ldsh	r1, [r2, r3]
	lsl	r1, r1, #0x1
	add	r1, r1, r0
	ldrh	r0, [r1]
	strh	r0, [r2, #0x22]
.Lsub_8079800_1:
	pop	{r0}
	bx	r0
.Lsub_8079800_4:
	.align	2, 0
.Lsub_8079800_3:
	.word	UNK_83BFBD4
	thumb_func_end sub_8079800

	thumb_func_start sub_8079844
sub_8079844:
	push	{r4, r5, r6, r7, lr}
	mov	r4, #0x0
	ldr	r6, .Lsub_8079844_3 @ 0x202063c
	add	r7, r6, #0
	add	r7, r7, #0x1c
	mov	r5, #0x0
.Lsub_8079844_2:
	mov	r0, #0x80
	lsl	r0, r0, #0x1
	add	r1, r5, r0
	lsl	r1, r1, #0x10
	asr	r1, r1, #0x10
	ldr	r2, .Lsub_8079844_3 + 4 @ UNK_83BFBD4
	lsl	r0, r4, #0x1
	add	r0, r0, r2
	mov	r3, #0x0
	ldsh	r2, [r0, r3]
	ldr	r0, .Lsub_8079844_3 + 8 @ SpriteTemplate_83BF958
	mov	r3, #0xff
	bl	template_instanciate_forward_search
	lsl	r0, r0, #0x18
	lsr	r1, r0, #0x18
	cmp	r1, #0x40
	beq	.Lsub_8079844_1	@cond_branch
	lsl	r0, r1, #0x4
	add	r0, r0, r1
	lsl	r0, r0, #0x2
	add	r1, r0, r6
	strh	r4, [r1, #0x3c]
	add	r0, r0, r7
	ldr	r1, .Lsub_8079844_3 + 12 @ sub_8079800 + 1
	str	r1, [r0]
.Lsub_8079844_1:
	add	r5, r5, #0x28
	add	r4, r4, #0x1
	cmp	r4, #0x3
	ble	.Lsub_8079844_2	@cond_branch
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.Lsub_8079844_4:
	.align	2, 0
.Lsub_8079844_3:
	.word	0x202063c
	.word	UNK_83BFBD4
	.word	SpriteTemplate_83BF958
	.word	sub_8079800 + 1
	thumb_func_end sub_8079844

	thumb_func_start task05_08079840
task05_08079840:
	push	{r4, r5, r6, lr}
	lsl	r0, r0, #0x18
	lsr	r5, r0, #0x18
	lsl	r0, r5, #0x2
	add	r0, r0, r5
	lsl	r0, r0, #0x3
	ldr	r1, .Ltask05_08079840_4 @ 0x3005098
	add	r4, r0, r1
	mov	r1, #0x0
	ldsh	r0, [r4, r1]
	cmp	r0, #0
	beq	.Ltask05_08079840_1	@cond_branch
	cmp	r0, #0x1
	beq	.Ltask05_08079840_2	@cond_branch
	b	.Ltask05_08079840_9
.Ltask05_08079840_5:
	.align	2, 0
.Ltask05_08079840_4:
	.word	0x3005098
.Ltask05_08079840_1:
	bl	sub_8079844
	ldr	r2, .Ltask05_08079840_7 @ 0x7878
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_807999C
	ldrh	r0, [r4]
	add	r0, r0, #0x1
	strh	r0, [r4]
	b	.Ltask05_08079840_9
.Ltask05_08079840_8:
	.align	2, 0
.Ltask05_08079840_7:
	.word	0x7878
.Ltask05_08079840_2:
	ldrh	r0, [r4, #0x2]
	add	r0, r0, #0x1
	strh	r0, [r4, #0x2]
	lsl	r0, r0, #0x10
	asr	r0, r0, #0x10
	mov	r2, #0x4
	ldsh	r1, [r4, r2]
	cmp	r0, r1
	blt	.Ltask05_08079840_9	@cond_branch
	mov	r0, #0x0
	strh	r0, [r4, #0x2]
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	lsl	r0, r0, #0x10
	lsr	r0, r0, #0x10
	mov	r1, #0x6
	bl	__umodsi3
	add	r0, r0, #0x6
	strh	r0, [r4, #0x4]
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	lsl	r0, r0, #0x10
	lsr	r0, r0, #0x10
	mov	r1, #0x1e
	bl	__umodsi3
	lsl	r0, r0, #0x10
	lsr	r0, r0, #0x10
	mov	r6, #0x10
	cmp	r0, #0x5
	ble	.Ltask05_08079840_11	@cond_branch
	mov	r6, #0x30
	cmp	r0, #0xb
	bgt	.Ltask05_08079840_11	@cond_branch
	mov	r6, #0x18
.Ltask05_08079840_11:
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	lsl	r0, r0, #0x10
	mov	r4, #0xc0
	lsl	r4, r4, #0xa
	and	r4, r4, r0
	lsr	r4, r4, #0x10
	sub	r4, r4, #0x2
	add	r0, r5, #0
	mov	r1, #0x3
	bl	sub_80799B4
	lsl	r0, r0, #0x10
	lsr	r0, r0, #0x10
	mov	r1, #0x58
	bl	__umodsi3
	lsl	r0, r0, #0x10
	lsr	r0, r0, #0x10
	add	r0, r0, #0x20
	add	r1, r6, #0
	add	r2, r4, #0
	bl	sub_80797B0
.Ltask05_08079840_9:
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
	thumb_func_end task05_08079840

