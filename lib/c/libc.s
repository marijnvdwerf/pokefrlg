    .include "asm/macros.inc"

    .text

	thumb_func_start memcpy
memcpy:
	push	{r4, r5, lr}
	add	r5, r0, #0
	add	r4, r5, #0
	add	r3, r1, #0
	cmp	r2, #0xf
	bls	.Lmemcpy_2	@cond_branch
	add	r0, r3, #0
	orr	r0, r0, r5
	mov	r1, #0x3
	and	r0, r0, r1
	cmp	r0, #0
	bne	.Lmemcpy_2	@cond_branch
	add	r1, r5, #0
.Lmemcpy_3:
	ldmia	r3!, {r0}
	stmia	r1!, {r0}
	ldmia	r3!, {r0}
	stmia	r1!, {r0}
	ldmia	r3!, {r0}
	stmia	r1!, {r0}
	ldmia	r3!, {r0}
	stmia	r1!, {r0}
	sub	r2, r2, #0x10
	cmp	r2, #0xf
	bhi	.Lmemcpy_3	@cond_branch
	cmp	r2, #0x3
	bls	.Lmemcpy_4	@cond_branch
.Lmemcpy_5:
	ldmia	r3!, {r0}
	stmia	r1!, {r0}
	sub	r2, r2, #0x4
	cmp	r2, #0x3
	bhi	.Lmemcpy_5	@cond_branch
.Lmemcpy_4:
	add	r4, r1, #0
.Lmemcpy_2:
	sub	r2, r2, #0x1
	mov	r0, #0x1
	neg	r0, r0
	cmp	r2, r0
	beq	.Lmemcpy_6	@cond_branch
	add	r1, r0, #0
.Lmemcpy_7:
	ldrb	r0, [r3]
	strb	r0, [r4]
	add	r3, r3, #0x1
	add	r4, r4, #0x1
	sub	r2, r2, #0x1
	cmp	r2, r1
	bne	.Lmemcpy_7	@cond_branch
.Lmemcpy_6:
	add	r0, r5, #0
	pop	{r4, r5, pc}
	thumb_func_end memcpy

	thumb_func_start memset
memset:
	push	{r4, r5, lr}
	add	r5, r0, #0
	add	r4, r1, #0
	add	r3, r5, #0
	cmp	r2, #0x3
	bls	.Lmemset_7	@cond_branch
	mov	r0, #0x3
	and	r0, r0, r5
	cmp	r0, #0
	bne	.Lmemset_7	@cond_branch
	add	r1, r5, #0
	mov	r0, #0xff
	and	r4, r4, r0
	lsl	r3, r4, #0x8
	orr	r3, r3, r4
	lsl	r0, r3, #0x10
	orr	r3, r3, r0
	cmp	r2, #0xf
	bls	.Lmemset_5	@cond_branch
.Lmemset_4:
	stmia	r1!, {r3}
	stmia	r1!, {r3}
	stmia	r1!, {r3}
	stmia	r1!, {r3}
	sub	r2, r2, #0x10
	cmp	r2, #0xf
	bhi	.Lmemset_4	@cond_branch
	b	.Lmemset_5
.Lmemset_6:
	stmia	r1!, {r3}
	sub	r2, r2, #0x4
.Lmemset_5:
	cmp	r2, #0x3
	bhi	.Lmemset_6	@cond_branch
	add	r3, r1, #0
	b	.Lmemset_7
.Lmemset_8:
	strb	r4, [r3]
	add	r3, r3, #0x1
.Lmemset_7:
	add	r0, r2, #0
	sub	r2, r2, #0x1
	cmp	r0, #0
	bne	.Lmemset_8	@cond_branch
	add	r0, r5, #0
	pop	{r4, r5, pc}
	thumb_func_end memset

	thumb_func_start strcmp
strcmp:
	push	{r4, r5, lr}
	add	r2, r0, #0
	add	r3, r1, #0
	orr	r0, r0, r3
	mov	r1, #0x3
	and	r0, r0, r1
	cmp	r0, #0
	bne	.Lstrcmp_8	@cond_branch
	ldr	r1, [r2]
	ldr	r0, [r3]
	cmp	r1, r0
	bne	.Lstrcmp_8	@cond_branch
	ldr	r5, .Lstrcmp_5 @ 0x0
	ldr	r4, .Lstrcmp_5 + 4 @ 0x0
.Lstrcmp_7:
	ldr	r1, [r2]
	add	r0, r1, r5
	BIC	r0, r1
	and	r0, r0, r4
	cmp	r0, #0
	beq	.Lstrcmp_3	@cond_branch
	mov	r0, #0x0
	b	.Lstrcmp_4
.Lstrcmp_6:
	.align	2, 0
.Lstrcmp_5:
	.word	0xfefefeff
	.word	0x80808080
.Lstrcmp_3:
	add	r2, r2, #0x4
	add	r3, r3, #0x4
	ldr	r1, [r2]
	ldr	r0, [r3]
	cmp	r1, r0
	beq	.Lstrcmp_7	@cond_branch
	b	.Lstrcmp_8
.Lstrcmp_10:
	add	r2, r2, #0x1
	add	r3, r3, #0x1
.Lstrcmp_8:
	ldrb	r0, [r2]
	cmp	r0, #0
	beq	.Lstrcmp_9	@cond_branch
	ldrb	r1, [r3]
	cmp	r0, r1
	beq	.Lstrcmp_10	@cond_branch
.Lstrcmp_9:
	ldrb	r2, [r2]
	ldrb	r3, [r3]
	sub	r0, r2, r3
.Lstrcmp_4:
	pop	{r4, r5, pc}
	thumb_func_end strcmp

	thumb_func_start strcat
strcat:
	push	{r4, r5, r6, lr}
	add	r6, r0, #0
	add	r3, r6, #0
	add	r2, r1, #0
	add	r0, r2, #0
	orr	r0, r0, r6
	mov	r1, #0x3
	and	r0, r0, r1
	cmp	r0, #0
	bne	.Lstrcat_6	@cond_branch
	ldr	r1, [r2]
	ldr	r5, .Lstrcat_3 @ 0x0
	add	r0, r1, r5
	BIC	r0, r1
	ldr	r4, .Lstrcat_3 + 4 @ 0x0
	b	.Lstrcat_2
.Lstrcat_4:
	.align	2, 0
.Lstrcat_3:
	.word	0xfefefeff
	.word	0x80808080
.Lstrcat_5:
	ldmia	r2!, {r0}
	stmia	r3!, {r0}
	ldr	r1, [r2]
	add	r0, r1, r5
	BIC	r0, r1
.Lstrcat_2:
	and	r0, r0, r4
	cmp	r0, #0
	beq	.Lstrcat_5	@cond_branch
.Lstrcat_6:
	ldrb	r0, [r2]
	strb	r0, [r3]
	lsl	r0, r0, #0x18
	add	r2, r2, #0x1
	add	r3, r3, #0x1
	cmp	r0, #0
	bne	.Lstrcat_6	@cond_branch
	add	r0, r6, #0
	pop	{r4, r5, r6, pc}
	thumb_func_end strcat

	thumb_func_start vsprintf
vsprintf:
	push	{r4, r5, lr}
	add	sp, sp, #0xffffffa8
	mov	r4, sp
	mov	r5, #0x0
	mov	r3, #0x82
	lsl	r3, r3, #0x2
	strh	r3, [r4, #0xc]
	str	r0, [sp]
	str	r0, [sp, #0x10]
	ldr	r0, .Lvsprintf_1 @ 0x0
	str	r0, [sp, #0x8]
	str	r0, [sp, #0x14]
	ldr	r0, .Lvsprintf_1 + 4 @ 0x0
	ldr	r0, [r0]
	str	r0, [sp, #0x54]
	mov	r0, sp
	bl	vfprintf
	ldr	r1, [sp]
	strb	r5, [r1]
	add	sp, sp, #0x58
	pop	{r4, r5, pc}
.Lvsprintf_2:
	.align	2, 0
.Lvsprintf_1:
	.word	0x7fffffff
	.word	0x203f754
	thumb_func_end vsprintf

	thumb_func_start __sprint
__sprint:
	push	{r4, lr}
	add	r4, r1, #0
	ldr	r1, [r4, #0x8]
	cmp	r1, #0
	beq	.L__sprint_1	@cond_branch
	add	r1, r4, #0
	bl	__sfvwrite
	mov	r1, #0x0
	str	r1, [r4, #0x8]
	str	r1, [r4, #0x4]
	b	.L__sprint_2
.L__sprint_1:
	str	r1, [r4, #0x4]
	mov	r0, #0x0
.L__sprint_2:
	pop	{r4, pc}
	thumb_func_end __sprint

	thumb_func_start __sbprintf
__sbprintf:
	push	{r4, r5, lr}
	ldr	r4, .L__sbprintf_4 @ 0x0
	add sp, sp, r4
	add	r5, r0, #0
	ldr	r0, [r5, #0x54]
	str	r0, [sp, #0x54]
	mov	r3, sp
	mov	r0, #0x3
	neg	r0, r0
	ldrh	r4, [r5, #0xc]
	and	r0, r0, r4
	mov	r4, #0x0
	strh	r0, [r3, #0xc]
	ldrh	r0, [r5, #0xe]
	strh	r0, [r3, #0xe]
	ldr	r0, [r5, #0x1c]
	str	r0, [sp, #0x1c]
	ldr	r0, [r5, #0x24]
	str	r0, [sp, #0x24]
	add	r0, sp, #0x58
	str	r0, [sp]
	str	r0, [sp, #0x10]
	mov	r0, #0x80
	lsl	r0, r0, #0x3
	str	r0, [sp, #0x8]
	str	r0, [sp, #0x14]
	str	r4, [sp, #0x18]
	mov	r0, sp
	bl	vfprintf
	add	r4, r0, #0
	cmp	r4, #0
	blt	.L__sbprintf_2	@cond_branch
	mov	r0, sp
	bl	fflush
	cmp	r0, #0
	beq	.L__sbprintf_2	@cond_branch
	mov	r4, #0x1
	neg	r4, r4
.L__sbprintf_2:
	mov	r1, sp
	mov	r0, #0x40
	ldrh	r1, [r1, #0xc]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L__sbprintf_3	@cond_branch
	mov	r0, #0x40
	ldrh	r1, [r5, #0xc]
	orr	r0, r0, r1
	strh	r0, [r5, #0xc]
.L__sbprintf_3:
	add	r0, r4, #0
	mov	r3, #0x8b
	lsl	r3, r3, #0x3
	add sp, sp, r3
	pop	{r4, r5, pc}
.L__sbprintf_5:
	.align	2, 0
.L__sbprintf_4:
	.word	0xfffffba8
	thumb_func_end __sbprintf

	thumb_func_start vfprintf
vfprintf:
	push	{r4, r5, lr}
	add	r4, r0, #0
	add	r5, r1, #0
	add	r3, r2, #0
	ldr	r0, [r4, #0x54]
	add	r1, r4, #0
	add	r2, r5, #0
	bl	_vfprintf_r
	pop	{r4, r5, pc}
	thumb_func_end vfprintf

	thumb_func_start _vfprintf_r
_vfprintf_r:
	push	{r4, r5, r6, r7, lr}
	mov	r7, sl
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7}
	ldr	r4, .L_vfprintf_r_7 @ 0x0
	add sp, sp, r4
	str	r0, [sp, #0x1dc]
	str	r1, [sp, #0x1e0]
	add	r4, r2, #0
	mov	sl, r3
	bl	localeconv
	ldr	r0, [r0]
	str	r0, [sp, #0x1f8]
	mov	r1, #0x0
	add	r0, sp, #0x1d0
	str	r1, [r0]
	ldr	r1, [sp, #0x1e0]
	ldr	r0, [r1, #0x54]
	cmp	r0, #0
	bne	.L_vfprintf_r_1	@cond_branch
	ldr	r0, .L_vfprintf_r_7 + 4 @ 0x0
	ldr	r0, [r0]
	str	r0, [r1, #0x54]
.L_vfprintf_r_1:
	ldr	r2, [sp, #0x1e0]
	ldr	r1, [r2, #0x54]
	ldr	r0, [r1, #0x38]
	cmp	r0, #0
	bne	.L_vfprintf_r_2	@cond_branch
	add	r0, r1, #0
	bl	__sinit
.L_vfprintf_r_2:
	mov	r0, #0x8
	ldr	r1, [sp, #0x1e0]
	ldrh	r1, [r1, #0xc]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_vfprintf_r_3	@cond_branch
	ldr	r2, [sp, #0x1e0]
	ldr	r0, [r2, #0x10]
	cmp	r0, #0
	bne	.L_vfprintf_r_5	@cond_branch
.L_vfprintf_r_3:
	ldr	r0, [sp, #0x1e0]
	bl	__swsetup
	cmp	r0, #0
	beq	.L_vfprintf_r_5	@cond_branch
	mov	r0, #0x1
	neg	r0, r0
	bl	.L_vfprintf_r_11
.L_vfprintf_r_8:
	.align	2, 0
.L_vfprintf_r_7:
	.word	0xfffffde0
	.word	0x203f754
.L_vfprintf_r_5:
	mov	r0, #0x1a
	ldr	r1, [sp, #0x1e0]
	ldrh	r1, [r1, #0xc]
	and	r0, r0, r1
	cmp	r0, #0xa
	bne	.L_vfprintf_r_10	@cond_branch
	ldr	r2, [sp, #0x1e0]
	mov	r1, #0xe
	ldsh	r0, [r2, r1]
	cmp	r0, #0
	blt	.L_vfprintf_r_10	@cond_branch
	add	r0, r2, #0
	add	r1, r4, #0
	mov	r2, sl
	bl	__sbprintf
	bl	.L_vfprintf_r_11
.L_vfprintf_r_10:
	str	r4, [sp, #0x1e4]
	add	r1, sp, #0x1c
	add	r5, sp, #0x28
	str	r5, [sp, #0x1c]
	mov	r0, #0x0
	str	r0, [r1, #0x8]
	str	r0, [r1, #0x4]
	mov	r2, #0x0
	str	r2, [sp, #0x1f0]
	mov	r9, r1
	mov	r4, #0xe6
	lsl	r4, r4, #0x1
	add r4, r4, sp
	str	r4, [sp, #0x214]
	mov	r0, #0xe8
	lsl	r0, r0, #0x1
	add r0, r0, sp
	str	r0, [sp, #0x218]
.L_vfprintf_r_400:
	ldr	r1, [sp, #0x1e4]
	mov	r8, r1
.L_vfprintf_r_13:
	ldr	r0, .L_vfprintf_r_22 @ 0x0
	ldr	r0, [r0]
	ldr	r1, .L_vfprintf_r_22 + 4 @ 0x0
	ldr	r3, [r1]
	ldr	r2, [sp, #0x218]
	str	r2, [sp]
	ldr	r1, [sp, #0x214]
	ldr	r2, [sp, #0x1e4]
	bl	_mbtowc_r
	add	r4, r0, #0
	cmp	r4, #0
	ble	.L_vfprintf_r_12	@cond_branch
	ldr	r0, [sp, #0x1e4]
	add	r0, r0, r4
	str	r0, [sp, #0x1e4]
	add	r0, sp, #0x1cc
	ldr	r0, [r0]
	cmp	r0, #0x25
	bne	.L_vfprintf_r_13	@cond_branch
	ldr	r1, [sp, #0x1e4]
	sub	r1, r1, #0x1
	str	r1, [sp, #0x1e4]
.L_vfprintf_r_12:
	ldr	r2, [sp, #0x1e4]
	mov	r0, r8
	sub	r6, r2, r0
	cmp	r6, #0
	beq	.L_vfprintf_r_14	@cond_branch
	str	r0, [r5]
	str	r6, [r5, #0x4]
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	add	r0, r0, r6
	str	r0, [r1, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r1, #0x4]
	add	r0, r0, #0x1
	str	r0, [r1, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_15	@cond_branch
	ldr	r0, [sp, #0x1e0]
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_16	@cond_branch
	bl	.L_vfprintf_r_404
.L_vfprintf_r_16:
	add	r5, sp, #0x28
.L_vfprintf_r_15:
	ldr	r2, [sp, #0x1f0]
	add	r2, r2, r6
	str	r2, [sp, #0x1f0]
.L_vfprintf_r_14:
	cmp	r4, #0
	bgt	.L_vfprintf_r_18	@cond_branch
	bl	.L_vfprintf_r_247
.L_vfprintf_r_18:
	ldr	r4, [sp, #0x1e4]
	add	r4, r4, #0x1
	str	r4, [sp, #0x1e4]
	mov	r0, #0x0
	str	r0, [sp, #0x1ec]
	mov	r1, #0x0
	str	r1, [sp, #0x208]
	mov	r2, #0x0
	str	r2, [sp, #0x1f4]
	mov	r6, #0x1
	neg	r6, r6
	ldr	r0, .L_vfprintf_r_22 + 8 @ 0x0
	add r0, r0, sp
	strb	r2, [r0]
.L_vfprintf_r_143:
	ldr	r0, [sp, #0x1e4]
	ldrb	r0, [r0]
	str	r0, [sp, #0x1e8]
	ldr	r1, [sp, #0x1e4]
	add	r1, r1, #0x1
	str	r1, [sp, #0x1e4]
.L_vfprintf_r_137:
	ldr	r0, [sp, #0x1e8]
	sub	r0, r0, #0x20
	cmp	r0, #0x58
	bls	.L_vfprintf_r_20	@cond_branch
	b	.L_vfprintf_r_112
.L_vfprintf_r_20:
	lsl	r0, r0, #0x2
	ldr	r1, .L_vfprintf_r_22 + 12 @ .L_vfprintf_r_24
	add	r0, r0, r1
	ldr	r0, [r0]
	mov	pc, r0
.L_vfprintf_r_23:
	.align	2, 0
.L_vfprintf_r_22:
	.word	0x203f754
	.word	0x203f758
	.word	0x1c9
	.word	.L_vfprintf_r_24
.L_vfprintf_r_24:
	.word	.L_vfprintf_r_25
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_28
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_35
	.word	.L_vfprintf_r_36
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_38
	.word	.L_vfprintf_r_39
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_41
	.word	.L_vfprintf_r_50
	.word	.L_vfprintf_r_50
	.word	.L_vfprintf_r_50
	.word	.L_vfprintf_r_50
	.word	.L_vfprintf_r_50
	.word	.L_vfprintf_r_50
	.word	.L_vfprintf_r_50
	.word	.L_vfprintf_r_50
	.word	.L_vfprintf_r_50
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_61
	.word	.L_vfprintf_r_96
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_96
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_69
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_72
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_78
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_81
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_92
	.word	.L_vfprintf_r_98
	.word	.L_vfprintf_r_96
	.word	.L_vfprintf_r_96
	.word	.L_vfprintf_r_96
	.word	.L_vfprintf_r_97
	.word	.L_vfprintf_r_98
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_101
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_103
	.word	.L_vfprintf_r_104
	.word	.L_vfprintf_r_105
	.word	.L_vfprintf_r_106
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_108
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_110
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_112
	.word	.L_vfprintf_r_113
.L_vfprintf_r_25:
	ldr	r1, .L_vfprintf_r_117 @ 0x0
	add r1, r1, sp
	ldrb	r0, [r1]
	cmp	r0, #0
	beq	.L_vfprintf_r_114	@cond_branch
	b	.L_vfprintf_r_143
.L_vfprintf_r_114:
	mov	r0, #0x20
	strb	r0, [r1]
	b	.L_vfprintf_r_143
.L_vfprintf_r_118:
	.align	2, 0
.L_vfprintf_r_117:
	.word	0x1c9
.L_vfprintf_r_28:
	mov	r0, #0x1
	b	.L_vfprintf_r_138
.L_vfprintf_r_35:
	mov	r4, #0x4
	add sl, sl, r4
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r0, [r0]
	str	r0, [sp, #0x1f4]
	cmp	r0, #0
	blt	.L_vfprintf_r_120	@cond_branch
	b	.L_vfprintf_r_143
.L_vfprintf_r_120:
	neg	r0, r0
	str	r0, [sp, #0x1f4]
.L_vfprintf_r_38:
	mov	r0, #0x4
	b	.L_vfprintf_r_135
.L_vfprintf_r_36:
	ldr	r1, .L_vfprintf_r_124 @ 0x0
	add r1, r1, sp
	mov	r0, #0x2b
	strb	r0, [r1]
	b	.L_vfprintf_r_143
.L_vfprintf_r_125:
	.align	2, 0
.L_vfprintf_r_124:
	.word	0x1c9
.L_vfprintf_r_39:
	ldr	r2, [sp, #0x1e4]
	ldrb	r2, [r2]
	str	r2, [sp, #0x1e8]
	ldr	r4, [sp, #0x1e4]
	add	r4, r4, #0x1
	str	r4, [sp, #0x1e4]
	cmp	r2, #0x2a
	bne	.L_vfprintf_r_126	@cond_branch
	mov	r0, #0x4
	add sl, sl, r0
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r4, [r0]
	add	r6, r4, #0
	mov	r0, #0x1
	neg	r0, r0
	cmp	r6, r0
	blt	.L_vfprintf_r_127	@cond_branch
	b	.L_vfprintf_r_143
.L_vfprintf_r_127:
	add	r6, r0, #0
	b	.L_vfprintf_r_143
.L_vfprintf_r_126:
	mov	r4, #0x0
	ldr	r0, [sp, #0x1e8]
	b	.L_vfprintf_r_130
.L_vfprintf_r_131:
	lsl	r0, r4, #0x2
	add	r0, r0, r4
	lsl	r0, r0, #0x1
	sub	r0, r0, #0x30
	ldr	r1, [sp, #0x1e8]
	add	r4, r0, r1
	ldr	r2, [sp, #0x1e4]
	ldrb	r2, [r2]
	str	r2, [sp, #0x1e8]
	ldr	r0, [sp, #0x1e4]
	add	r0, r0, #0x1
	str	r0, [sp, #0x1e4]
	add	r0, r2, #0
.L_vfprintf_r_130:
	sub	r0, r0, #0x30
	cmp	r0, #0x9
	bls	.L_vfprintf_r_131	@cond_branch
	add	r6, r4, #0
	mov	r0, #0x1
	neg	r0, r0
	cmp	r6, r0
	blt	.L_vfprintf_r_132	@cond_branch
	b	.L_vfprintf_r_137
.L_vfprintf_r_132:
	add	r6, r0, #0
	b	.L_vfprintf_r_137
.L_vfprintf_r_41:
	mov	r0, #0x80
	b	.L_vfprintf_r_135
.L_vfprintf_r_50:
	mov	r4, #0x0
.L_vfprintf_r_136:
	lsl	r0, r4, #0x2
	add	r0, r0, r4
	lsl	r0, r0, #0x1
	sub	r0, r0, #0x30
	ldr	r2, [sp, #0x1e8]
	add	r4, r0, r2
	ldr	r0, [sp, #0x1e4]
	ldrb	r0, [r0]
	str	r0, [sp, #0x1e8]
	ldr	r1, [sp, #0x1e4]
	add	r1, r1, #0x1
	str	r1, [sp, #0x1e4]
	sub	r0, r0, #0x30
	cmp	r0, #0x9
	bls	.L_vfprintf_r_136	@cond_branch
	str	r4, [sp, #0x1f4]
	b	.L_vfprintf_r_137
.L_vfprintf_r_69:
	mov	r0, #0x8
	b	.L_vfprintf_r_138
.L_vfprintf_r_97:
	mov	r0, #0x40
	b	.L_vfprintf_r_139
.L_vfprintf_r_101:
	ldr	r0, [sp, #0x1e4]
	ldrb	r0, [r0]
	cmp	r0, #0x6c
	bne	.L_vfprintf_r_140	@cond_branch
	ldr	r1, [sp, #0x1e4]
	add	r1, r1, #0x1
	str	r1, [sp, #0x1e4]
	mov	r0, #0x20
.L_vfprintf_r_138:
	ldr	r2, [sp, #0x1ec]
	orr	r2, r2, r0
	str	r2, [sp, #0x1ec]
	b	.L_vfprintf_r_143
.L_vfprintf_r_140:
	mov	r0, #0x10
.L_vfprintf_r_139:
	ldr	r4, [sp, #0x1ec]
	orr	r4, r4, r0
	str	r4, [sp, #0x1ec]
	b	.L_vfprintf_r_143
.L_vfprintf_r_106:
	mov	r0, #0x20
.L_vfprintf_r_135:
	ldr	r1, [sp, #0x1ec]
	orr	r1, r1, r0
	str	r1, [sp, #0x1ec]
	b	.L_vfprintf_r_143
.L_vfprintf_r_92:
	add	r2, sp, #0x68
	mov	r8, r2
	mov	r4, #0x4
	add sl, sl, r4
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r0, [r0]
	strb	r0, [r2]
	b	.L_vfprintf_r_144
.L_vfprintf_r_61:
	mov	r0, #0x10
	ldr	r1, [sp, #0x1ec]
	orr	r1, r1, r0
	str	r1, [sp, #0x1ec]
.L_vfprintf_r_98:
	mov	r0, #0x10
	ldr	r2, [sp, #0x1ec]
	and	r0, r0, r2
	cmp	r0, #0
	beq	.L_vfprintf_r_145	@cond_branch
	mov	r4, #0x4
	add sl, sl, r4
	b	.L_vfprintf_r_146
.L_vfprintf_r_145:
	mov	r0, #0x40
	ldr	r1, [sp, #0x1ec]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_vfprintf_r_147	@cond_branch
	mov	r2, #0x4
	add sl, sl, r2
	mov	r0, sl
	sub	r0, r0, #0x4
	mov	r1, #0x0
	ldsh	r4, [r0, r1]
	b	.L_vfprintf_r_148
.L_vfprintf_r_147:
	mov	r2, #0x4
	add sl, sl, r2
.L_vfprintf_r_146:
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r4, [r0]
.L_vfprintf_r_148:
	cmp	r4, #0
	bge	.L_vfprintf_r_149	@cond_branch
	neg	r4, r4
	ldr	r1, .L_vfprintf_r_151 @ 0x0
	add r1, r1, sp
	mov	r0, #0x2d
	strb	r0, [r1]
.L_vfprintf_r_149:
	mov	r2, #0x1
	b	.L_vfprintf_r_150
.L_vfprintf_r_152:
	.align	2, 0
.L_vfprintf_r_151:
	.word	0x1c9
.L_vfprintf_r_96:
	mov	r0, #0x1
	neg	r0, r0
	cmp	r6, r0
	bne	.L_vfprintf_r_153	@cond_branch
	mov	r6, #0x6
	b	.L_vfprintf_r_157
.L_vfprintf_r_153:
	ldr	r4, [sp, #0x1e8]
	cmp	r4, #0x67
	beq	.L_vfprintf_r_155	@cond_branch
	cmp	r4, #0x47
	bne	.L_vfprintf_r_157	@cond_branch
.L_vfprintf_r_155:
	cmp	r6, #0
	bne	.L_vfprintf_r_157	@cond_branch
	mov	r6, #0x1
.L_vfprintf_r_157:
	mov	r0, #0x8
	ldr	r1, [sp, #0x1ec]
	and	r0, r0, r1
	mov	r2, #0x8
	add sl, sl, r2
	mov	r0, sl
	sub	r0, r0, #0x8
	ldr	r1, [r0]
	ldr	r2, [r0, #0x4]
	str	r1, [sp, #0x1fc]
	str	r2, [sp, #0x200]
	ldr	r0, [sp, #0x1fc]
	ldr	r1, [sp, #0x200]
	bl	isinf
	cmp	r0, #0
	beq	.L_vfprintf_r_158	@cond_branch
	ldr	r3, .L_vfprintf_r_161 + 4 @ 0x0
	ldr	r2, .L_vfprintf_r_161 @ 0x0
	ldr	r0, [sp, #0x1fc]
	ldr	r1, [sp, #0x200]
	bl	__ltdf2
	cmp	r0, #0
	bge	.L_vfprintf_r_159	@cond_branch
	ldr	r1, .L_vfprintf_r_161 + 8 @ 0x0
	add r1, r1, sp
	mov	r0, #0x2d
	strb	r0, [r1]
.L_vfprintf_r_159:
	ldr	r2, .L_vfprintf_r_161 + 12 @ Data3+0x24
	mov	r8, r2
	mov	r3, #0x3
	b	.L_vfprintf_r_234
.L_vfprintf_r_162:
	.align	2, 0
.L_vfprintf_r_161:
	.word	0x0
	.word	0x0
	.word	0x1c9
	.word	Data3+0x24
.L_vfprintf_r_158:
	ldr	r0, [sp, #0x1fc]
	ldr	r1, [sp, #0x200]
	bl	isnan
	cmp	r0, #0
	beq	.L_vfprintf_r_163	@cond_branch
	ldr	r4, .L_vfprintf_r_165 @ Data3+0x28
	mov	r8, r4
	mov	r3, #0x3
	b	.L_vfprintf_r_234
.L_vfprintf_r_166:
	.align	2, 0
.L_vfprintf_r_165:
	.word	Data3+0x28
.L_vfprintf_r_163:
	mov	r0, #0x80
	lsl	r0, r0, #0x1
	ldr	r1, [sp, #0x1ec]
	orr	r1, r1, r0
	str	r1, [sp, #0x1ec]
	str	r1, [sp]
	add	r0, sp, #0x1c8
	str	r0, [sp, #0x4]
	add	r0, sp, #0x1d4
	str	r0, [sp, #0x8]
	ldr	r2, [sp, #0x1e8]
	str	r2, [sp, #0xc]
	add	r0, sp, #0x1d8
	str	r0, [sp, #0x10]
	ldr	r0, [sp, #0x1dc]
	ldr	r1, [sp, #0x1fc]
	ldr	r2, [sp, #0x200]
	add	r3, r6, #0
	bl	cvt
	mov	r8, r0
	ldr	r4, [sp, #0x1e8]
	cmp	r4, #0x67
	beq	.L_vfprintf_r_167	@cond_branch
	cmp	r4, #0x47
	bne	.L_vfprintf_r_172	@cond_branch
.L_vfprintf_r_167:
	add	r0, sp, #0x1d4
	ldr	r1, [r0]
	mov	r0, #0x4
	neg	r0, r0
	cmp	r1, r0
	ble	.L_vfprintf_r_169	@cond_branch
	cmp	r1, r6
	ble	.L_vfprintf_r_170	@cond_branch
.L_vfprintf_r_169:
	mov	r0, #0x45
	ldr	r1, [sp, #0x1e8]
	cmp	r1, #0x67
	bne	.L_vfprintf_r_171	@cond_branch
	mov	r0, #0x65
.L_vfprintf_r_171:
	str	r0, [sp, #0x1e8]
	b	.L_vfprintf_r_172
.L_vfprintf_r_170:
	mov	r2, #0x67
	str	r2, [sp, #0x1e8]
.L_vfprintf_r_172:
	ldr	r4, [sp, #0x1e8]
	cmp	r4, #0x65
	bgt	.L_vfprintf_r_173	@cond_branch
	add	r0, sp, #0x1d4
	ldr	r1, [r0]
	sub	r1, r1, #0x1
	str	r1, [r0]
	add	r0, sp, #0x14
	ldr	r2, [sp, #0x1e8]
	bl	exponent
	str	r0, [sp, #0x204]
	add	r0, sp, #0x1d8
	ldr	r0, [r0]
	ldr	r1, [sp, #0x204]
	add	r3, r1, r0
	cmp	r0, #0x1
	bgt	.L_vfprintf_r_174	@cond_branch
	b	.L_vfprintf_r_175
.L_vfprintf_r_173:
	ldr	r4, [sp, #0x1e8]
	cmp	r4, #0x66
	bne	.L_vfprintf_r_176	@cond_branch
	add	r0, sp, #0x1d4
	ldr	r0, [r0]
	cmp	r0, #0
	ble	.L_vfprintf_r_177	@cond_branch
	add	r3, r0, #0
	cmp	r6, #0
	bne	.L_vfprintf_r_178	@cond_branch
	mov	r0, #0x1
	ldr	r1, [sp, #0x1ec]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_vfprintf_r_186	@cond_branch
.L_vfprintf_r_178:
	add	r0, r3, #1
	add	r3, r0, r6
	b	.L_vfprintf_r_186
.L_vfprintf_r_177:
	add	r3, r6, #2
	b	.L_vfprintf_r_186
.L_vfprintf_r_176:
	add	r0, sp, #0x1d4
	ldr	r1, [r0]
	add	r0, sp, #0x1d8
	ldr	r0, [r0]
	cmp	r1, r0
	blt	.L_vfprintf_r_182	@cond_branch
	add	r3, r1, #0
.L_vfprintf_r_175:
	mov	r0, #0x1
	ldr	r2, [sp, #0x1ec]
	and	r0, r0, r2
	cmp	r0, #0
	beq	.L_vfprintf_r_186	@cond_branch
.L_vfprintf_r_174:
	add	r3, r3, #0x1
	b	.L_vfprintf_r_186
.L_vfprintf_r_182:
	cmp	r1, #0
	bgt	.L_vfprintf_r_185	@cond_branch
	add	r0, r0, #0x2
	sub	r3, r0, r1
	b	.L_vfprintf_r_186
.L_vfprintf_r_185:
	add	r3, r0, #1
.L_vfprintf_r_186:
	add	r0, sp, #0x1c8
	ldrb	r0, [r0]
	add	r7, r5, #0
	add	r7, r7, #0x8
	cmp	r0, #0
	bne	.L_vfprintf_r_187	@cond_branch
	b	.L_vfprintf_r_245
.L_vfprintf_r_187:
	ldr	r1, .L_vfprintf_r_190 @ 0x0
	add r1, r1, sp
	mov	r0, #0x2d
	strb	r0, [r1]
	b	.L_vfprintf_r_245
.L_vfprintf_r_191:
	.align	2, 0
.L_vfprintf_r_190:
	.word	0x1c9
.L_vfprintf_r_103:
	mov	r0, #0x10
	ldr	r4, [sp, #0x1ec]
	and	r0, r0, r4
	cmp	r0, #0
	beq	.L_vfprintf_r_192	@cond_branch
	mov	r0, #0x4
	add sl, sl, r0
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r0, [r0]
	ldr	r1, [sp, #0x1f0]
	str	r1, [r0]
	b	.L_vfprintf_r_400
.L_vfprintf_r_192:
	mov	r0, #0x40
	ldr	r2, [sp, #0x1ec]
	and	r2, r2, r0
	cmp	r2, #0
	beq	.L_vfprintf_r_194	@cond_branch
	mov	r4, #0x4
	add sl, sl, r4
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r0, [r0]
	add	r1, sp, #0x1f0
	ldrh	r1, [r1]
	strh	r1, [r0]
	b	.L_vfprintf_r_400
.L_vfprintf_r_194:
	mov	r2, #0x4
	add sl, sl, r2
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r0, [r0]
	ldr	r4, [sp, #0x1f0]
	str	r4, [r0]
	b	.L_vfprintf_r_400
.L_vfprintf_r_72:
	mov	r0, #0x10
	ldr	r1, [sp, #0x1ec]
	orr	r1, r1, r0
	str	r1, [sp, #0x1ec]
.L_vfprintf_r_104:
	mov	r0, #0x10
	ldr	r2, [sp, #0x1ec]
	and	r0, r0, r2
	cmp	r0, #0
	bne	.L_vfprintf_r_198	@cond_branch
	mov	r0, #0x40
	ldr	r1, [sp, #0x1ec]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_vfprintf_r_198	@cond_branch
	mov	r2, #0x4
	add sl, sl, r2
	mov	r0, sl
	sub	r0, r0, #0x4
	ldrh	r4, [r0]
	b	.L_vfprintf_r_199
.L_vfprintf_r_198:
	mov	r4, #0x4
	add sl, sl, r4
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r4, [r0]
.L_vfprintf_r_199:
	mov	r2, #0x0
	b	.L_vfprintf_r_227
.L_vfprintf_r_105:
	mov	r0, #0x4
	add sl, sl, r0
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r4, [r0]
	mov	r2, #0x2
	ldr	r1, .L_vfprintf_r_202 @ Data3+0x2c
	str	r1, [sp, #0x210]
	ldr	r0, [sp, #0x1ec]
	orr	r0, r0, r2
	str	r0, [sp, #0x1ec]
	mov	r1, #0x78
	str	r1, [sp, #0x1e8]
	b	.L_vfprintf_r_227
.L_vfprintf_r_203:
	.align	2, 0
.L_vfprintf_r_202:
	.word	Data3+0x2c
.L_vfprintf_r_108:
	mov	r2, #0x4
	add sl, sl, r2
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r0, [r0]
	mov	r8, r0
	cmp	r0, #0
	bne	.L_vfprintf_r_204	@cond_branch
	ldr	r4, .L_vfprintf_r_210 @ Data3+0x40
	mov	r8, r4
.L_vfprintf_r_204:
	cmp	r6, #0
	blt	.L_vfprintf_r_205	@cond_branch
	mov	r0, r8
	mov	r1, #0x0
	add	r2, r6, #0
	bl	memchr
	cmp	r0, #0
	beq	.L_vfprintf_r_207	@cond_branch
	mov	r1, r8
	sub	r3, r0, r1
	cmp	r3, r6
	bgt	.L_vfprintf_r_207	@cond_branch
	b	.L_vfprintf_r_212
.L_vfprintf_r_207:
	add	r3, r6, #0
	b	.L_vfprintf_r_212
.L_vfprintf_r_211:
	.align	2, 0
.L_vfprintf_r_210:
	.word	Data3+0x40
.L_vfprintf_r_205:
	mov	r0, r8
	bl	strlen
	add	r3, r0, #0
	b	.L_vfprintf_r_212
.L_vfprintf_r_78:
	mov	r0, #0x10
	ldr	r2, [sp, #0x1ec]
	orr	r2, r2, r0
	str	r2, [sp, #0x1ec]
.L_vfprintf_r_110:
	mov	r0, #0x10
	ldr	r4, [sp, #0x1ec]
	and	r0, r0, r4
	cmp	r0, #0
	beq	.L_vfprintf_r_213	@cond_branch
	mov	r0, #0x4
	add sl, sl, r0
	b	.L_vfprintf_r_214
.L_vfprintf_r_213:
	mov	r0, #0x40
	ldr	r1, [sp, #0x1ec]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_vfprintf_r_215	@cond_branch
	mov	r2, #0x4
	add sl, sl, r2
	mov	r0, sl
	sub	r0, r0, #0x4
	ldrh	r4, [r0]
	b	.L_vfprintf_r_216
.L_vfprintf_r_215:
	mov	r4, #0x4
	add sl, sl, r4
.L_vfprintf_r_214:
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r4, [r0]
.L_vfprintf_r_216:
	mov	r2, #0x1
	b	.L_vfprintf_r_227
.L_vfprintf_r_81:
	ldr	r0, .L_vfprintf_r_219 @ Data3+0x48
	str	r0, [sp, #0x210]
	b	.L_vfprintf_r_218
.L_vfprintf_r_220:
	.align	2, 0
.L_vfprintf_r_219:
	.word	Data3+0x48
.L_vfprintf_r_113:
	ldr	r1, .L_vfprintf_r_224 @ Data3+0x2c
	str	r1, [sp, #0x210]
.L_vfprintf_r_218:
	mov	r0, #0x10
	ldr	r2, [sp, #0x1ec]
	and	r0, r0, r2
	cmp	r0, #0
	bne	.L_vfprintf_r_222	@cond_branch
	mov	r0, #0x40
	ldr	r1, [sp, #0x1ec]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_vfprintf_r_222	@cond_branch
	mov	r2, #0x4
	add sl, sl, r2
	mov	r0, sl
	sub	r0, r0, #0x4
	ldrh	r4, [r0]
	b	.L_vfprintf_r_223
.L_vfprintf_r_225:
	.align	2, 0
.L_vfprintf_r_224:
	.word	Data3+0x2c
.L_vfprintf_r_222:
	mov	r4, #0x4
	add sl, sl, r4
	mov	r0, sl
	sub	r0, r0, #0x4
	ldr	r4, [r0]
.L_vfprintf_r_223:
	mov	r2, #0x2
	mov	r0, #0x1
	ldr	r1, [sp, #0x1ec]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_vfprintf_r_227	@cond_branch
	cmp	r4, #0
	beq	.L_vfprintf_r_227	@cond_branch
	orr	r1, r1, r2
	str	r1, [sp, #0x1ec]
.L_vfprintf_r_227:
	ldr	r1, .L_vfprintf_r_235 @ 0x0
	add r1, r1, sp
	mov	r0, #0x0
	strb	r0, [r1]
.L_vfprintf_r_150:
	str	r6, [sp, #0x208]
	cmp	r6, #0
	blt	.L_vfprintf_r_228	@cond_branch
	mov	r0, #0x81
	neg	r0, r0
	ldr	r1, [sp, #0x1ec]
	and	r1, r1, r0
	str	r1, [sp, #0x1ec]
.L_vfprintf_r_228:
	mov	r0, #0xe2
	lsl	r0, r0, #0x1
	add r0, r0, sp
	mov	r8, r0
	cmp	r4, #0
	bne	.L_vfprintf_r_229	@cond_branch
	add	r7, r5, #0
	add	r7, r7, #0x8
	ldr	r1, [sp, #0x208]
	cmp	r1, #0
	beq	.L_vfprintf_r_243	@cond_branch
.L_vfprintf_r_229:
	cmp	r2, #0x1
	beq	.L_vfprintf_r_231	@cond_branch
	cmp	r2, #0x1
	bcc	.L_vfprintf_r_232	@cond_branch
	cmp	r2, #0x2
	beq	.L_vfprintf_r_233	@cond_branch
	ldr	r2, .L_vfprintf_r_235 + 4 @ Data3+0x5c
	mov	r8, r2
	mov	r0, r8
	bl	strlen
	add	r3, r0, #0
	b	.L_vfprintf_r_234
.L_vfprintf_r_236:
	.align	2, 0
.L_vfprintf_r_235:
	.word	0x1c9
	.word	Data3+0x5c
.L_vfprintf_r_232:
	add	r7, r5, #0
	add	r7, r7, #0x8
	mov	r2, #0x7
.L_vfprintf_r_237:
	mov	r0, #0x1
	neg	r0, r0
	add r8, r8, r0
	add	r0, r4, #0
	and	r0, r0, r2
	add	r1, r0, #0
	add	r1, r1, #0x30
	mov	r0, r8
	strb	r1, [r0]
	lsr	r4, r4, #0x3
	cmp	r4, #0
	bne	.L_vfprintf_r_237	@cond_branch
	mov	r0, #0x1
	ldr	r2, [sp, #0x1ec]
	and	r0, r0, r2
	cmp	r0, #0
	beq	.L_vfprintf_r_243	@cond_branch
	cmp	r1, #0x30
	beq	.L_vfprintf_r_243	@cond_branch
	mov	r4, #0x1
	neg	r4, r4
	add r8, r8, r4
	mov	r0, #0x30
	mov	r1, r8
	strb	r0, [r1]
	b	.L_vfprintf_r_243
.L_vfprintf_r_231:
	add	r7, r5, #0
	add	r7, r7, #0x8
	cmp	r4, #0x9
	bls	.L_vfprintf_r_241	@cond_branch
.L_vfprintf_r_242:
	mov	r2, #0x1
	neg	r2, r2
	add r8, r8, r2
	add	r0, r4, #0
	mov	r1, #0xa
	bl	__umodsi3
	add	r0, r0, #0x30
	mov	r1, r8
	strb	r0, [r1]
	add	r0, r4, #0
	mov	r1, #0xa
	bl	__udivsi3
	add	r4, r0, #0
	cmp	r4, #0x9
	bhi	.L_vfprintf_r_242	@cond_branch
.L_vfprintf_r_241:
	mov	r2, #0x1
	neg	r2, r2
	add r8, r8, r2
	add	r0, r4, #0
	add	r0, r0, #0x30
	mov	r4, r8
	strb	r0, [r4]
	b	.L_vfprintf_r_243
.L_vfprintf_r_233:
	add	r7, r5, #0
	add	r7, r7, #0x8
	mov	r1, #0xf
.L_vfprintf_r_244:
	mov	r0, #0x1
	neg	r0, r0
	add r8, r8, r0
	add	r0, r4, #0
	and	r0, r0, r1
	ldr	r2, [sp, #0x210]
	add	r0, r2, r0
	ldrb	r0, [r0]
	mov	r2, r8
	strb	r0, [r2]
	lsr	r4, r4, #0x4
	cmp	r4, #0
	bne	.L_vfprintf_r_244	@cond_branch
.L_vfprintf_r_243:
	add	r4, sp, #0x14
	mov	r1, r8
	sub	r0, r4, r1
	mov	r2, #0xd8
	lsl	r2, r2, #0x1
	add	r3, r0, r2
	b	.L_vfprintf_r_245
.L_vfprintf_r_112:
	ldr	r4, [sp, #0x1e8]
	cmp	r4, #0
	bne	.L_vfprintf_r_246	@cond_branch
	b	.L_vfprintf_r_247
.L_vfprintf_r_246:
	add	r0, sp, #0x68
	mov	r8, r0
	strb	r4, [r0]
.L_vfprintf_r_144:
	mov	r3, #0x1
.L_vfprintf_r_212:
	ldr	r1, .L_vfprintf_r_251 @ 0x0
	add r1, r1, sp
	mov	r0, #0x0
	strb	r0, [r1]
.L_vfprintf_r_234:
	add	r7, r5, #0
	add	r7, r7, #0x8
.L_vfprintf_r_245:
	str	r3, [sp, #0x20c]
	ldr	r2, [sp, #0x208]
	cmp	r3, r2
	bge	.L_vfprintf_r_248	@cond_branch
	str	r2, [sp, #0x20c]
.L_vfprintf_r_248:
	ldr	r0, .L_vfprintf_r_251 @ 0x0
	add r0, r0, sp
	ldrb	r0, [r0]
	cmp	r0, #0
	beq	.L_vfprintf_r_249	@cond_branch
	ldr	r4, [sp, #0x20c]
	add	r4, r4, #0x1
	str	r4, [sp, #0x20c]
	b	.L_vfprintf_r_253
.L_vfprintf_r_252:
	.align	2, 0
.L_vfprintf_r_251:
	.word	0x1c9
.L_vfprintf_r_249:
	mov	r0, #0x2
	ldr	r1, [sp, #0x1ec]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_vfprintf_r_253	@cond_branch
	ldr	r2, [sp, #0x20c]
	add	r2, r2, #0x2
	str	r2, [sp, #0x20c]
.L_vfprintf_r_253:
	mov	r0, #0x84
	ldr	r4, [sp, #0x1ec]
	and	r0, r0, r4
	cmp	r0, #0
	bne	.L_vfprintf_r_261	@cond_branch
	ldr	r0, [sp, #0x1f4]
	ldr	r1, [sp, #0x20c]
	sub	r4, r0, r1
	cmp	r4, #0
	ble	.L_vfprintf_r_261	@cond_branch
	ldr	r1, .L_vfprintf_r_267 @ Data3+0x4
	cmp	r4, #0x10
	ble	.L_vfprintf_r_256	@cond_branch
	mov	r6, r9
.L_vfprintf_r_260:
	str	r1, [r5]
	mov	r0, #0x10
	str	r0, [r5, #0x4]
	ldr	r0, [r6, #0x8]
	add	r0, r0, #0x10
	str	r0, [r6, #0x8]
	add	r5, r7, #0
	ldr	r0, [r6, #0x4]
	add	r0, r0, #0x1
	str	r0, [r6, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_257	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	str	r3, [sp, #0x21c]
	bl	__sprint
	ldr	r3, [sp, #0x21c]
	cmp	r0, #0
	beq	.L_vfprintf_r_258	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_258:
	add	r5, sp, #0x28
	ldr	r1, .L_vfprintf_r_267 @ Data3+0x4
.L_vfprintf_r_257:
	sub	r4, r4, #0x10
	add	r7, r5, #0
	add	r7, r7, #0x8
	cmp	r4, #0x10
	bgt	.L_vfprintf_r_260	@cond_branch
.L_vfprintf_r_256:
	str	r1, [r5]
	str	r4, [r5, #0x4]
	mov	r2, r9
	ldr	r0, [r2, #0x8]
	add	r0, r0, r4
	str	r0, [r2, #0x8]
	add	r5, r7, #0
	ldr	r0, [r2, #0x4]
	add	r0, r0, #0x1
	str	r0, [r2, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_261	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	str	r3, [sp, #0x21c]
	bl	__sprint
	ldr	r3, [sp, #0x21c]
	cmp	r0, #0
	beq	.L_vfprintf_r_262	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_262:
	add	r5, sp, #0x28
.L_vfprintf_r_261:
	ldr	r1, .L_vfprintf_r_267 + 4 @ 0x0
	add r1, r1, sp
	ldrb	r0, [r1]
	cmp	r0, #0
	beq	.L_vfprintf_r_264	@cond_branch
	str	r1, [r5]
	mov	r0, #0x1
	str	r0, [r5, #0x4]
	mov	r4, r9
	ldr	r0, [r4, #0x8]
	add	r0, r0, #0x1
	str	r0, [r4, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r4, #0x4]
	add	r0, r0, #0x1
	str	r0, [r4, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_270	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	b	.L_vfprintf_r_266
.L_vfprintf_r_268:
	.align	2, 0
.L_vfprintf_r_267:
	.word	Data3+0x4
	.word	0x1c9
.L_vfprintf_r_264:
	mov	r2, #0x2
	ldr	r0, [sp, #0x1ec]
	and	r0, r0, r2
	cmp	r0, #0
	beq	.L_vfprintf_r_270	@cond_branch
	add	r1, sp, #0x1c4
	mov	r0, #0x30
	strb	r0, [r1]
	add	r0, sp, #0x1e8
	ldrb	r0, [r0]
	strb	r0, [r1, #0x1]
	str	r1, [r5]
	str	r2, [r5, #0x4]
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	add	r0, r0, #0x2
	str	r0, [r1, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r1, #0x4]
	add	r0, r0, #0x1
	str	r0, [r1, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_270	@cond_branch
	ldr	r0, [sp, #0x1e0]
.L_vfprintf_r_266:
	str	r3, [sp, #0x21c]
	bl	__sprint
	ldr	r3, [sp, #0x21c]
	cmp	r0, #0
	beq	.L_vfprintf_r_271	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_271:
	add	r5, sp, #0x28
.L_vfprintf_r_270:
	mov	r0, #0x84
	ldr	r2, [sp, #0x1ec]
	and	r0, r0, r2
	cmp	r0, #0x80
	bne	.L_vfprintf_r_280	@cond_branch
	ldr	r0, [sp, #0x1f4]
	ldr	r1, [sp, #0x20c]
	sub	r4, r0, r1
	cmp	r4, #0
	ble	.L_vfprintf_r_280	@cond_branch
	ldr	r1, .L_vfprintf_r_296 @ Data3+0x14
	cmp	r4, #0x10
	ble	.L_vfprintf_r_275	@cond_branch
	mov	r6, r9
.L_vfprintf_r_279:
	str	r1, [r5]
	mov	r0, #0x10
	str	r0, [r5, #0x4]
	ldr	r0, [r6, #0x8]
	add	r0, r0, #0x10
	str	r0, [r6, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r6, #0x4]
	add	r0, r0, #0x1
	str	r0, [r6, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_276	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	str	r3, [sp, #0x21c]
	bl	__sprint
	ldr	r3, [sp, #0x21c]
	cmp	r0, #0
	beq	.L_vfprintf_r_277	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_277:
	add	r5, sp, #0x28
	ldr	r1, .L_vfprintf_r_296 @ Data3+0x14
.L_vfprintf_r_276:
	sub	r4, r4, #0x10
	cmp	r4, #0x10
	bgt	.L_vfprintf_r_279	@cond_branch
.L_vfprintf_r_275:
	str	r1, [r5]
	str	r4, [r5, #0x4]
	mov	r2, r9
	ldr	r0, [r2, #0x8]
	add	r0, r0, r4
	str	r0, [r2, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r2, #0x4]
	add	r0, r0, #0x1
	str	r0, [r2, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_280	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	str	r3, [sp, #0x21c]
	bl	__sprint
	ldr	r3, [sp, #0x21c]
	cmp	r0, #0
	beq	.L_vfprintf_r_281	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_281:
	add	r5, sp, #0x28
.L_vfprintf_r_280:
	ldr	r0, [sp, #0x208]
	sub	r4, r0, r3
	cmp	r4, #0
	ble	.L_vfprintf_r_289	@cond_branch
	ldr	r1, .L_vfprintf_r_296 @ Data3+0x14
	cmp	r4, #0x10
	ble	.L_vfprintf_r_284	@cond_branch
	mov	r6, r9
.L_vfprintf_r_288:
	str	r1, [r5]
	mov	r0, #0x10
	str	r0, [r5, #0x4]
	ldr	r0, [r6, #0x8]
	add	r0, r0, #0x10
	str	r0, [r6, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r6, #0x4]
	add	r0, r0, #0x1
	str	r0, [r6, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_285	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	str	r3, [sp, #0x21c]
	bl	__sprint
	ldr	r3, [sp, #0x21c]
	cmp	r0, #0
	beq	.L_vfprintf_r_286	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_286:
	add	r5, sp, #0x28
	ldr	r1, .L_vfprintf_r_296 @ Data3+0x14
.L_vfprintf_r_285:
	sub	r4, r4, #0x10
	cmp	r4, #0x10
	bgt	.L_vfprintf_r_288	@cond_branch
.L_vfprintf_r_284:
	str	r1, [r5]
	str	r4, [r5, #0x4]
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	add	r0, r0, r4
	str	r0, [r1, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r1, #0x4]
	add	r0, r0, #0x1
	str	r0, [r1, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_289	@cond_branch
	ldr	r0, [sp, #0x1e0]
	str	r3, [sp, #0x21c]
	bl	__sprint
	ldr	r3, [sp, #0x21c]
	cmp	r0, #0
	beq	.L_vfprintf_r_290	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_290:
	add	r5, sp, #0x28
.L_vfprintf_r_289:
	mov	r0, #0x80
	lsl	r0, r0, #0x1
	ldr	r2, [sp, #0x1ec]
	and	r0, r0, r2
	cmp	r0, #0
	bne	.L_vfprintf_r_292	@cond_branch
	mov	r4, r8
	str	r4, [r5]
	str	r3, [r5, #0x4]
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	add	r0, r0, r3
	str	r0, [r1, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r1, #0x4]
	add	r0, r0, #0x1
	str	r0, [r1, #0x4]
	cmp	r0, #0x7
	bgt	.L_vfprintf_r_293	@cond_branch
	b	.L_vfprintf_r_387
.L_vfprintf_r_293:
	ldr	r0, [sp, #0x1e0]
	b	.L_vfprintf_r_295
.L_vfprintf_r_297:
	.align	2, 0
.L_vfprintf_r_296:
	.word	Data3+0x14
.L_vfprintf_r_292:
	ldr	r2, [sp, #0x1e8]
	cmp	r2, #0x65
	bgt	.L_vfprintf_r_298	@cond_branch
	b	.L_vfprintf_r_299
.L_vfprintf_r_298:
	ldr	r3, .L_vfprintf_r_318 + 4 @ 0x0
	ldr	r2, .L_vfprintf_r_318 @ 0x0
	ldr	r0, [sp, #0x1fc]
	ldr	r1, [sp, #0x200]
	bl	__eqdf2
	cmp	r0, #0
	bne	.L_vfprintf_r_300	@cond_branch
	ldr	r0, .L_vfprintf_r_318 + 8 @ Data3+0x78
	str	r0, [r5]
	mov	r6, #0x1
	str	r6, [r5, #0x4]
	mov	r4, r9
	ldr	r0, [r4, #0x8]
	add	r0, r0, #0x1
	str	r0, [r4, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r4, #0x4]
	add	r0, r0, #0x1
	str	r0, [r4, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_301	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_302	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_302:
	add	r5, sp, #0x28
.L_vfprintf_r_301:
	add	r0, sp, #0x1d4
	ldr	r1, [r0]
	add	r4, sp, #0x1d8
	ldr	r0, [r4]
	cmp	r1, r0
	blt	.L_vfprintf_r_305	@cond_branch
	ldr	r0, [sp, #0x1ec]
	and	r0, r0, r6
	cmp	r0, #0
	bne	.L_vfprintf_r_305	@cond_branch
	b	.L_vfprintf_r_387
.L_vfprintf_r_305:
	ldr	r0, [sp, #0x1f8]
	str	r0, [r5]
	str	r6, [r5, #0x4]
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	add	r0, r0, #0x1
	str	r0, [r1, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r1, #0x4]
	add	r0, r0, #0x1
	str	r0, [r1, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_307	@cond_branch
	ldr	r0, [sp, #0x1e0]
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_308	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_308:
	add	r5, sp, #0x28
.L_vfprintf_r_307:
	ldr	r0, [r4]
	sub	r4, r0, #1
	cmp	r4, #0
	bgt	.L_vfprintf_r_310	@cond_branch
	b	.L_vfprintf_r_387
.L_vfprintf_r_310:
	ldr	r1, .L_vfprintf_r_318 + 12 @ Data3+0x14
	cmp	r4, #0x10
	ble	.L_vfprintf_r_312	@cond_branch
	mov	r6, r9
.L_vfprintf_r_316:
	str	r1, [r5]
	mov	r0, #0x10
	str	r0, [r5, #0x4]
	ldr	r0, [r6, #0x8]
	add	r0, r0, #0x10
	str	r0, [r6, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r6, #0x4]
	add	r0, r0, #0x1
	str	r0, [r6, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_313	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_314	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_314:
	add	r5, sp, #0x28
	ldr	r1, .L_vfprintf_r_318 + 12 @ Data3+0x14
.L_vfprintf_r_313:
	sub	r4, r4, #0x10
	cmp	r4, #0x10
	bgt	.L_vfprintf_r_316	@cond_branch
.L_vfprintf_r_312:
	str	r1, [r5]
	str	r4, [r5, #0x4]
	mov	r2, r9
	ldr	r0, [r2, #0x8]
	add	r0, r0, r4
	b	.L_vfprintf_r_354
.L_vfprintf_r_319:
	.align	2, 0
.L_vfprintf_r_318:
	.word	0x0
	.word	0x0
	.word	Data3+0x78
	.word	Data3+0x14
.L_vfprintf_r_300:
	add	r6, sp, #0x1d4
	ldr	r2, [r6]
	cmp	r2, #0
	bgt	.L_vfprintf_r_320	@cond_branch
	ldr	r0, .L_vfprintf_r_337 @ Data3+0x78
	str	r0, [r5]
	mov	r4, #0x1
	str	r4, [r5, #0x4]
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	add	r0, r0, #0x1
	str	r0, [r1, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r1, #0x4]
	add	r0, r0, #0x1
	str	r0, [r1, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_321	@cond_branch
	ldr	r0, [sp, #0x1e0]
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_322	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_322:
	add	r5, sp, #0x28
.L_vfprintf_r_321:
	ldr	r2, [sp, #0x1f8]
	str	r2, [r5]
	str	r4, [r5, #0x4]
	mov	r4, r9
	ldr	r0, [r4, #0x8]
	add	r0, r0, #0x1
	str	r0, [r4, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r4, #0x4]
	add	r0, r0, #0x1
	str	r0, [r4, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_324	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_325	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_325:
	add	r5, sp, #0x28
.L_vfprintf_r_324:
	ldr	r0, [r6]
	neg	r4, r0
	cmp	r4, #0
	ble	.L_vfprintf_r_333	@cond_branch
	ldr	r1, .L_vfprintf_r_337 + 4 @ Data3+0x14
	cmp	r4, #0x10
	ble	.L_vfprintf_r_328	@cond_branch
	mov	r6, r9
.L_vfprintf_r_332:
	str	r1, [r5]
	mov	r0, #0x10
	str	r0, [r5, #0x4]
	ldr	r0, [r6, #0x8]
	add	r0, r0, #0x10
	str	r0, [r6, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r6, #0x4]
	add	r0, r0, #0x1
	str	r0, [r6, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_329	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_330	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_330:
	add	r5, sp, #0x28
	ldr	r1, .L_vfprintf_r_337 + 4 @ Data3+0x14
.L_vfprintf_r_329:
	sub	r4, r4, #0x10
	cmp	r4, #0x10
	bgt	.L_vfprintf_r_332	@cond_branch
.L_vfprintf_r_328:
	str	r1, [r5]
	str	r4, [r5, #0x4]
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	add	r0, r0, r4
	str	r0, [r1, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r1, #0x4]
	add	r0, r0, #0x1
	str	r0, [r1, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_333	@cond_branch
	ldr	r0, [sp, #0x1e0]
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_334	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_334:
	add	r5, sp, #0x28
.L_vfprintf_r_333:
	mov	r2, r8
	str	r2, [r5]
	add	r0, sp, #0x1d8
	ldr	r1, [r0]
	str	r1, [r5, #0x4]
	mov	r4, r9
	ldr	r0, [r4, #0x8]
	add	r0, r0, r1
	str	r0, [r4, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r4, #0x4]
	add	r0, r0, #0x1
	str	r0, [r4, #0x4]
	b	.L_vfprintf_r_336
.L_vfprintf_r_338:
	.align	2, 0
.L_vfprintf_r_337:
	.word	Data3+0x78
	.word	Data3+0x14
.L_vfprintf_r_320:
	add	r4, sp, #0x1d8
	ldr	r1, [r4]
	cmp	r2, r1
	blt	.L_vfprintf_r_339	@cond_branch
	mov	r0, r8
	str	r0, [r5]
	str	r1, [r5, #0x4]
	mov	r2, r9
	ldr	r0, [r2, #0x8]
	add	r0, r0, r1
	str	r0, [r2, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r2, #0x4]
	add	r0, r0, #0x1
	str	r0, [r2, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_340	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_341	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_341:
	add	r5, sp, #0x28
.L_vfprintf_r_340:
	ldr	r1, [r6]
	ldr	r0, [r4]
	sub	r4, r1, r0
	cmp	r4, #0
	ble	.L_vfprintf_r_349	@cond_branch
	ldr	r1, .L_vfprintf_r_355 @ Data3+0x14
	cmp	r4, #0x10
	ble	.L_vfprintf_r_344	@cond_branch
	mov	r6, r9
.L_vfprintf_r_348:
	str	r1, [r5]
	mov	r0, #0x10
	str	r0, [r5, #0x4]
	ldr	r0, [r6, #0x8]
	add	r0, r0, #0x10
	str	r0, [r6, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r6, #0x4]
	add	r0, r0, #0x1
	str	r0, [r6, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_345	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_346	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_346:
	add	r5, sp, #0x28
	ldr	r1, .L_vfprintf_r_355 @ Data3+0x14
.L_vfprintf_r_345:
	sub	r4, r4, #0x10
	cmp	r4, #0x10
	bgt	.L_vfprintf_r_348	@cond_branch
.L_vfprintf_r_344:
	str	r1, [r5]
	str	r4, [r5, #0x4]
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	add	r0, r0, r4
	str	r0, [r1, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r1, #0x4]
	add	r0, r0, #0x1
	str	r0, [r1, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_349	@cond_branch
	ldr	r0, [sp, #0x1e0]
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_350	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_350:
	add	r5, sp, #0x28
.L_vfprintf_r_349:
	mov	r1, #0x1
	ldr	r0, [sp, #0x1ec]
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_vfprintf_r_352	@cond_branch
	b	.L_vfprintf_r_387
.L_vfprintf_r_352:
	ldr	r0, .L_vfprintf_r_355 + 4 @ Data3+0x7c
	str	r0, [r5]
	str	r1, [r5, #0x4]
	mov	r2, r9
	ldr	r0, [r2, #0x8]
	add	r0, r0, #0x1
	b	.L_vfprintf_r_354
.L_vfprintf_r_356:
	.align	2, 0
.L_vfprintf_r_355:
	.word	Data3+0x14
	.word	Data3+0x7c
.L_vfprintf_r_339:
	mov	r0, r8
	str	r0, [r5]
	str	r2, [r5, #0x4]
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	add	r0, r0, r2
	str	r0, [r1, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r1, #0x4]
	add	r0, r0, #0x1
	str	r0, [r1, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_357	@cond_branch
	ldr	r0, [sp, #0x1e0]
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_358	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_358:
	add	r5, sp, #0x28
.L_vfprintf_r_357:
	ldr	r0, [r6]
	add r8, r8, r0
	ldr	r0, .L_vfprintf_r_364 @ Data3+0x7c
	str	r0, [r5]
	mov	r0, #0x1
	str	r0, [r5, #0x4]
	mov	r2, r9
	ldr	r0, [r2, #0x8]
	add	r0, r0, #0x1
	str	r0, [r2, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r2, #0x4]
	add	r0, r0, #0x1
	str	r0, [r2, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_360	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_361	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_361:
	add	r5, sp, #0x28
.L_vfprintf_r_360:
	mov	r0, r8
	str	r0, [r5]
	ldr	r1, [r4]
	ldr	r0, [r6]
	sub	r1, r1, r0
	b	.L_vfprintf_r_363
.L_vfprintf_r_365:
	.align	2, 0
.L_vfprintf_r_364:
	.word	Data3+0x7c
.L_vfprintf_r_299:
	add	r4, sp, #0x1d8
	ldr	r0, [r4]
	cmp	r0, #0x1
	bgt	.L_vfprintf_r_366	@cond_branch
	mov	r1, #0x1
	ldr	r0, [sp, #0x1ec]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_vfprintf_r_367	@cond_branch
.L_vfprintf_r_366:
	add	r1, sp, #0x1c4
	mov	r2, r8
	ldrb	r0, [r2]
	strb	r0, [r1]
	mov	r0, #0x1
	add r8, r8, r0
	mov	r0, #0x2e
	strb	r0, [r1, #0x1]
	str	r1, [r5]
	mov	r0, #0x2
	str	r0, [r5, #0x4]
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	add	r0, r0, #0x2
	str	r0, [r1, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r1, #0x4]
	add	r0, r0, #0x1
	str	r0, [r1, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_368	@cond_branch
	ldr	r0, [sp, #0x1e0]
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_369	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_369:
	add	r5, sp, #0x28
.L_vfprintf_r_368:
	ldr	r3, .L_vfprintf_r_373 + 4 @ 0x0
	ldr	r2, .L_vfprintf_r_373 @ 0x0
	ldr	r0, [sp, #0x1fc]
	ldr	r1, [sp, #0x200]
	bl	__nedf2
	cmp	r0, #0
	beq	.L_vfprintf_r_371	@cond_branch
	mov	r2, r8
	str	r2, [r5]
	ldr	r1, [r4]
	sub	r0, r1, #1
	str	r0, [r5, #0x4]
	mov	r4, r9
	ldr	r0, [r4, #0x8]
	sub	r0, r0, #0x1
	add	r0, r0, r1
	b	.L_vfprintf_r_372
.L_vfprintf_r_374:
	.align	2, 0
.L_vfprintf_r_373:
	.word	0x0
	.word	0x0
.L_vfprintf_r_371:
	ldr	r0, [r4]
	sub	r4, r0, #1
	cmp	r4, #0
	ble	.L_vfprintf_r_385	@cond_branch
	ldr	r1, .L_vfprintf_r_383 @ Data3+0x14
	cmp	r4, #0x10
	ble	.L_vfprintf_r_376	@cond_branch
	mov	r6, r9
.L_vfprintf_r_380:
	str	r1, [r5]
	mov	r0, #0x10
	str	r0, [r5, #0x4]
	ldr	r0, [r6, #0x8]
	add	r0, r0, #0x10
	str	r0, [r6, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r6, #0x4]
	add	r0, r0, #0x1
	str	r0, [r6, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_377	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	bl	__sprint
	cmp	r0, #0
	beq	.L_vfprintf_r_378	@cond_branch
	b	.L_vfprintf_r_404
.L_vfprintf_r_378:
	add	r5, sp, #0x28
	ldr	r1, .L_vfprintf_r_383 @ Data3+0x14
.L_vfprintf_r_377:
	sub	r4, r4, #0x10
	cmp	r4, #0x10
	bgt	.L_vfprintf_r_380	@cond_branch
.L_vfprintf_r_376:
	str	r1, [r5]
	str	r4, [r5, #0x4]
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	add	r0, r0, r4
	str	r0, [r1, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r1, #0x4]
	add	r0, r0, #0x1
	str	r0, [r1, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_385	@cond_branch
	ldr	r0, [sp, #0x1e0]
	b	.L_vfprintf_r_382
.L_vfprintf_r_384:
	.align	2, 0
.L_vfprintf_r_383:
	.word	Data3+0x14
.L_vfprintf_r_367:
	mov	r2, r8
	str	r2, [r5]
	str	r1, [r5, #0x4]
	mov	r4, r9
	ldr	r0, [r4, #0x8]
	add	r0, r0, #0x1
.L_vfprintf_r_372:
	str	r0, [r4, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r4, #0x4]
	add	r0, r0, #0x1
	str	r0, [r4, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_385	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
.L_vfprintf_r_382:
	bl	__sprint
	cmp	r0, #0
	bne	.L_vfprintf_r_404	@cond_branch
	add	r5, sp, #0x28
.L_vfprintf_r_385:
	add	r0, sp, #0x14
	str	r0, [r5]
	ldr	r1, [sp, #0x204]
.L_vfprintf_r_363:
	str	r1, [r5, #0x4]
	mov	r2, r9
	ldr	r0, [r2, #0x8]
	add	r0, r0, r1
.L_vfprintf_r_354:
	str	r0, [r2, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r2, #0x4]
	add	r0, r0, #0x1
	str	r0, [r2, #0x4]
.L_vfprintf_r_336:
	cmp	r0, #0x7
	ble	.L_vfprintf_r_387	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
.L_vfprintf_r_295:
	bl	__sprint
	cmp	r0, #0
	bne	.L_vfprintf_r_404	@cond_branch
	add	r5, sp, #0x28
.L_vfprintf_r_387:
	mov	r0, #0x4
	ldr	r4, [sp, #0x1ec]
	and	r4, r4, r0
	cmp	r4, #0
	beq	.L_vfprintf_r_395	@cond_branch
	ldr	r0, [sp, #0x1f4]
	ldr	r1, [sp, #0x20c]
	sub	r4, r0, r1
	cmp	r4, #0
	ble	.L_vfprintf_r_395	@cond_branch
	ldr	r1, .L_vfprintf_r_401 @ Data3+0x4
	cmp	r4, #0x10
	ble	.L_vfprintf_r_391	@cond_branch
	mov	r6, r9
.L_vfprintf_r_394:
	str	r1, [r5]
	mov	r0, #0x10
	str	r0, [r5, #0x4]
	ldr	r0, [r6, #0x8]
	add	r0, r0, #0x10
	str	r0, [r6, #0x8]
	add	r5, r5, #0x8
	ldr	r0, [r6, #0x4]
	add	r0, r0, #0x1
	str	r0, [r6, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_392	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	bl	__sprint
	cmp	r0, #0
	bne	.L_vfprintf_r_404	@cond_branch
	add	r5, sp, #0x28
	ldr	r1, .L_vfprintf_r_401 @ Data3+0x4
.L_vfprintf_r_392:
	sub	r4, r4, #0x10
	cmp	r4, #0x10
	bgt	.L_vfprintf_r_394	@cond_branch
.L_vfprintf_r_391:
	str	r1, [r5]
	str	r4, [r5, #0x4]
	mov	r2, r9
	ldr	r0, [r2, #0x8]
	add	r0, r0, r4
	str	r0, [r2, #0x8]
	ldr	r0, [r2, #0x4]
	add	r0, r0, #0x1
	str	r0, [r2, #0x4]
	cmp	r0, #0x7
	ble	.L_vfprintf_r_395	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	bl	__sprint
	cmp	r0, #0
	bne	.L_vfprintf_r_404	@cond_branch
.L_vfprintf_r_395:
	ldr	r0, [sp, #0x20c]
	ldr	r4, [sp, #0x1f4]
	cmp	r0, r4
	bge	.L_vfprintf_r_397	@cond_branch
	add	r0, r4, #0
.L_vfprintf_r_397:
	ldr	r1, [sp, #0x1f0]
	add	r1, r1, r0
	str	r1, [sp, #0x1f0]
	mov	r2, r9
	ldr	r0, [r2, #0x8]
	cmp	r0, #0
	beq	.L_vfprintf_r_398	@cond_branch
	ldr	r0, [sp, #0x1e0]
	mov	r1, r9
	bl	__sprint
	cmp	r0, #0
	bne	.L_vfprintf_r_404	@cond_branch
.L_vfprintf_r_398:
	mov	r0, #0x0
	mov	r4, r9
	str	r0, [r4, #0x4]
	add	r5, sp, #0x28
	bl	.L_vfprintf_r_400
.L_vfprintf_r_402:
	.align	2, 0
.L_vfprintf_r_401:
	.word	Data3+0x4
.L_vfprintf_r_247:
	mov	r1, r9
	ldr	r0, [r1, #0x8]
	cmp	r0, #0
	beq	.L_vfprintf_r_403	@cond_branch
	ldr	r0, [sp, #0x1e0]
	bl	__sprint
	cmp	r0, #0
	bne	.L_vfprintf_r_404	@cond_branch
.L_vfprintf_r_403:
	mov	r0, #0x0
	mov	r1, r9
	str	r0, [r1, #0x4]
.L_vfprintf_r_404:
	mov	r0, #0x40
	ldr	r2, [sp, #0x1e0]
	ldrh	r2, [r2, #0xc]
	and	r0, r0, r2
	mov	r1, #0x1
	neg	r1, r1
	cmp	r0, #0
	bne	.L_vfprintf_r_405	@cond_branch
	ldr	r1, [sp, #0x1f0]
.L_vfprintf_r_405:
	add	r0, r1, #0
.L_vfprintf_r_11:
	mov	r3, #0x88
	lsl	r3, r3, #0x2
	add sp, sp, r3
	pop	{r3, r4, r5}
	mov	r8, r3
	mov	r9, r4
	mov	sl, r5
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end _vfprintf_r

	thumb_func_start cvt
cvt:
	push	{r4, r5, r6, r7, lr}
	mov	r7, sl
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7}
	add	sp, sp, #0xffffffe4
	str	r0, [sp, #0x18]
	add	r5, r2, #0
	add	r4, r1, #0
	mov	r8, r3
	ldr	r6, [sp, #0x3c]
	ldr	r0, [sp, #0x44]
	mov	sl, r0
	ldr	r1, [sp, #0x48]
	mov	r9, r1
	cmp	r1, #0x66
	bne	.Lcvt_1	@cond_branch
	mov	r7, #0x3
	b	.Lcvt_2
.Lcvt_1:
	mov	r0, r9
	cmp	r0, #0x65
	beq	.Lcvt_3	@cond_branch
	cmp	r0, #0x45
	bne	.Lcvt_4	@cond_branch
.Lcvt_3:
	mov	r1, #0x1
	add r8, r8, r1
.Lcvt_4:
	mov	r7, #0x2
.Lcvt_2:
	lsl	r0, r4, #0x1f
	lsr	r0, r0, #0x1f
	cmp	r0, #0
	beq	.Lcvt_5	@cond_branch
	add	r1, r5, #0
	add	r0, r4, #0
	bl	__negdf2
	add	r5, r1, #0
	add	r4, r0, #0
	mov	r0, #0x2d
.Lcvt_5:
	ldr	r1, [sp, #0x40]
	strb	r0, [r1]
	mov	r0, r8
	str	r0, [sp]
	mov	r1, sl
	str	r1, [sp, #0x4]
	add	r0, sp, #0x10
	str	r0, [sp, #0x8]
	add	r0, sp, #0x14
	str	r0, [sp, #0xc]
	ldr	r0, [sp, #0x18]
	add	r2, r5, #0
	add	r1, r4, #0
	add	r3, r7, #0
	bl	_dtoa_r
	add	r7, r0, #0
	mov	r1, r9
	cmp	r1, #0x67
	beq	.Lcvt_6	@cond_branch
	cmp	r1, #0x47
	bne	.Lcvt_7	@cond_branch
.Lcvt_6:
	mov	r0, #0x1
	and	r6, r6, r0
	cmp	r6, #0
	beq	.Lcvt_13	@cond_branch
.Lcvt_7:
	mov	r0, r8
	add	r6, r7, r0
	mov	r1, r9
	cmp	r1, #0x66
	bne	.Lcvt_9	@cond_branch
	ldrb	r0, [r7]
	cmp	r0, #0x30
	bne	.Lcvt_11	@cond_branch
	ldr	r3, .Lcvt_15 + 4 @ 0x0
	ldr	r2, .Lcvt_15 @ 0x0
	add	r1, r5, #0
	add	r0, r4, #0
	bl	__nedf2
	cmp	r0, #0
	beq	.Lcvt_11	@cond_branch
	mov	r1, r8
	neg	r0, r1
	add	r0, r0, #0x1
	mov	r1, sl
	str	r0, [r1]
.Lcvt_11:
	mov	r1, sl
	ldr	r0, [r1]
	add	r6, r6, r0
.Lcvt_9:
	ldr	r3, .Lcvt_15 + 4 @ 0x0
	ldr	r2, .Lcvt_15 @ 0x0
	add	r1, r5, #0
	add	r0, r4, #0
	bl	__eqdf2
	cmp	r0, #0
	bne	.Lcvt_12	@cond_branch
	str	r6, [sp, #0x14]
.Lcvt_12:
	ldr	r0, [sp, #0x14]
	cmp	r0, r6
	bcs	.Lcvt_13	@cond_branch
	mov	r1, #0x30
.Lcvt_14:
	strb	r1, [r0]
	add	r0, r0, #0x1
	str	r0, [sp, #0x14]
	cmp	r0, r6
	bcc	.Lcvt_14	@cond_branch
.Lcvt_13:
	ldr	r0, [sp, #0x14]
	sub	r0, r0, r7
	ldr	r1, [sp, #0x4c]
	str	r0, [r1]
	add	r0, r7, #0
	add	sp, sp, #0x1c
	pop	{r3, r4, r5}
	mov	r8, r3
	mov	r9, r4
	mov	sl, r5
	pop	{r4, r5, r6, r7, pc}
.Lcvt_16:
	.align	2, 0
.Lcvt_15:
	.word	0x0
	.word	0x0
	thumb_func_end cvt

	thumb_func_start exponent
exponent:
	push	{r4, r5, r6, r7, lr}
	add	sp, sp, #0xfffffecc
	add	r7, r0, #0
	add	r6, r1, #0
	strb	r2, [r7]
	add	r5, r7, #1
	cmp	r6, #0
	bge	.Lexponent_1	@cond_branch
	neg	r6, r6
	mov	r0, #0x2d
	b	.Lexponent_2
.Lexponent_1:
	mov	r0, #0x2b
.Lexponent_2:
	strb	r0, [r7, #0x1]
	add	r5, r5, #0x1
	add	r4, sp, #0x134
	cmp	r6, #0x9
	ble	.Lexponent_3	@cond_branch
.Lexponent_4:
	sub	r4, r4, #0x1
	add	r0, r6, #0
	mov	r1, #0xa
	bl	__modsi3
	add	r0, r0, #0x30
	strb	r0, [r4]
	add	r0, r6, #0
	mov	r1, #0xa
	bl	__divsi3
	add	r6, r0, #0
	cmp	r6, #0x9
	bgt	.Lexponent_4	@cond_branch
	sub	r4, r4, #0x1
	add	r0, r0, #0x30
	strb	r0, [r4]
	add	r0, sp, #0x134
	cmp	r4, r0
	bcs	.Lexponent_7	@cond_branch
	add	r1, r0, #0
.Lexponent_6:
	ldrb	r0, [r4]
	strb	r0, [r5]
	add	r4, r4, #0x1
	add	r5, r5, #0x1
	cmp	r4, r1
	bcc	.Lexponent_6	@cond_branch
	b	.Lexponent_7
.Lexponent_3:
	mov	r0, #0x30
	strb	r0, [r5]
	add	r5, r5, #0x1
	add	r0, r6, #0
	add	r0, r0, #0x30
	strb	r0, [r5]
	add	r5, r5, #0x1
.Lexponent_7:
	sub	r0, r5, r7
	add	sp, sp, #0x134
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end exponent

	thumb_func_start __swsetup
__swsetup:
	push	{r4, r5, lr}
	add	r4, r0, #0
	ldr	r0, [r4, #0x54]
	cmp	r0, #0
	bne	.L__swsetup_1	@cond_branch
	ldr	r0, .L__swsetup_6 @ 0x0
	ldr	r0, [r0]
	str	r0, [r4, #0x54]
.L__swsetup_1:
	ldr	r1, [r4, #0x54]
	ldr	r0, [r1, #0x38]
	cmp	r0, #0
	bne	.L__swsetup_2	@cond_branch
	add	r0, r1, #0
	bl	__sinit
.L__swsetup_2:
	ldrh	r1, [r4, #0xc]
	mov	r0, #0x8
	and	r0, r0, r1
	lsl	r0, r0, #0x10
	asr	r5, r0, #0x10
	cmp	r5, #0
	bne	.L__swsetup_3	@cond_branch
	mov	r0, #0x10
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L__swsetup_4	@cond_branch
	mov	r0, #0x1
	neg	r0, r0
	b	.L__swsetup_5
.L__swsetup_7:
	.align	2, 0
.L__swsetup_6:
	.word	0x203f754
.L__swsetup_4:
	mov	r0, #0x4
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L__swsetup_8	@cond_branch
	ldr	r1, [r4, #0x30]
	cmp	r1, #0
	beq	.L__swsetup_9	@cond_branch
	add	r0, r4, #0
	add	r0, r0, #0x40
	cmp	r1, r0
	beq	.L__swsetup_10	@cond_branch
	ldr	r0, [r4, #0x54]
	bl	_free_r
.L__swsetup_10:
	str	r5, [r4, #0x30]
.L__swsetup_9:
	mov	r0, #0x25
	neg	r0, r0
	ldrh	r1, [r4, #0xc]
	and	r0, r0, r1
	mov	r1, #0x0
	strh	r0, [r4, #0xc]
	str	r1, [r4, #0x4]
	ldr	r0, [r4, #0x10]
	str	r0, [r4]
.L__swsetup_8:
	mov	r0, #0x8
	ldrh	r1, [r4, #0xc]
	orr	r0, r0, r1
	strh	r0, [r4, #0xc]
.L__swsetup_3:
	ldr	r0, [r4, #0x10]
	cmp	r0, #0
	bne	.L__swsetup_11	@cond_branch
	add	r0, r4, #0
	bl	__smakebuf
.L__swsetup_11:
	ldrh	r1, [r4, #0xc]
	mov	r0, #0x1
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L__swsetup_12	@cond_branch
	mov	r0, #0x0
	str	r0, [r4, #0x8]
	ldr	r0, [r4, #0x14]
	neg	r0, r0
	str	r0, [r4, #0x18]
	b	.L__swsetup_13
.L__swsetup_12:
	mov	r0, #0x2
	and	r0, r0, r1
	mov	r1, #0x0
	cmp	r0, #0
	bne	.L__swsetup_14	@cond_branch
	ldr	r1, [r4, #0x14]
.L__swsetup_14:
	str	r1, [r4, #0x8]
.L__swsetup_13:
	mov	r0, #0x0
.L__swsetup_5:
	pop	{r4, r5, pc}
	thumb_func_end __swsetup

	thumb_func_start quorem
quorem:
	push	{r4, r5, r6, r7, lr}
	mov	r7, sl
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7}
	add	sp, sp, #0xffffffe8
	str	r0, [sp]
	str	r1, [sp, #0x4]
	ldr	r7, [r1, #0x10]
	ldr	r0, [r0, #0x10]
	cmp	r0, r7
	bge	.Lquorem_1	@cond_branch
	mov	r0, #0x0
	b	.Lquorem_2
.Lquorem_1:
	ldr	r0, [sp, #0x4]
	add	r0, r0, #0x14
	mov	r8, r0
	sub	r7, r7, #0x1
	lsl	r0, r7, #0x2
	mov	r1, r8
	add	r1, r1, r0
	str	r1, [sp, #0xc]
	ldr	r4, [sp]
	add	r4, r4, #0x14
	add	r5, r4, r0
	ldr	r1, [r1]
	add	r1, r1, #0x1
	ldr	r2, [r5]
	mov	sl, r2
	mov	r0, sl
	bl	__udivsi3
	str	r0, [sp, #0x8]
	mov	r3, r8
	str	r3, [sp, #0x14]
	str	r4, [sp, #0x10]
	cmp	r0, #0
	beq	.Lquorem_5	@cond_branch
	mov	r6, #0x0
	mov	r9, r6
	ldr	r0, .Lquorem_7 @ 0x0
	mov	ip, r0
.Lquorem_4:
	mov	r2, r8
	add	r2, r2, #0x4
	mov	r8, r2
	sub	r2, r2, #0x4
	ldmia	r2!, {r1}
	add	r0, r1, #0
	mov	r3, ip
	and	r0, r0, r3
	ldr	r2, [sp, #0x8]
	mul	r0, r0, r2
	mov	r3, r9
	add	r2, r0, r3
	lsr	r0, r1, #0x10
	ldr	r3, [sp, #0x8]
	add	r1, r0, #0
	mul	r1, r1, r3
	lsr	r0, r2, #0x10
	add	r3, r1, r0
	lsr	r0, r3, #0x10
	mov	r9, r0
	ldr	r0, [r4]
	mov	r1, ip
	and	r0, r0, r1
	and	r2, r2, r1
	sub	r0, r0, r2
	add	r2, r0, r6
	asr	r6, r2, #0x10
	ldr	r0, [r4]
	lsr	r1, r0, #0x10
	mov	r0, ip
	and	r3, r3, r0
	sub	r1, r1, r3
	add	r0, r1, r6
	asr	r6, r0, #0x10
	strh	r0, [r4]
	strh	r2, [r4, #0x2]
	add	r4, r4, #0x4
	ldr	r1, [sp, #0xc]
	cmp	r8, r1
	bls	.Lquorem_4	@cond_branch
	mov	r2, sl
	cmp	r2, #0
	bne	.Lquorem_5	@cond_branch
	ldr	r4, [sp, #0x10]
	b	.Lquorem_6
.Lquorem_8:
	.align	2, 0
.Lquorem_7:
	.word	0xffff
.Lquorem_10:
	sub	r7, r7, #0x1
.Lquorem_6:
	sub	r5, r5, #0x4
	cmp	r5, r4
	bls	.Lquorem_9	@cond_branch
	ldr	r0, [r5]
	cmp	r0, #0
	beq	.Lquorem_10	@cond_branch
.Lquorem_9:
	ldr	r3, [sp]
	str	r7, [r3, #0x10]
.Lquorem_5:
	ldr	r0, [sp]
	ldr	r1, [sp, #0x4]
	bl	__mcmp
	cmp	r0, #0
	blt	.Lquorem_13	@cond_branch
	ldr	r0, [sp, #0x8]
	add	r0, r0, #0x1
	str	r0, [sp, #0x8]
	mov	r6, #0x0
	mov	r9, r6
	ldr	r4, [sp, #0x10]
	ldr	r1, [sp, #0x14]
	mov	r8, r1
	lsl	r2, r7, #0x2
	mov	sl, r2
	ldr	r5, .Lquorem_15 @ 0x0
.Lquorem_12:
	mov	r3, r8
	add	r3, r3, #0x4
	mov	r8, r3
	sub	r3, r3, #0x4
	ldmia	r3!, {r1}
	add	r0, r1, #0
	and	r0, r0, r5
	mov	r3, r9
	add	r2, r0, r3
	lsr	r1, r1, #0x10
	lsr	r0, r2, #0x10
	add	r3, r1, r0
	lsr	r0, r3, #0x10
	mov	r9, r0
	ldr	r1, [r4]
	add	r0, r1, #0
	and	r0, r0, r5
	and	r2, r2, r5
	sub	r0, r0, r2
	add	r2, r0, r6
	asr	r6, r2, #0x10
	lsr	r1, r1, #0x10
	and	r3, r3, r5
	sub	r1, r1, r3
	add	r0, r1, r6
	asr	r6, r0, #0x10
	strh	r0, [r4]
	strh	r2, [r4, #0x2]
	add	r4, r4, #0x4
	ldr	r1, [sp, #0xc]
	cmp	r8, r1
	bls	.Lquorem_12	@cond_branch
	ldr	r4, [sp, #0x10]
	mov	r2, sl
	add	r5, r4, r2
	ldr	r0, [r5]
	cmp	r0, #0
	bne	.Lquorem_13	@cond_branch
	b	.Lquorem_14
.Lquorem_16:
	.align	2, 0
.Lquorem_15:
	.word	0xffff
.Lquorem_18:
	sub	r7, r7, #0x1
.Lquorem_14:
	sub	r5, r5, #0x4
	cmp	r5, r4
	bls	.Lquorem_17	@cond_branch
	ldr	r0, [r5]
	cmp	r0, #0
	beq	.Lquorem_18	@cond_branch
.Lquorem_17:
	ldr	r3, [sp]
	str	r7, [r3, #0x10]
.Lquorem_13:
	ldr	r0, [sp, #0x8]
.Lquorem_2:
	add	sp, sp, #0x18
	pop	{r3, r4, r5}
	mov	r8, r3
	mov	r9, r4
	mov	sl, r5
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end quorem

	thumb_func_start _dtoa_r
_dtoa_r:
	push	{r4, r5, r6, r7, lr}
	mov	r7, sl
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7}
	add	sp, sp, #0xffffff7c
	mov	sl, r0
	str	r3, [sp, #0xc]
	ldr	r4, [sp, #0xac]
	str	r1, [sp, #0x40]
	str	r2, [sp, #0x44]
	ldr	r2, [r0, #0x40]
	cmp	r2, #0
	beq	.L_dtoa_r_1	@cond_branch
	ldr	r0, [r0, #0x44]
	str	r0, [r2, #0x4]
	mov	r0, sl
	ldr	r1, [r0, #0x44]
	mov	r0, #0x1
	LSL	r0, r1
	str	r0, [r2, #0x8]
	mov	r0, sl
	add	r1, r2, #0
	bl	_Bfree
	mov	r0, #0x0
	mov	r1, sl
	str	r0, [r1, #0x40]
.L_dtoa_r_1:
	mov	r0, #0x80
	lsl	r0, r0, #0x18
	ldr	r1, [sp, #0x40]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_dtoa_r_2	@cond_branch
	mov	r0, #0x1
	str	r0, [r4]
	ldr	r0, .L_dtoa_r_4 @ 0x0
	and	r1, r1, r0
	str	r1, [sp, #0x40]
	b	.L_dtoa_r_3
.L_dtoa_r_5:
	.align	2, 0
.L_dtoa_r_4:
	.word	0x7fffffff
.L_dtoa_r_2:
	str	r0, [r4]
.L_dtoa_r_3:
	ldr	r1, .L_dtoa_r_12 @ 0x0
	ldr	r2, [sp, #0x40]
	add	r0, r2, #0
	and	r0, r0, r1
	cmp	r0, r1
	bne	.L_dtoa_r_6	@cond_branch
	ldr	r0, .L_dtoa_r_12 + 4 @ 0x0
	ldr	r3, [sp, #0xa8]
	str	r0, [r3]
	ldr	r0, .L_dtoa_r_12 + 8 @ Data3+0x8c
	mov	r9, r0
	ldr	r1, [sp, #0x44]
	cmp	r1, #0
	bne	.L_dtoa_r_8	@cond_branch
	ldr	r0, .L_dtoa_r_12 + 12 @ 0x0
	and	r2, r2, r0
	cmp	r2, #0
	bne	.L_dtoa_r_8	@cond_branch
	ldr	r2, .L_dtoa_r_12 + 16 @ Data3+0x80
	mov	r9, r2
.L_dtoa_r_8:
	ldr	r3, [sp, #0xb0]
	cmp	r3, #0
	beq	.L_dtoa_r_15	@cond_branch
	mov	r1, r9
	ldrb	r0, [r1, #0x3]
	add	r1, r1, #0x3
	cmp	r0, #0
	beq	.L_dtoa_r_10	@cond_branch
	add	r1, r1, #0x5
.L_dtoa_r_10:
	ldr	r2, [sp, #0xb0]
	str	r1, [r2]
	b	.L_dtoa_r_15
.L_dtoa_r_13:
	.align	2, 0
.L_dtoa_r_12:
	.word	0x7ff00000
	.word	0x270f
	.word	Data3+0x8c
	.word	0xfffff
	.word	Data3+0x80
.L_dtoa_r_6:
	ldr	r3, .L_dtoa_r_17 + 4 @ 0x0
	ldr	r2, .L_dtoa_r_17 @ 0x0
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	bl	__eqdf2
	cmp	r0, #0
	bne	.L_dtoa_r_14	@cond_branch
	mov	r0, #0x1
	ldr	r3, [sp, #0xa8]
	str	r0, [r3]
	ldr	r0, .L_dtoa_r_17 + 8 @ Data3+0x90
	mov	r9, r0
	ldr	r1, [sp, #0xb0]
	cmp	r1, #0
	beq	.L_dtoa_r_15	@cond_branch
	add	r0, r0, #0x1
	str	r0, [r1]
.L_dtoa_r_15:
	mov	r0, r9
	bl	.L_dtoa_r_16
.L_dtoa_r_18:
	.align	2, 0
.L_dtoa_r_17:
	.word	0x0
	.word	0x0
	.word	Data3+0x90
.L_dtoa_r_14:
	add	r0, sp, #0x8
	str	r0, [sp]
	mov	r0, sl
	ldr	r1, [sp, #0x40]
	ldr	r2, [sp, #0x44]
	add	r3, sp, #0x4
	bl	_d2b
	str	r0, [sp, #0x5c]
	ldr	r2, [sp, #0x40]
	lsl	r0, r2, #0x1
	lsr	r0, r0, #0x15
	mov	r8, r0
	cmp	r0, #0
	beq	.L_dtoa_r_19	@cond_branch
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	str	r0, [sp, #0x48]
	str	r1, [sp, #0x4c]
	ldr	r0, .L_dtoa_r_21 @ 0x0
	ldr	r1, [sp, #0x48]
	and	r1, r1, r0
	str	r1, [sp, #0x48]
	ldr	r0, .L_dtoa_r_21 + 4 @ 0x0
	add	r2, r1, #0
	orr	r2, r2, r0
	str	r2, [sp, #0x48]
	ldr	r3, .L_dtoa_r_21 + 8 @ 0x0
	add r8, r8, r3
	mov	r0, #0x0
	str	r0, [sp, #0x58]
	ldr	r6, [sp, #0x8]
	b	.L_dtoa_r_20
.L_dtoa_r_22:
	.align	2, 0
.L_dtoa_r_21:
	.word	0xfffff
	.word	0x3ff00000
	.word	0xfffffc01
.L_dtoa_r_19:
	ldr	r1, [sp, #0x8]
	ldr	r0, [sp, #0x4]
	add	r2, r1, r0
	ldr	r3, .L_dtoa_r_25 @ 0x0
	add	r3, r3, r2
	mov	r8, r3
	add	r6, r1, #0
	cmp	r3, #0x20
	ble	.L_dtoa_r_23	@cond_branch
	mov	r0, #0x40
	sub	r0, r0, r3
	ldr	r4, [sp, #0x40]
	LSL	r4, r0
	ldr	r1, .L_dtoa_r_25 + 4 @ 0x0
	add	r0, r2, r1
	ldr	r2, [sp, #0x44]
	LSR	r2, r0
	add	r0, r2, #0
	orr	r4, r4, r0
	b	.L_dtoa_r_24
.L_dtoa_r_26:
	.align	2, 0
.L_dtoa_r_25:
	.word	0x432
	.word	0x412
.L_dtoa_r_23:
	mov	r0, #0x20
	mov	r3, r8
	sub	r0, r0, r3
	ldr	r4, [sp, #0x44]
	LSL	r4, r0
.L_dtoa_r_24:
	add	r0, r4, #0
	bl	__floatsidf
	cmp	r4, #0
	bge	.L_dtoa_r_27	@cond_branch
	ldr	r3, .L_dtoa_r_34 + 4 @ 0x0
	ldr	r2, .L_dtoa_r_34 @ 0x0
	bl	__adddf3
.L_dtoa_r_27:
	str	r0, [sp, #0x48]
	str	r1, [sp, #0x4c]
	ldr	r1, .L_dtoa_r_34 + 8 @ 0x0
	ldr	r0, [sp, #0x48]
	add	r1, r0, r1
	str	r1, [sp, #0x48]
	ldr	r2, .L_dtoa_r_34 + 12 @ 0x0
	add r8, r8, r2
	mov	r3, #0x1
	str	r3, [sp, #0x58]
.L_dtoa_r_20:
	ldr	r2, .L_dtoa_r_34 + 16 @ 0x0
	ldr	r3, .L_dtoa_r_34 + 20 @ 0x0
	ldr	r0, [sp, #0x48]
	ldr	r1, [sp, #0x4c]
	bl	__subdf3
	ldr	r2, .L_dtoa_r_34 + 24 @ 0x0
	ldr	r3, .L_dtoa_r_34 + 28 @ 0x0
	bl	__muldf3
	ldr	r2, .L_dtoa_r_34 + 32 @ 0x0
	ldr	r3, .L_dtoa_r_34 + 36 @ 0x0
	bl	__adddf3
	add	r5, r1, #0
	add	r4, r0, #0
	mov	r0, r8
	bl	__floatsidf
	ldr	r2, .L_dtoa_r_34 + 40 @ 0x0
	ldr	r3, .L_dtoa_r_34 + 44 @ 0x0
	bl	__muldf3
	add	r3, r1, #0
	add	r2, r0, #0
	add	r1, r5, #0
	add	r0, r4, #0
	bl	__adddf3
	str	r0, [sp, #0x6c]
	str	r1, [sp, #0x70]
	bl	__fixdfsi
	str	r0, [sp, #0x24]
	ldr	r2, .L_dtoa_r_34 + 48 @ 0x0
	ldr	r3, .L_dtoa_r_34 + 52 @ 0x0
	ldr	r0, [sp, #0x6c]
	ldr	r1, [sp, #0x70]
	bl	__ltdf2
	cmp	r0, #0
	bge	.L_dtoa_r_29	@cond_branch
	ldr	r0, [sp, #0x24]
	bl	__floatsidf
	add	r3, r1, #0
	add	r2, r0, #0
	ldr	r0, [sp, #0x6c]
	ldr	r1, [sp, #0x70]
	bl	__nedf2
	cmp	r0, #0
	beq	.L_dtoa_r_29	@cond_branch
	ldr	r0, [sp, #0x24]
	sub	r0, r0, #0x1
	str	r0, [sp, #0x24]
.L_dtoa_r_29:
	mov	r1, #0x1
	str	r1, [sp, #0x2c]
	ldr	r2, [sp, #0x24]
	cmp	r2, #0x16
	bhi	.L_dtoa_r_30	@cond_branch
	ldr	r1, .L_dtoa_r_34 + 56 @ Data3+0xdc
	lsl	r0, r2, #0x3
	add	r0, r0, r1
	ldr	r2, [r0]
	ldr	r3, [r0, #0x4]
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	bl	__ltdf2
	cmp	r0, #0
	bge	.L_dtoa_r_31	@cond_branch
	ldr	r3, [sp, #0x24]
	sub	r3, r3, #0x1
	str	r3, [sp, #0x24]
.L_dtoa_r_31:
	mov	r0, #0x0
	str	r0, [sp, #0x2c]
.L_dtoa_r_30:
	mov	r1, r8
	sub	r0, r6, r1
	sub	r4, r0, #1
	cmp	r4, #0
	blt	.L_dtoa_r_32	@cond_branch
	mov	r2, #0x0
	str	r2, [sp, #0x10]
	str	r4, [sp, #0x34]
	b	.L_dtoa_r_33
.L_dtoa_r_35:
	.align	2, 0
.L_dtoa_r_34:
	.word	0x41f00000
	.word	0x0
	.word	0xfe100000
	.word	0xfffffbcd
	.word	0x3ff80000
	.word	0x0
	.word	0x3fd287a7
	.word	0x636f4361
	.word	0x3fc68a28
	.word	0x8b60c8b3
	.word	0x3fd34413
	.word	0x509f79fb
	.word	0x0
	.word	0x0
	.word	Data3+0xdc
.L_dtoa_r_32:
	neg	r4, r4
	str	r4, [sp, #0x10]
	mov	r3, #0x0
	str	r3, [sp, #0x34]
.L_dtoa_r_33:
	ldr	r0, [sp, #0x24]
	cmp	r0, #0
	blt	.L_dtoa_r_36	@cond_branch
	mov	r1, #0x0
	str	r1, [sp, #0x14]
	str	r0, [sp, #0x38]
	ldr	r2, [sp, #0x34]
	add	r2, r2, r0
	str	r2, [sp, #0x34]
	b	.L_dtoa_r_37
.L_dtoa_r_36:
	ldr	r3, [sp, #0x10]
	ldr	r0, [sp, #0x24]
	sub	r3, r3, r0
	str	r3, [sp, #0x10]
	neg	r1, r0
	str	r1, [sp, #0x14]
	mov	r2, #0x0
	str	r2, [sp, #0x38]
.L_dtoa_r_37:
	ldr	r3, [sp, #0xc]
	cmp	r3, #0x9
	bls	.L_dtoa_r_38	@cond_branch
	mov	r0, #0x0
	str	r0, [sp, #0xc]
.L_dtoa_r_38:
	mov	r5, #0x1
	ldr	r1, [sp, #0xc]
	cmp	r1, #0x5
	ble	.L_dtoa_r_39	@cond_branch
	sub	r1, r1, #0x4
	str	r1, [sp, #0xc]
	mov	r5, #0x0
.L_dtoa_r_39:
	mov	r2, #0x1
	str	r2, [sp, #0x30]
	ldr	r3, [sp, #0xc]
	cmp	r3, #0x5
	bhi	.L_dtoa_r_53	@cond_branch
	lsl	r0, r3, #0x2
	ldr	r1, .L_dtoa_r_42 @ .L_dtoa_r_41
	add	r0, r0, r1
	ldr	r0, [r0]
	mov	pc, r0
.L_dtoa_r_43:
	.align	2, 0
.L_dtoa_r_42:
	.word	.L_dtoa_r_41
.L_dtoa_r_41:
	.word	.L_dtoa_r_45
	.word	.L_dtoa_r_45
	.word	.L_dtoa_r_46
	.word	.L_dtoa_r_47
	.word	.L_dtoa_r_48
	.word	.L_dtoa_r_49
.L_dtoa_r_45:
	mov	r0, #0x1
	neg	r0, r0
	str	r0, [sp, #0x18]
	str	r0, [sp, #0x20]
	mov	r1, #0x12
	mov	r8, r1
	mov	r2, #0x0
	str	r2, [sp, #0xa4]
	b	.L_dtoa_r_53
.L_dtoa_r_46:
	mov	r3, #0x0
	str	r3, [sp, #0x30]
.L_dtoa_r_48:
	ldr	r0, [sp, #0xa4]
	cmp	r0, #0
	bgt	.L_dtoa_r_51	@cond_branch
	mov	r1, #0x1
	str	r1, [sp, #0xa4]
.L_dtoa_r_51:
	ldr	r2, [sp, #0xa4]
	mov	r8, r2
	mov	r3, r8
	str	r3, [sp, #0x20]
	mov	r0, r8
	str	r0, [sp, #0x18]
	b	.L_dtoa_r_53
.L_dtoa_r_47:
	mov	r1, #0x0
	str	r1, [sp, #0x30]
.L_dtoa_r_49:
	ldr	r2, [sp, #0xa4]
	ldr	r3, [sp, #0x24]
	add	r0, r2, r3
	add	r1, r0, #1
	mov	r8, r1
	mov	r2, r8
	str	r2, [sp, #0x18]
	str	r0, [sp, #0x20]
	cmp	r1, #0
	bgt	.L_dtoa_r_53	@cond_branch
	mov	r3, #0x1
	mov	r8, r3
.L_dtoa_r_53:
	mov	r4, #0x4
	mov	r0, #0x0
	mov	r1, sl
	str	r0, [r1, #0x44]
	mov	r2, r8
	cmp	r2, #0x17
	bls	.L_dtoa_r_54	@cond_branch
	mov	r1, #0x0
.L_dtoa_r_55:
	add	r1, r1, #0x1
	lsl	r4, r4, #0x1
	add	r0, r4, #0
	add	r0, r0, #0x14
	cmp	r0, r8
	bls	.L_dtoa_r_55	@cond_branch
	mov	r3, sl
	str	r1, [r3, #0x44]
.L_dtoa_r_54:
	mov	r0, sl
	ldr	r1, [r0, #0x44]
	bl	_Balloc
	mov	r1, sl
	str	r0, [r1, #0x40]
	str	r0, [sp, #0x74]
	mov	r9, r0
	ldr	r2, [sp, #0x18]
	cmp	r2, #0xe
	bls	.L_dtoa_r_56	@cond_branch
	b	.L_dtoa_r_59
.L_dtoa_r_56:
	cmp	r5, #0
	bne	.L_dtoa_r_58	@cond_branch
	b	.L_dtoa_r_59
.L_dtoa_r_58:
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	str	r0, [sp, #0x78]
	str	r1, [sp, #0x7c]
	str	r0, [sp, #0x48]
	str	r1, [sp, #0x4c]
	ldr	r1, [sp, #0x24]
	str	r1, [sp, #0x28]
	str	r2, [sp, #0x1c]
	mov	r7, #0x2
	cmp	r1, #0
	ble	.L_dtoa_r_60	@cond_branch
	ldr	r0, .L_dtoa_r_66 @ Data3+0xdc
	mov	r2, #0xf
	and	r1, r1, r2
	lsl	r1, r1, #0x3
	add	r3, r1, r0
	ldr	r0, [r3]
	ldr	r1, [r3, #0x4]
	str	r0, [sp, #0x6c]
	str	r1, [sp, #0x70]
	ldr	r1, [sp, #0x24]
	asr	r4, r1, #0x4
	mov	r0, #0x10
	and	r0, r0, r4
	cmp	r0, #0
	beq	.L_dtoa_r_61	@cond_branch
	and	r4, r4, r2
	ldr	r0, .L_dtoa_r_66 + 4 @ Data3+0x1a4
	ldr	r2, [r0, #0x20]
	ldr	r3, [r0, #0x24]
	ldr	r0, [sp, #0x78]
	ldr	r1, [sp, #0x7c]
	bl	__divdf3
	str	r0, [sp, #0x40]
	str	r1, [sp, #0x44]
	mov	r7, #0x3
.L_dtoa_r_61:
	cmp	r4, #0
	beq	.L_dtoa_r_62	@cond_branch
	ldr	r5, .L_dtoa_r_66 + 4 @ Data3+0x1a4
.L_dtoa_r_64:
	mov	r0, #0x1
	and	r0, r0, r4
	cmp	r0, #0
	beq	.L_dtoa_r_63	@cond_branch
	add	r7, r7, #0x1
	ldr	r2, [r5]
	ldr	r3, [r5, #0x4]
	ldr	r0, [sp, #0x6c]
	ldr	r1, [sp, #0x70]
	bl	__muldf3
	str	r0, [sp, #0x6c]
	str	r1, [sp, #0x70]
.L_dtoa_r_63:
	asr	r4, r4, #0x1
	add	r5, r5, #0x8
	cmp	r4, #0
	bne	.L_dtoa_r_64	@cond_branch
.L_dtoa_r_62:
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	ldr	r2, [sp, #0x6c]
	ldr	r3, [sp, #0x70]
	bl	__divdf3
	str	r0, [sp, #0x40]
	str	r1, [sp, #0x44]
	b	.L_dtoa_r_69
.L_dtoa_r_67:
	.align	2, 0
.L_dtoa_r_66:
	.word	Data3+0xdc
	.word	Data3+0x1a4
.L_dtoa_r_60:
	ldr	r2, [sp, #0x24]
	neg	r6, r2
	cmp	r6, #0
	beq	.L_dtoa_r_69	@cond_branch
	ldr	r1, .L_dtoa_r_83 @ Data3+0xdc
	mov	r0, #0xf
	and	r0, r0, r6
	lsl	r0, r0, #0x3
	add	r0, r0, r1
	ldr	r1, [r0, #0x4]
	ldr	r0, [r0]
	ldr	r2, [sp, #0x78]
	ldr	r3, [sp, #0x7c]
	bl	__muldf3
	str	r0, [sp, #0x40]
	str	r1, [sp, #0x44]
	asr	r4, r6, #0x4
	cmp	r4, #0
	beq	.L_dtoa_r_69	@cond_branch
	ldr	r5, .L_dtoa_r_83 + 4 @ Data3+0x1a4
.L_dtoa_r_71:
	mov	r0, #0x1
	and	r0, r0, r4
	cmp	r0, #0
	beq	.L_dtoa_r_70	@cond_branch
	add	r7, r7, #0x1
	ldr	r0, [r5]
	ldr	r1, [r5, #0x4]
	ldr	r2, [sp, #0x40]
	ldr	r3, [sp, #0x44]
	bl	__muldf3
	str	r0, [sp, #0x40]
	str	r1, [sp, #0x44]
.L_dtoa_r_70:
	asr	r4, r4, #0x1
	add	r5, r5, #0x8
	cmp	r4, #0
	bne	.L_dtoa_r_71	@cond_branch
.L_dtoa_r_69:
	ldr	r3, [sp, #0x2c]
	cmp	r3, #0
	beq	.L_dtoa_r_74	@cond_branch
	ldr	r2, .L_dtoa_r_83 + 8 @ 0x0
	ldr	r3, .L_dtoa_r_83 + 12 @ 0x0
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	bl	__ltdf2
	cmp	r0, #0
	bge	.L_dtoa_r_74	@cond_branch
	ldr	r0, [sp, #0x18]
	cmp	r0, #0
	ble	.L_dtoa_r_74	@cond_branch
	ldr	r1, [sp, #0x20]
	cmp	r1, #0
	bgt	.L_dtoa_r_75	@cond_branch
	b	.L_dtoa_r_103
.L_dtoa_r_75:
	str	r1, [sp, #0x18]
	ldr	r2, [sp, #0x24]
	sub	r2, r2, #0x1
	str	r2, [sp, #0x24]
	ldr	r0, .L_dtoa_r_83 + 16 @ 0x0
	ldr	r1, .L_dtoa_r_83 + 20 @ 0x0
	ldr	r2, [sp, #0x40]
	ldr	r3, [sp, #0x44]
	bl	__muldf3
	str	r0, [sp, #0x40]
	str	r1, [sp, #0x44]
	add	r7, r7, #0x1
.L_dtoa_r_74:
	add	r0, r7, #0
	bl	__floatsidf
	ldr	r2, [sp, #0x40]
	ldr	r3, [sp, #0x44]
	bl	__muldf3
	ldr	r2, .L_dtoa_r_83 + 24 @ 0x0
	ldr	r3, .L_dtoa_r_83 + 28 @ 0x0
	bl	__adddf3
	str	r0, [sp, #0x50]
	str	r1, [sp, #0x54]
	ldr	r0, .L_dtoa_r_83 + 32 @ 0x0
	ldr	r3, [sp, #0x50]
	add	r0, r3, r0
	str	r0, [sp, #0x50]
	ldr	r1, [sp, #0x18]
	cmp	r1, #0
	bne	.L_dtoa_r_77	@cond_branch
	mov	r2, #0x0
	str	r2, [sp, #0x64]
	mov	r3, #0x0
	str	r3, [sp, #0x68]
	ldr	r2, .L_dtoa_r_83 + 36 @ 0x0
	ldr	r3, .L_dtoa_r_83 + 40 @ 0x0
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	bl	__subdf3
	add	r5, r1, #0
	add	r4, r0, #0
	ldr	r2, [sp, #0x50]
	ldr	r3, [sp, #0x54]
	bl	__gtdf2
	cmp	r0, #0
	ble	.L_dtoa_r_78	@cond_branch
	b	.L_dtoa_r_177
.L_dtoa_r_78:
	ldr	r0, [sp, #0x50]
	ldr	r1, [sp, #0x54]
	bl	__negdf2
	add	r3, r1, #0
	add	r2, r0, #0
	add	r1, r5, #0
	add	r0, r4, #0
	bl	__ltdf2
	cmp	r0, #0
	bge	.L_dtoa_r_80	@cond_branch
	b	.L_dtoa_r_176
.L_dtoa_r_80:
	b	.L_dtoa_r_103
.L_dtoa_r_84:
	.align	2, 0
.L_dtoa_r_83:
	.word	Data3+0xdc
	.word	Data3+0x1a4
	.word	0x3ff00000
	.word	0x0
	.word	0x40240000
	.word	0x0
	.word	0x401c0000
	.word	0x0
	.word	0xfcc00000
	.word	0x40140000
	.word	0x0
.L_dtoa_r_77:
	ldr	r0, [sp, #0x30]
	cmp	r0, #0
	beq	.L_dtoa_r_85	@cond_branch
	ldr	r1, .L_dtoa_r_87 @ Data3+0xdc
	ldr	r0, [sp, #0x18]
	sub	r0, r0, #0x1
	lsl	r0, r0, #0x3
	add	r0, r0, r1
	ldr	r2, [r0]
	ldr	r3, [r0, #0x4]
	ldr	r0, .L_dtoa_r_87 + 4 @ 0x0
	ldr	r1, .L_dtoa_r_87 + 8 @ 0x0
	bl	__divdf3
	ldr	r2, [sp, #0x50]
	ldr	r3, [sp, #0x54]
	bl	__subdf3
	str	r0, [sp, #0x50]
	str	r1, [sp, #0x54]
	mov	r1, #0x0
	mov	r8, r1
	b	.L_dtoa_r_86
.L_dtoa_r_88:
	.align	2, 0
.L_dtoa_r_87:
	.word	Data3+0xdc
	.word	0x3fe00000
	.word	0x0
.L_dtoa_r_93:
	ldr	r1, .L_dtoa_r_95 + 4 @ 0x0
	ldr	r0, .L_dtoa_r_95 @ 0x0
	ldr	r2, [sp, #0x50]
	ldr	r3, [sp, #0x54]
	bl	__muldf3
	str	r0, [sp, #0x50]
	str	r1, [sp, #0x54]
	ldr	r1, .L_dtoa_r_95 + 4 @ 0x0
	ldr	r0, .L_dtoa_r_95 @ 0x0
	add	r3, r5, #0
	add	r2, r4, #0
	bl	__muldf3
	str	r0, [sp, #0x40]
	str	r1, [sp, #0x44]
.L_dtoa_r_86:
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	bl	__fixdfsi
	add	r6, r0, #0
	bl	__floatsidf
	add	r3, r1, #0
	add	r2, r0, #0
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	bl	__subdf3
	add	r5, r1, #0
	add	r4, r0, #0
	add	r0, r6, #0
	add	r0, r0, #0x30
	mov	r2, r9
	strb	r0, [r2]
	mov	r3, #0x1
	add r9, r9, r3
	add	r1, r5, #0
	add	r0, r4, #0
	ldr	r2, [sp, #0x50]
	ldr	r3, [sp, #0x54]
	bl	__ltdf2
	cmp	r0, #0
	bge	.L_dtoa_r_89	@cond_branch
	b	.L_dtoa_r_224
.L_dtoa_r_89:
	ldr	r0, .L_dtoa_r_95 + 8 @ 0x0
	ldr	r1, .L_dtoa_r_95 + 12 @ 0x0
	add	r3, r5, #0
	add	r2, r4, #0
	bl	__subdf3
	ldr	r2, [sp, #0x50]
	ldr	r3, [sp, #0x54]
	bl	__ltdf2
	cmp	r0, #0
	bge	.L_dtoa_r_91	@cond_branch
	b	.L_dtoa_r_130
.L_dtoa_r_91:
	mov	r0, #0x1
	add r8, r8, r0
	ldr	r1, [sp, #0x18]
	cmp	r8, r1
	blt	.L_dtoa_r_93	@cond_branch
	b	.L_dtoa_r_103
.L_dtoa_r_96:
	.align	2, 0
.L_dtoa_r_95:
	.word	0x40240000
	.word	0x0
	.word	0x3ff00000
	.word	0x0
.L_dtoa_r_85:
	ldr	r1, .L_dtoa_r_98 @ Data3+0xdc
	ldr	r0, [sp, #0x18]
	sub	r0, r0, #0x1
	lsl	r0, r0, #0x3
	add	r0, r0, r1
	ldr	r1, [r0, #0x4]
	ldr	r0, [r0]
	ldr	r2, [sp, #0x50]
	ldr	r3, [sp, #0x54]
	bl	__muldf3
	str	r0, [sp, #0x50]
	str	r1, [sp, #0x54]
	mov	r2, #0x1
	mov	r8, r2
	b	.L_dtoa_r_97
.L_dtoa_r_99:
	.align	2, 0
.L_dtoa_r_98:
	.word	Data3+0xdc
.L_dtoa_r_100:
	mov	r3, #0x1
	add r8, r8, r3
	ldr	r1, .L_dtoa_r_108 + 4 @ 0x0
	ldr	r0, .L_dtoa_r_108 @ 0x0
	add	r3, r5, #0
	add	r2, r4, #0
	bl	__muldf3
	str	r0, [sp, #0x40]
	str	r1, [sp, #0x44]
.L_dtoa_r_97:
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	bl	__fixdfsi
	add	r6, r0, #0
	bl	__floatsidf
	add	r3, r1, #0
	add	r2, r0, #0
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	bl	__subdf3
	add	r5, r1, #0
	add	r4, r0, #0
	add	r0, r6, #0
	add	r0, r0, #0x30
	mov	r1, r9
	strb	r0, [r1]
	mov	r2, #0x1
	add r9, r9, r2
	ldr	r3, [sp, #0x18]
	cmp	r8, r3
	bne	.L_dtoa_r_100	@cond_branch
	ldr	r6, .L_dtoa_r_108 + 8 @ 0x0
	ldr	r7, .L_dtoa_r_108 + 12 @ 0x0
	add	r1, r7, #0
	add	r0, r6, #0
	ldr	r2, [sp, #0x50]
	ldr	r3, [sp, #0x54]
	bl	__adddf3
	add	r3, r1, #0
	add	r2, r0, #0
	add	r1, r5, #0
	add	r0, r4, #0
	bl	__gtdf2
	cmp	r0, #0
	ble	.L_dtoa_r_101	@cond_branch
	b	.L_dtoa_r_130
.L_dtoa_r_101:
	add	r1, r7, #0
	add	r0, r6, #0
	ldr	r2, [sp, #0x50]
	ldr	r3, [sp, #0x54]
	bl	__subdf3
	add	r3, r1, #0
	add	r2, r0, #0
	add	r1, r5, #0
	add	r0, r4, #0
	bl	__ltdf2
	cmp	r0, #0
	bge	.L_dtoa_r_103	@cond_branch
	mov	r0, #0x1
	neg	r0, r0
	add r9, r9, r0
	mov	r1, r9
	ldrb	r1, [r1]
	cmp	r1, #0x30
	beq	.L_dtoa_r_106	@cond_branch
	b	.L_dtoa_r_107
.L_dtoa_r_106:
	mov	r2, #0x1
	neg	r2, r2
	add r9, r9, r2
	mov	r3, r9
	ldrb	r3, [r3]
	cmp	r3, #0x30
	beq	.L_dtoa_r_106	@cond_branch
	b	.L_dtoa_r_107
.L_dtoa_r_109:
	.align	2, 0
.L_dtoa_r_108:
	.word	0x40240000
	.word	0x0
	.word	0x3fe00000
	.word	0x0
.L_dtoa_r_103:
	ldr	r1, [sp, #0x74]
	mov	r9, r1
	ldr	r2, [sp, #0x48]
	ldr	r3, [sp, #0x4c]
	str	r2, [sp, #0x40]
	str	r3, [sp, #0x44]
	ldr	r3, [sp, #0x28]
	str	r3, [sp, #0x24]
	ldr	r0, [sp, #0x1c]
	str	r0, [sp, #0x18]
.L_dtoa_r_59:
	ldr	r0, [sp, #0x4]
	cmp	r0, #0
	bge	.L_dtoa_r_110	@cond_branch
	b	.L_dtoa_r_113
.L_dtoa_r_110:
	ldr	r1, [sp, #0x24]
	cmp	r1, #0xe
	ble	.L_dtoa_r_112	@cond_branch
	b	.L_dtoa_r_113
.L_dtoa_r_112:
	ldr	r1, .L_dtoa_r_121 @ Data3+0xdc
	ldr	r2, [sp, #0x24]
	lsl	r0, r2, #0x3
	add	r0, r0, r1
	ldr	r1, [r0]
	ldr	r2, [r0, #0x4]
	str	r1, [sp, #0x6c]
	str	r2, [sp, #0x70]
	ldr	r2, [sp, #0xa4]
	cmp	r2, #0
	bge	.L_dtoa_r_115	@cond_branch
	ldr	r3, [sp, #0x18]
	cmp	r3, #0
	bgt	.L_dtoa_r_115	@cond_branch
	mov	r0, #0x0
	str	r0, [sp, #0x64]
	mov	r1, #0x0
	str	r1, [sp, #0x68]
	cmp	r3, #0
	bge	.L_dtoa_r_116	@cond_branch
	b	.L_dtoa_r_176
.L_dtoa_r_116:
	ldr	r2, .L_dtoa_r_121 + 4 @ 0x0
	ldr	r3, .L_dtoa_r_121 + 8 @ 0x0
	ldr	r0, [sp, #0x6c]
	ldr	r1, [sp, #0x70]
	bl	__muldf3
	add	r3, r1, #0
	add	r2, r0, #0
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	bl	__ledf2
	cmp	r0, #0
	bgt	.L_dtoa_r_118	@cond_branch
	b	.L_dtoa_r_176
.L_dtoa_r_118:
	b	.L_dtoa_r_177
.L_dtoa_r_122:
	.align	2, 0
.L_dtoa_r_121:
	.word	Data3+0xdc
	.word	0x40140000
	.word	0x0
.L_dtoa_r_115:
	mov	r2, #0x1
	mov	r8, r2
	b	.L_dtoa_r_123
.L_dtoa_r_126:
	ldr	r1, .L_dtoa_r_135 + 4 @ 0x0
	ldr	r0, .L_dtoa_r_135 @ 0x0
	bl	__muldf3
	str	r0, [sp, #0x40]
	str	r1, [sp, #0x44]
	ldr	r2, .L_dtoa_r_135 + 8 @ 0x0
	ldr	r3, .L_dtoa_r_135 + 12 @ 0x0
	bl	__eqdf2
	cmp	r0, #0
	bne	.L_dtoa_r_124	@cond_branch
	b	.L_dtoa_r_224
.L_dtoa_r_124:
	mov	r3, #0x1
	add r8, r8, r3
.L_dtoa_r_123:
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	ldr	r2, [sp, #0x6c]
	ldr	r3, [sp, #0x70]
	bl	__divdf3
	bl	__fixdfsi
	add	r6, r0, #0
	bl	__floatsidf
	ldr	r2, [sp, #0x6c]
	ldr	r3, [sp, #0x70]
	bl	__muldf3
	add	r3, r1, #0
	add	r2, r0, #0
	ldr	r0, [sp, #0x40]
	ldr	r1, [sp, #0x44]
	bl	__subdf3
	add	r3, r1, #0
	add	r2, r0, #0
	add	r0, r6, #0
	add	r0, r0, #0x30
	mov	r1, r9
	strb	r0, [r1]
	mov	r0, #0x1
	add r9, r9, r0
	ldr	r1, [sp, #0x18]
	cmp	r8, r1
	bne	.L_dtoa_r_126	@cond_branch
	add	r1, r3, #0
	add	r0, r2, #0
	bl	__adddf3
	add	r5, r1, #0
	add	r4, r0, #0
	ldr	r2, [sp, #0x6c]
	ldr	r3, [sp, #0x70]
	bl	__gtdf2
	cmp	r0, #0
	bgt	.L_dtoa_r_130	@cond_branch
	add	r1, r5, #0
	add	r0, r4, #0
	ldr	r2, [sp, #0x6c]
	ldr	r3, [sp, #0x70]
	bl	__eqdf2
	cmp	r0, #0
	beq	.L_dtoa_r_128	@cond_branch
	b	.L_dtoa_r_224
.L_dtoa_r_128:
	mov	r0, #0x1
	and	r0, r0, r6
	cmp	r0, #0
	bne	.L_dtoa_r_130	@cond_branch
	b	.L_dtoa_r_224
.L_dtoa_r_130:
	mov	r0, #0x30
.L_dtoa_r_133:
	mov	r2, #0x1
	neg	r2, r2
	add r9, r9, r2
	mov	r3, r9
	ldrb	r3, [r3]
	cmp	r3, #0x39
	bne	.L_dtoa_r_132	@cond_branch
	ldr	r1, [sp, #0x74]
	cmp	r9, r1
	bne	.L_dtoa_r_133	@cond_branch
	ldr	r2, [sp, #0x24]
	add	r2, r2, #0x1
	str	r2, [sp, #0x24]
	strb	r0, [r1]
.L_dtoa_r_132:
	mov	r3, r9
	ldrb	r0, [r3]
	add	r0, r0, #0x1
	strb	r0, [r3]
.L_dtoa_r_107:
	mov	r0, #0x1
	add r9, r9, r0
	b	.L_dtoa_r_224
.L_dtoa_r_136:
	.align	2, 0
.L_dtoa_r_135:
	.word	0x40240000
	.word	0x0
	.word	0x0
	.word	0x0
.L_dtoa_r_113:
	ldr	r5, [sp, #0x10]
	ldr	r6, [sp, #0x14]
	mov	r1, #0x0
	str	r1, [sp, #0x60]
	mov	r2, #0x0
	str	r2, [sp, #0x64]
	ldr	r3, [sp, #0x30]
	cmp	r3, #0
	beq	.L_dtoa_r_137	@cond_branch
	ldr	r1, [sp, #0xc]
	cmp	r1, #0x1
	bgt	.L_dtoa_r_138	@cond_branch
	ldr	r2, [sp, #0x58]
	cmp	r2, #0
	beq	.L_dtoa_r_139	@cond_branch
	ldr	r3, .L_dtoa_r_141 @ 0x0
	add	r3, r3, r0
	mov	r8, r3
	b	.L_dtoa_r_146
.L_dtoa_r_142:
	.align	2, 0
.L_dtoa_r_141:
	.word	0x433
.L_dtoa_r_139:
	ldr	r1, [sp, #0x8]
	mov	r0, #0x36
	sub	r0, r0, r1
	b	.L_dtoa_r_143
.L_dtoa_r_138:
	ldr	r4, [sp, #0x18]
	sub	r4, r4, #0x1
	ldr	r0, [sp, #0x14]
	cmp	r0, r4
	blt	.L_dtoa_r_144	@cond_branch
	sub	r6, r0, r4
	b	.L_dtoa_r_145
.L_dtoa_r_144:
	ldr	r1, [sp, #0x14]
	sub	r4, r4, r1
	ldr	r2, [sp, #0x38]
	add	r2, r2, r4
	str	r2, [sp, #0x38]
	add	r1, r1, r4
	str	r1, [sp, #0x14]
	mov	r6, #0x0
.L_dtoa_r_145:
	ldr	r3, [sp, #0x18]
	mov	r8, r3
	cmp	r3, #0
	bge	.L_dtoa_r_146	@cond_branch
	sub	r5, r5, r3
	mov	r0, #0x0
.L_dtoa_r_143:
	mov	r8, r0
.L_dtoa_r_146:
	ldr	r1, [sp, #0x10]
	add r1, r1, r8
	str	r1, [sp, #0x10]
	ldr	r2, [sp, #0x34]
	add r2, r2, r8
	str	r2, [sp, #0x34]
	mov	r0, sl
	mov	r1, #0x1
	bl	_i2b
	str	r0, [sp, #0x64]
.L_dtoa_r_137:
	cmp	r5, #0
	ble	.L_dtoa_r_148	@cond_branch
	ldr	r3, [sp, #0x34]
	cmp	r3, #0
	ble	.L_dtoa_r_148	@cond_branch
	mov	r8, r3
	cmp	r8, r5
	ble	.L_dtoa_r_149	@cond_branch
	mov	r8, r5
.L_dtoa_r_149:
	ldr	r0, [sp, #0x10]
	mov	r1, r8
	sub	r0, r0, r1
	str	r0, [sp, #0x10]
	sub	r5, r5, r1
	ldr	r2, [sp, #0x34]
	sub	r2, r2, r1
	str	r2, [sp, #0x34]
.L_dtoa_r_148:
	ldr	r3, [sp, #0x14]
	cmp	r3, #0
	ble	.L_dtoa_r_153	@cond_branch
	ldr	r0, [sp, #0x30]
	cmp	r0, #0
	beq	.L_dtoa_r_151	@cond_branch
	cmp	r6, #0
	ble	.L_dtoa_r_152	@cond_branch
	mov	r0, sl
	ldr	r1, [sp, #0x64]
	add	r2, r6, #0
	bl	_pow5mult
	str	r0, [sp, #0x64]
	mov	r0, sl
	ldr	r1, [sp, #0x64]
	ldr	r2, [sp, #0x5c]
	bl	_multiply
	add	r4, r0, #0
	mov	r0, sl
	ldr	r1, [sp, #0x5c]
	bl	_Bfree
	str	r4, [sp, #0x5c]
.L_dtoa_r_152:
	ldr	r1, [sp, #0x14]
	sub	r4, r1, r6
	cmp	r4, #0
	beq	.L_dtoa_r_153	@cond_branch
	mov	r0, sl
	ldr	r1, [sp, #0x5c]
	add	r2, r4, #0
	b	.L_dtoa_r_154
.L_dtoa_r_151:
	mov	r0, sl
	ldr	r1, [sp, #0x5c]
	ldr	r2, [sp, #0x14]
.L_dtoa_r_154:
	bl	_pow5mult
	str	r0, [sp, #0x5c]
.L_dtoa_r_153:
	mov	r0, sl
	mov	r1, #0x1
	bl	_i2b
	str	r0, [sp, #0x68]
	ldr	r2, [sp, #0x38]
	cmp	r2, #0
	ble	.L_dtoa_r_155	@cond_branch
	mov	r0, sl
	ldr	r1, [sp, #0x68]
	bl	_pow5mult
	str	r0, [sp, #0x68]
.L_dtoa_r_155:
	ldr	r3, [sp, #0xc]
	cmp	r3, #0x1
	bgt	.L_dtoa_r_160	@cond_branch
	ldr	r0, [sp, #0x44]
	cmp	r0, #0
	bne	.L_dtoa_r_159	@cond_branch
	ldr	r0, .L_dtoa_r_161 @ 0x0
	ldr	r1, [sp, #0x40]
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_dtoa_r_159	@cond_branch
	ldr	r0, .L_dtoa_r_161 + 4 @ 0x0
	and	r1, r1, r0
	cmp	r1, #0
	beq	.L_dtoa_r_159	@cond_branch
	ldr	r1, [sp, #0x10]
	add	r1, r1, #0x1
	str	r1, [sp, #0x10]
	ldr	r2, [sp, #0x34]
	add	r2, r2, #0x1
	str	r2, [sp, #0x34]
	mov	r3, #0x1
	str	r3, [sp, #0x3c]
	b	.L_dtoa_r_160
.L_dtoa_r_162:
	.align	2, 0
.L_dtoa_r_161:
	.word	0xfffff
	.word	0x7ff00000
.L_dtoa_r_159:
	mov	r0, #0x0
	str	r0, [sp, #0x3c]
.L_dtoa_r_160:
	ldr	r1, [sp, #0x38]
	cmp	r1, #0
	beq	.L_dtoa_r_163	@cond_branch
	ldr	r2, [sp, #0x68]
	ldr	r1, [r2, #0x10]
	sub	r1, r1, #0x1
	lsl	r1, r1, #0x2
	add	r0, r2, #0
	add	r0, r0, #0x14
	add	r0, r0, r1
	ldr	r0, [r0]
	bl	_hi0bits
	ldr	r1, [sp, #0x34]
	add	r1, r1, #0x20
	sub	r1, r1, r0
	mov	r8, r1
	mov	r0, #0x1f
	mov	r3, r8
	and	r3, r3, r0
	mov	r8, r3
	b	.L_dtoa_r_164
.L_dtoa_r_163:
	ldr	r0, [sp, #0x34]
	add	r0, r0, #0x1
	mov	r8, r0
	mov	r0, #0x1f
	mov	r1, r8
	and	r1, r1, r0
	mov	r8, r1
.L_dtoa_r_164:
	mov	r2, r8
	cmp	r2, #0
	beq	.L_dtoa_r_165	@cond_branch
	mov	r0, #0x20
	sub	r2, r0, r2
	mov	r8, r2
.L_dtoa_r_165:
	mov	r3, r8
	cmp	r3, #0x4
	ble	.L_dtoa_r_166	@cond_branch
	mov	r0, #0x4
	neg	r0, r0
	b	.L_dtoa_r_167
.L_dtoa_r_166:
	mov	r3, r8
	cmp	r3, #0x3
	bgt	.L_dtoa_r_168	@cond_branch
	mov	r0, #0x1c
.L_dtoa_r_167:
	add r8, r8, r0
	ldr	r1, [sp, #0x10]
	add r1, r1, r8
	str	r1, [sp, #0x10]
	add r5, r5, r8
	ldr	r2, [sp, #0x34]
	add r2, r2, r8
	str	r2, [sp, #0x34]
.L_dtoa_r_168:
	ldr	r3, [sp, #0x10]
	cmp	r3, #0
	ble	.L_dtoa_r_169	@cond_branch
	mov	r0, sl
	ldr	r1, [sp, #0x5c]
	add	r2, r3, #0
	bl	_lshift
	str	r0, [sp, #0x5c]
.L_dtoa_r_169:
	ldr	r0, [sp, #0x34]
	cmp	r0, #0
	ble	.L_dtoa_r_170	@cond_branch
	mov	r0, sl
	ldr	r1, [sp, #0x68]
	ldr	r2, [sp, #0x34]
	bl	_lshift
	str	r0, [sp, #0x68]
.L_dtoa_r_170:
	ldr	r1, [sp, #0x2c]
	cmp	r1, #0
	beq	.L_dtoa_r_172	@cond_branch
	ldr	r0, [sp, #0x5c]
	ldr	r1, [sp, #0x68]
	bl	__mcmp
	cmp	r0, #0
	bge	.L_dtoa_r_172	@cond_branch
	ldr	r2, [sp, #0x24]
	sub	r2, r2, #0x1
	str	r2, [sp, #0x24]
	mov	r0, sl
	ldr	r1, [sp, #0x5c]
	mov	r2, #0xa
	mov	r3, #0x0
	bl	_multadd
	str	r0, [sp, #0x5c]
	ldr	r3, [sp, #0x30]
	cmp	r3, #0
	beq	.L_dtoa_r_173	@cond_branch
	mov	r0, sl
	ldr	r1, [sp, #0x64]
	mov	r2, #0xa
	mov	r3, #0x0
	bl	_multadd
	str	r0, [sp, #0x64]
.L_dtoa_r_173:
	ldr	r0, [sp, #0x20]
	str	r0, [sp, #0x18]
.L_dtoa_r_172:
	ldr	r1, [sp, #0x18]
	cmp	r1, #0
	bgt	.L_dtoa_r_175	@cond_branch
	ldr	r2, [sp, #0xc]
	cmp	r2, #0x2
	ble	.L_dtoa_r_175	@cond_branch
	cmp	r1, #0
	blt	.L_dtoa_r_176	@cond_branch
	mov	r0, sl
	ldr	r1, [sp, #0x68]
	mov	r2, #0x5
	mov	r3, #0x0
	bl	_multadd
	str	r0, [sp, #0x68]
	ldr	r0, [sp, #0x5c]
	ldr	r1, [sp, #0x68]
	bl	__mcmp
	cmp	r0, #0
	bgt	.L_dtoa_r_177	@cond_branch
.L_dtoa_r_176:
	ldr	r3, [sp, #0xa4]
	MVN	r3, r3
	str	r3, [sp, #0x24]
	b	.L_dtoa_r_221
.L_dtoa_r_177:
	mov	r0, #0x31
	mov	r1, r9
	strb	r0, [r1]
	mov	r2, #0x1
	add r9, r9, r2
	ldr	r3, [sp, #0x24]
	add	r3, r3, #0x1
	str	r3, [sp, #0x24]
	b	.L_dtoa_r_221
.L_dtoa_r_175:
	ldr	r0, [sp, #0x30]
	cmp	r0, #0
	bne	.L_dtoa_r_180	@cond_branch
	b	.L_dtoa_r_181
.L_dtoa_r_180:
	cmp	r5, #0
	ble	.L_dtoa_r_182	@cond_branch
	mov	r0, sl
	ldr	r1, [sp, #0x64]
	add	r2, r5, #0
	bl	_lshift
	str	r0, [sp, #0x64]
.L_dtoa_r_182:
	ldr	r1, [sp, #0x64]
	str	r1, [sp, #0x60]
	ldr	r2, [sp, #0x3c]
	cmp	r2, #0
	beq	.L_dtoa_r_183	@cond_branch
	ldr	r1, [r1, #0x4]
	mov	r0, sl
	bl	_Balloc
	str	r0, [sp, #0x64]
	add	r0, r0, #0xc
	ldr	r1, [sp, #0x60]
	add	r1, r1, #0xc
	ldr	r3, [sp, #0x60]
	ldr	r2, [r3, #0x10]
	lsl	r2, r2, #0x2
	add	r2, r2, #0x8
	bl	memcpy
	mov	r0, sl
	ldr	r1, [sp, #0x64]
	mov	r2, #0x1
	bl	_lshift
	str	r0, [sp, #0x64]
.L_dtoa_r_183:
	mov	r0, #0x1
	mov	r8, r0
	mov	r1, r8
	ldr	r2, [sp, #0x44]
	and	r2, r2, r1
	str	r2, [sp, #0x80]
	b	.L_dtoa_r_184
.L_dtoa_r_210:
	mov	r0, sl
	ldr	r1, [sp, #0x5c]
	mov	r2, #0xa
	mov	r3, #0x0
	bl	_multadd
	str	r0, [sp, #0x5c]
	ldr	r3, [sp, #0x60]
	ldr	r0, [sp, #0x64]
	cmp	r3, r0
	bne	.L_dtoa_r_185	@cond_branch
	mov	r0, sl
	ldr	r1, [sp, #0x64]
	mov	r2, #0xa
	mov	r3, #0x0
	bl	_multadd
	str	r0, [sp, #0x64]
	str	r0, [sp, #0x60]
	b	.L_dtoa_r_186
.L_dtoa_r_185:
	mov	r0, sl
	ldr	r1, [sp, #0x60]
	mov	r2, #0xa
	mov	r3, #0x0
	bl	_multadd
	str	r0, [sp, #0x60]
	mov	r0, sl
	ldr	r1, [sp, #0x64]
	mov	r2, #0xa
	mov	r3, #0x0
	bl	_multadd
	str	r0, [sp, #0x64]
.L_dtoa_r_186:
	mov	r1, #0x1
	add r8, r8, r1
.L_dtoa_r_184:
	ldr	r0, [sp, #0x5c]
	ldr	r1, [sp, #0x68]
	bl	quorem
	add	r7, r0, #0
	add	r7, r7, #0x30
	ldr	r0, [sp, #0x5c]
	ldr	r1, [sp, #0x60]
	bl	__mcmp
	add	r4, r0, #0
	mov	r0, sl
	ldr	r1, [sp, #0x68]
	ldr	r2, [sp, #0x64]
	bl	__mdiff
	add	r5, r0, #0
	ldr	r0, [r5, #0xc]
	cmp	r0, #0
	bne	.L_dtoa_r_187	@cond_branch
	ldr	r0, [sp, #0x5c]
	add	r1, r5, #0
	bl	__mcmp
	add	r6, r0, #0
	b	.L_dtoa_r_188
.L_dtoa_r_187:
	mov	r6, #0x1
.L_dtoa_r_188:
	mov	r0, sl
	add	r1, r5, #0
	bl	_Bfree
	cmp	r6, #0
	bne	.L_dtoa_r_191	@cond_branch
	ldr	r2, [sp, #0xc]
	cmp	r2, #0
	bne	.L_dtoa_r_191	@cond_branch
	ldr	r3, [sp, #0x80]
	cmp	r3, #0
	bne	.L_dtoa_r_191	@cond_branch
	cmp	r7, #0x39
	beq	.L_dtoa_r_203	@cond_branch
	cmp	r4, #0
	ble	.L_dtoa_r_193	@cond_branch
	add	r7, r7, #0x1
.L_dtoa_r_193:
	mov	r0, r9
	strb	r7, [r0]
	mov	r1, #0x1
	add r9, r9, r1
	b	.L_dtoa_r_221
.L_dtoa_r_191:
	cmp	r4, #0
	blt	.L_dtoa_r_195	@cond_branch
	cmp	r4, #0
	bne	.L_dtoa_r_198	@cond_branch
	ldr	r2, [sp, #0xc]
	cmp	r2, #0
	bne	.L_dtoa_r_198	@cond_branch
	ldr	r3, [sp, #0x80]
	cmp	r3, #0
	bne	.L_dtoa_r_198	@cond_branch
.L_dtoa_r_195:
	cmp	r6, #0
	ble	.L_dtoa_r_202	@cond_branch
	mov	r0, sl
	ldr	r1, [sp, #0x5c]
	mov	r2, #0x1
	bl	_lshift
	str	r0, [sp, #0x5c]
	ldr	r1, [sp, #0x68]
	bl	__mcmp
	add	r6, r0, #0
	cmp	r6, #0
	bgt	.L_dtoa_r_200	@cond_branch
	cmp	r6, #0
	bne	.L_dtoa_r_202	@cond_branch
	add	r0, r7, #0
	mov	r1, #0x1
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_dtoa_r_202	@cond_branch
.L_dtoa_r_200:
	add	r7, r7, #0x1
	cmp	r7, #0x3a
	beq	.L_dtoa_r_203	@cond_branch
.L_dtoa_r_202:
	mov	r2, r9
	strb	r7, [r2]
	b	.L_dtoa_r_204
.L_dtoa_r_198:
	cmp	r6, #0
	ble	.L_dtoa_r_205	@cond_branch
	cmp	r7, #0x39
	bne	.L_dtoa_r_206	@cond_branch
.L_dtoa_r_203:
	mov	r0, #0x39
	mov	r1, r9
	strb	r0, [r1]
	mov	r2, #0x1
	add r9, r9, r2
	b	.L_dtoa_r_214
.L_dtoa_r_206:
	add	r0, r7, #1
	mov	r3, r9
	strb	r0, [r3]
	mov	r0, #0x1
	add r9, r9, r0
	b	.L_dtoa_r_221
.L_dtoa_r_205:
	mov	r1, r9
	strb	r7, [r1]
	mov	r2, #0x1
	add r9, r9, r2
	ldr	r3, [sp, #0x18]
	cmp	r8, r3
	beq	.L_dtoa_r_209	@cond_branch
	b	.L_dtoa_r_210
.L_dtoa_r_209:
	b	.L_dtoa_r_211
.L_dtoa_r_181:
	mov	r0, #0x1
	mov	r8, r0
	b	.L_dtoa_r_212
.L_dtoa_r_213:
	mov	r0, sl
	ldr	r1, [sp, #0x5c]
	mov	r2, #0xa
	mov	r3, #0x0
	bl	_multadd
	str	r0, [sp, #0x5c]
	mov	r1, #0x1
	add r8, r8, r1
.L_dtoa_r_212:
	ldr	r0, [sp, #0x5c]
	ldr	r1, [sp, #0x68]
	bl	quorem
	add	r7, r0, #0
	add	r7, r7, #0x30
	mov	r2, r9
	strb	r7, [r2]
	mov	r3, #0x1
	add r9, r9, r3
	ldr	r0, [sp, #0x18]
	cmp	r8, r0
	blt	.L_dtoa_r_213	@cond_branch
.L_dtoa_r_211:
	mov	r0, sl
	ldr	r1, [sp, #0x5c]
	mov	r2, #0x1
	bl	_lshift
	str	r0, [sp, #0x5c]
	ldr	r1, [sp, #0x68]
	bl	__mcmp
	add	r4, r0, #0
	cmp	r4, #0
	bgt	.L_dtoa_r_214	@cond_branch
	cmp	r4, #0
	bne	.L_dtoa_r_216	@cond_branch
	mov	r0, #0x1
	and	r7, r7, r0
	cmp	r7, #0
	beq	.L_dtoa_r_216	@cond_branch
.L_dtoa_r_214:
	mov	r1, #0x1
	neg	r1, r1
	add r9, r9, r1
	mov	r2, r9
	ldrb	r2, [r2]
	cmp	r2, #0x39
	bne	.L_dtoa_r_217	@cond_branch
.L_dtoa_r_219:
	ldr	r3, [sp, #0x74]
	cmp	r9, r3
	beq	.L_dtoa_r_218	@cond_branch
	mov	r0, #0x1
	neg	r0, r0
	add r9, r9, r0
	mov	r1, r9
	ldrb	r1, [r1]
	cmp	r1, #0x39
	beq	.L_dtoa_r_219	@cond_branch
.L_dtoa_r_217:
	mov	r2, r9
	ldrb	r0, [r2]
	add	r0, r0, #0x1
	strb	r0, [r2]
.L_dtoa_r_204:
	mov	r3, #0x1
	add r9, r9, r3
	b	.L_dtoa_r_221
.L_dtoa_r_218:
	ldr	r0, [sp, #0x24]
	add	r0, r0, #0x1
	str	r0, [sp, #0x24]
	mov	r0, #0x31
	ldr	r1, [sp, #0x74]
	strb	r0, [r1]
	add	r1, r1, #0x1
	mov	r9, r1
	b	.L_dtoa_r_221
.L_dtoa_r_216:
	mov	r2, #0x1
	neg	r2, r2
	add r9, r9, r2
	mov	r3, r9
	ldrb	r3, [r3]
	cmp	r3, #0x30
	bne	.L_dtoa_r_222	@cond_branch
.L_dtoa_r_223:
	mov	r0, #0x1
	neg	r0, r0
	add r9, r9, r0
	mov	r1, r9
	ldrb	r1, [r1]
	cmp	r1, #0x30
	beq	.L_dtoa_r_223	@cond_branch
.L_dtoa_r_222:
	mov	r2, #0x1
	add r9, r9, r2
.L_dtoa_r_221:
	mov	r0, sl
	ldr	r1, [sp, #0x68]
	bl	_Bfree
	ldr	r3, [sp, #0x64]
	cmp	r3, #0
	beq	.L_dtoa_r_224	@cond_branch
	ldr	r0, [sp, #0x60]
	cmp	r0, #0
	beq	.L_dtoa_r_226	@cond_branch
	cmp	r0, r3
	beq	.L_dtoa_r_226	@cond_branch
	mov	r0, sl
	ldr	r1, [sp, #0x60]
	bl	_Bfree
.L_dtoa_r_226:
	mov	r0, sl
	ldr	r1, [sp, #0x64]
	bl	_Bfree
.L_dtoa_r_224:
	mov	r0, sl
	ldr	r1, [sp, #0x5c]
	bl	_Bfree
	mov	r0, #0x0
	mov	r1, r9
	strb	r0, [r1]
	ldr	r0, [sp, #0x24]
	add	r0, r0, #0x1
	ldr	r2, [sp, #0xa8]
	str	r0, [r2]
	ldr	r3, [sp, #0xb0]
	cmp	r3, #0
	beq	.L_dtoa_r_227	@cond_branch
	str	r1, [r3]
.L_dtoa_r_227:
	ldr	r0, [sp, #0x74]
.L_dtoa_r_16:
	add	sp, sp, #0x84
	pop	{r3, r4, r5}
	mov	r8, r3
	mov	r9, r4
	mov	sl, r5
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end _dtoa_r

	thumb_func_start fflush
fflush:
	push	{r4, r5, r6, lr}
	add	r4, r0, #0
	cmp	r4, #0
	bne	.Lfflush_1	@cond_branch
	ldr	r0, .Lfflush_3 @ 0x0
	ldr	r0, [r0]
	ldr	r1, .Lfflush_3 + 4 @ fflush + 1
	bl	_fwalk
	b	.Lfflush_13
.Lfflush_4:
	.align	2, 0
.Lfflush_3:
	.word	0x203f754
	.word	fflush + 1
.Lfflush_1:
	ldr	r0, [r4, #0x54]
	cmp	r0, #0
	bne	.Lfflush_5	@cond_branch
	ldr	r0, .Lfflush_11 @ 0x0
	ldr	r0, [r0]
	str	r0, [r4, #0x54]
.Lfflush_5:
	ldr	r1, [r4, #0x54]
	ldr	r0, [r1, #0x38]
	cmp	r0, #0
	bne	.Lfflush_6	@cond_branch
	add	r0, r1, #0
	bl	__sinit
.Lfflush_6:
	mov	r0, #0xc
	ldsh	r1, [r4, r0]
	mov	r0, #0x8
	and	r0, r0, r1
	cmp	r0, #0
	beq	.Lfflush_14	@cond_branch
	ldr	r6, [r4, #0x10]
	cmp	r6, #0
	beq	.Lfflush_14	@cond_branch
	ldr	r0, [r4]
	sub	r5, r0, r6
	str	r6, [r4]
	mov	r0, #0x3
	and	r0, r0, r1
	cmp	r0, #0
	bne	.Lfflush_9	@cond_branch
	ldr	r0, [r4, #0x14]
	b	.Lfflush_10
.Lfflush_12:
	.align	2, 0
.Lfflush_11:
	.word	0x203f754
.Lfflush_15:
	mov	r0, #0x40
	ldrh	r1, [r4, #0xc]
	orr	r0, r0, r1
	strh	r0, [r4, #0xc]
	mov	r0, #0x1
	neg	r0, r0
	b	.Lfflush_13
.Lfflush_9:
	mov	r0, #0x0
.Lfflush_10:
	str	r0, [r4, #0x8]
	cmp	r5, #0
	ble	.Lfflush_14	@cond_branch
.Lfflush_16:
	ldr	r0, [r4, #0x1c]
	ldr	r3, [r4, #0x24]
	add	r1, r6, #0
	add	r2, r5, #0
	bl	_call_via_r3
	add	r1, r0, #0
	cmp	r1, #0
	ble	.Lfflush_15	@cond_branch
	add	r6, r6, r1
	sub	r5, r5, r1
	cmp	r5, #0
	bgt	.Lfflush_16	@cond_branch
.Lfflush_14:
	mov	r0, #0x0
.Lfflush_13:
	pop	{r4, r5, r6, pc}
	thumb_func_end fflush

	thumb_func_start std
std:
	push	{r4, lr}
	mov	r4, #0x0
	str	r4, [r0]
	str	r4, [r0, #0x4]
	str	r4, [r0, #0x8]
	strh	r1, [r0, #0xc]
	strh	r2, [r0, #0xe]
	str	r4, [r0, #0x10]
	str	r4, [r0, #0x18]
	str	r0, [r0, #0x1c]
	ldr	r1, .Lstd_1 @ __sread + 1
	str	r1, [r0, #0x20]
	ldr	r1, .Lstd_1 + 4 @ __swrite + 1
	str	r1, [r0, #0x24]
	ldr	r1, .Lstd_1 + 8 @ __sseek + 1
	str	r1, [r0, #0x28]
	ldr	r1, .Lstd_1 + 12 @ __sclose + 1
	str	r1, [r0, #0x2c]
	str	r3, [r0, #0x54]
	pop	{r4, pc}
.Lstd_2:
	.align	2, 0
.Lstd_1:
	.word	__sread + 1
	.word	__swrite + 1
	.word	__sseek + 1
	.word	__sclose + 1
	thumb_func_end std

	thumb_func_start __sfmoreglue
__sfmoreglue:
	push	{r4, r5, r6, lr}
	add	r5, r1, #0
	mov	r1, #0x58
	add	r6, r5, #0
	mul	r6, r6, r1
	add	r1, r6, #0
	add	r1, r1, #0xc
	bl	_malloc_r
	add	r4, r0, #0
	cmp	r4, #0
	beq	.L__sfmoreglue_1	@cond_branch
	add	r0, r0, #0xc
	mov	r1, #0x0
	str	r1, [r4]
	str	r5, [r4, #0x4]
	str	r0, [r4, #0x8]
	add	r2, r6, #0
	bl	memset
	add	r0, r4, #0
	b	.L__sfmoreglue_2
.L__sfmoreglue_1:
	mov	r0, #0x0
.L__sfmoreglue_2:
	pop	{r4, r5, r6, pc}
	thumb_func_end __sfmoreglue

	thumb_func_start __sfp
__sfp:
	push	{r4, r5, lr}
	add	r5, r0, #0
	ldr	r0, [r5, #0x38]
	cmp	r0, #0
	bne	.L__sfp_1	@cond_branch
	add	r0, r5, #0
	bl	__sinit
.L__sfp_1:
	mov	r0, #0xec
	lsl	r0, r0, #0x1
	add	r4, r5, r0
	b	.L__sfp_2
.L__sfp_7:
	ldr	r4, [r4]
.L__sfp_2:
	ldr	r2, [r4, #0x8]
	ldr	r0, [r4, #0x4]
	b	.L__sfp_3
.L__sfp_5:
	mov	r3, #0xc
	ldsh	r1, [r2, r3]
	cmp	r1, #0
	beq	.L__sfp_4	@cond_branch
	add	r2, r2, #0x58
.L__sfp_3:
	sub	r0, r0, #0x1
	cmp	r0, #0
	bge	.L__sfp_5	@cond_branch
	ldr	r0, [r4]
	cmp	r0, #0
	bne	.L__sfp_7	@cond_branch
	add	r0, r5, #0
	mov	r1, #0x4
	bl	__sfmoreglue
	str	r0, [r4]
	cmp	r0, #0
	bne	.L__sfp_7	@cond_branch
	mov	r0, #0xc
	str	r0, [r5]
	mov	r0, #0x0
	b	.L__sfp_8
.L__sfp_4:
	mov	r0, #0x1
	strh	r0, [r2, #0xc]
	str	r1, [r2]
	str	r1, [r2, #0x8]
	str	r1, [r2, #0x4]
	str	r1, [r2, #0x10]
	str	r1, [r2, #0x14]
	str	r1, [r2, #0x18]
	ldr	r0, .L__sfp_9 @ 0x0
	strh	r0, [r2, #0xe]
	str	r1, [r2, #0x30]
	str	r1, [r2, #0x34]
	str	r1, [r2, #0x44]
	str	r1, [r2, #0x48]
	str	r5, [r2, #0x54]
	add	r0, r2, #0
.L__sfp_8:
	pop	{r4, r5, pc}
.L__sfp_10:
	.align	2, 0
.L__sfp_9:
	.word	0xffff
	thumb_func_end __sfp

	thumb_func_start _cleanup_r
_cleanup_r:
	push	{lr}
	ldr	r1, .L_cleanup_r_1 @ fflush + 1
	bl	_fwalk
	pop	{pc}
.L_cleanup_r_2:
	.align	2, 0
.L_cleanup_r_1:
	.word	fflush + 1
	thumb_func_end _cleanup_r

	thumb_func_start _cleanup
_cleanup:
	push	{lr}
	ldr	r0, .L_cleanup_1 @ 0x0
	ldr	r0, [r0]
	bl	_cleanup_r
	pop	{pc}
.L_cleanup_2:
	.align	2, 0
.L_cleanup_1:
	.word	0x203f754
	thumb_func_end _cleanup

	thumb_func_start __sinit
__sinit:
	push	{r4, r5, lr}
	add	r5, r0, #0
	ldr	r0, .L__sinit_1 @ _cleanup_r + 1
	str	r0, [r5, #0x3c]
	mov	r0, #0x1
	str	r0, [r5, #0x38]
	mov	r0, #0xf2
	lsl	r0, r0, #0x1
	add	r4, r5, r0
	add	r0, r4, #0
	mov	r1, #0x4
	mov	r2, #0x0
	add	r3, r5, #0
	bl	std
	mov	r1, #0x8f
	lsl	r1, r1, #0x2
	add	r0, r5, r1
	mov	r1, #0x9
	mov	r2, #0x1
	add	r3, r5, #0
	bl	std
	mov	r1, #0xa5
	lsl	r1, r1, #0x2
	add	r0, r5, r1
	mov	r1, #0xa
	mov	r2, #0x2
	add	r3, r5, #0
	bl	std
	mov	r0, #0xec
	lsl	r0, r0, #0x1
	add	r1, r5, r0
	mov	r0, #0x0
	str	r0, [r1]
	mov	r0, #0xee
	lsl	r0, r0, #0x1
	add	r1, r5, r0
	mov	r0, #0x3
	str	r0, [r1]
	mov	r1, #0xf0
	lsl	r1, r1, #0x1
	add	r0, r5, r1
	str	r4, [r0]
	pop	{r4, r5, pc}
.L__sinit_2:
	.align	2, 0
.L__sinit_1:
	.word	_cleanup_r + 1
	thumb_func_end __sinit

	thumb_func_start _free_r
_free_r:
	push	{r4, r5, r6, r7, lr}
	mov	r7, r9
	mov	r6, r8
	push	{r6, r7}
	mov	r9, r0
	add	r4, r1, #0
	cmp	r4, #0
	bne	.L_free_r_1	@cond_branch
	b	.L_free_r_6
.L_free_r_1:
	bl	__malloc_lock
	add	r5, r4, #0
	sub	r5, r5, #0x8
	ldr	r1, [r5, #0x4]
	mov	r6, #0x2
	neg	r6, r6
	and	r6, r6, r1
	add	r7, r5, r6
	ldr	r4, [r7, #0x4]
	mov	r0, #0x4
	neg	r0, r0
	and	r4, r4, r0
	ldr	r0, .L_free_r_7 @ 0x0
	mov	ip, r0
	ldr	r0, [r0, #0x8]
	cmp	r7, r0
	bne	.L_free_r_3	@cond_branch
	add	r6, r6, r4
	mov	r4, #0x1
	and	r1, r1, r4
	cmp	r1, #0
	bne	.L_free_r_4	@cond_branch
	ldr	r0, [r5]
	sub	r5, r5, r0
	add	r6, r6, r0
	ldr	r3, [r5, #0xc]
	ldr	r2, [r5, #0x8]
	str	r3, [r2, #0xc]
	str	r2, [r3, #0x8]
.L_free_r_4:
	add	r0, r6, #0
	orr	r0, r0, r4
	str	r0, [r5, #0x4]
	mov	r2, ip
	str	r5, [r2, #0x8]
	ldr	r0, .L_free_r_7 + 4 @ 0x0
	ldr	r0, [r0]
	cmp	r6, r0
	bcc	.L_free_r_5	@cond_branch
	ldr	r0, .L_free_r_7 + 8 @ 0x0
	ldr	r1, [r0]
	mov	r0, r9
	bl	_malloc_trim_r
.L_free_r_5:
	mov	r0, r9
	bl	__malloc_unlock
	b	.L_free_r_6
.L_free_r_8:
	.align	2, 0
.L_free_r_7:
	.word	0x203f76c
	.word	0x203fb74
	.word	0x203fb78
.L_free_r_3:
	str	r4, [r7, #0x4]
	mov	r0, #0x0
	mov	r8, r0
	mov	r0, #0x1
	and	r1, r1, r0
	cmp	r1, #0
	bne	.L_free_r_11	@cond_branch
	ldr	r0, [r5]
	sub	r5, r5, r0
	add	r6, r6, r0
	ldr	r1, [r5, #0x8]
	mov	r0, ip
	add	r0, r0, #0x8
	cmp	r1, r0
	bne	.L_free_r_10	@cond_branch
	mov	r2, #0x1
	mov	r8, r2
	b	.L_free_r_11
.L_free_r_10:
	ldr	r3, [r5, #0xc]
	add	r2, r1, #0
	str	r3, [r2, #0xc]
	str	r2, [r3, #0x8]
.L_free_r_11:
	add	r0, r7, r4
	ldr	r0, [r0, #0x4]
	mov	r1, #0x1
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_free_r_15	@cond_branch
	add	r6, r6, r4
	ldr	r1, [r7, #0x8]
	mov	r0, r8
	cmp	r0, #0
	bne	.L_free_r_14	@cond_branch
	ldr	r0, .L_free_r_16 @ 0x0
	cmp	r1, r0
	bne	.L_free_r_14	@cond_branch
	mov	r2, #0x1
	mov	r8, r2
	str	r5, [r1, #0xc]
	str	r5, [r1, #0x8]
	str	r1, [r5, #0xc]
	str	r1, [r5, #0x8]
	b	.L_free_r_15
.L_free_r_17:
	.align	2, 0
.L_free_r_16:
	.word	0x203f774
.L_free_r_14:
	ldr	r3, [r7, #0xc]
	add	r2, r1, #0
	str	r3, [r2, #0xc]
	str	r2, [r3, #0x8]
.L_free_r_15:
	mov	r1, #0x1
	add	r0, r6, #0
	orr	r0, r0, r1
	str	r0, [r5, #0x4]
	add	r0, r5, r6
	str	r6, [r0]
	mov	r0, r8
	cmp	r0, #0
	bne	.L_free_r_18	@cond_branch
	ldr	r0, .L_free_r_21 @ 0x0
	cmp	r6, r0
	bhi	.L_free_r_19	@cond_branch
	lsr	r4, r6, #0x3
	ldr	r2, .L_free_r_21 + 4 @ 0x0
	add	r0, r4, #0
	asr	r0, r0, #0x2
	LSL	r1, r0
	ldr	r0, [r2, #0x4]
	orr	r0, r0, r1
	str	r0, [r2, #0x4]
	lsl	r0, r4, #0x3
	add	r3, r0, r2
	ldr	r2, [r3, #0x8]
	b	.L_free_r_38
.L_free_r_22:
	.align	2, 0
.L_free_r_21:
	.word	0x1ff
	.word	0x203f76c
.L_free_r_19:
	lsr	r1, r6, #0x9
	cmp	r1, #0
	bne	.L_free_r_23	@cond_branch
	lsr	r4, r6, #0x3
	b	.L_free_r_34
.L_free_r_23:
	cmp	r1, #0x4
	bhi	.L_free_r_25	@cond_branch
	lsr	r0, r6, #0x6
	add	r4, r0, #0
	add	r4, r4, #0x38
	b	.L_free_r_34
.L_free_r_25:
	cmp	r1, #0x14
	bhi	.L_free_r_27	@cond_branch
	add	r4, r1, #0
	add	r4, r4, #0x5b
	b	.L_free_r_34
.L_free_r_27:
	cmp	r1, #0x54
	bhi	.L_free_r_29	@cond_branch
	lsr	r0, r6, #0xc
	add	r4, r0, #0
	add	r4, r4, #0x6e
	b	.L_free_r_34
.L_free_r_29:
	mov	r0, #0xaa
	lsl	r0, r0, #0x1
	cmp	r1, r0
	bhi	.L_free_r_31	@cond_branch
	lsr	r0, r6, #0xf
	add	r4, r0, #0
	add	r4, r4, #0x77
	b	.L_free_r_34
.L_free_r_31:
	ldr	r0, .L_free_r_35 @ 0x0
	cmp	r1, r0
	bhi	.L_free_r_33	@cond_branch
	lsr	r0, r6, #0x12
	add	r4, r0, #0
	add	r4, r4, #0x7c
	b	.L_free_r_34
.L_free_r_36:
	.align	2, 0
.L_free_r_35:
	.word	0x554
.L_free_r_33:
	mov	r4, #0x7e
.L_free_r_34:
	lsl	r0, r4, #0x3
	ldr	r7, .L_free_r_39 @ 0x0
	add	r3, r0, r7
	ldr	r2, [r3, #0x8]
	cmp	r2, r3
	bne	.L_free_r_37	@cond_branch
	add	r0, r4, #0
	asr	r0, r0, #0x2
	mov	r1, #0x1
	LSL	r1, r0
	ldr	r0, [r7, #0x4]
	orr	r0, r0, r1
	str	r0, [r7, #0x4]
	b	.L_free_r_38
.L_free_r_40:
	.align	2, 0
.L_free_r_39:
	.word	0x203f76c
.L_free_r_37:
	ldr	r0, [r2, #0x4]
	mov	r1, #0x4
	neg	r1, r1
	b	.L_free_r_41
.L_free_r_43:
	ldr	r2, [r2, #0x8]
	cmp	r2, r3
	beq	.L_free_r_42	@cond_branch
	ldr	r0, [r2, #0x4]
.L_free_r_41:
	and	r0, r0, r1
	cmp	r6, r0
	bcc	.L_free_r_43	@cond_branch
.L_free_r_42:
	ldr	r3, [r2, #0xc]
.L_free_r_38:
	str	r3, [r5, #0xc]
	str	r2, [r5, #0x8]
	str	r5, [r3, #0x8]
	str	r5, [r2, #0xc]
.L_free_r_18:
	mov	r0, r9
	bl	__malloc_unlock
.L_free_r_6:
	pop	{r3, r4}
	mov	r8, r3
	mov	r9, r4
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end _free_r

	thumb_func_start _malloc_trim_r
_malloc_trim_r:
	push	{r4, r5, r6, r7, lr}
	mov	r7, r8
	push	{r7}
	add	r7, r0, #0
	add	r4, r1, #0
	bl	__malloc_lock
	ldr	r0, .L_malloc_trim_r_6 @ 0x0
	mov	r8, r0
	ldr	r0, [r0, #0x8]
	ldr	r6, [r0, #0x4]
	mov	r0, #0x4
	neg	r0, r0
	and	r6, r6, r0
	sub	r4, r6, r4
	mov	r5, #0x80
	lsl	r5, r5, #0x5
	ldr	r1, .L_malloc_trim_r_6 + 4 @ 0x0
	add	r4, r4, r1
	add	r0, r4, #0
	add	r1, r5, #0
	bl	__udivsi3
	sub	r0, r0, #0x1
	lsl	r4, r0, #0xc
	cmp	r4, r5
	blt	.L_malloc_trim_r_4	@cond_branch
	add	r0, r7, #0
	mov	r1, #0x0
	bl	_sbrk_r
	add	r2, r0, #0
	mov	r1, r8
	ldr	r0, [r1, #0x8]
	add	r0, r0, r6
	cmp	r2, r0
	bne	.L_malloc_trim_r_4	@cond_branch
	neg	r1, r4
	add	r0, r7, #0
	bl	_sbrk_r
	mov	r1, #0x1
	neg	r1, r1
	cmp	r0, r1
	bne	.L_malloc_trim_r_3	@cond_branch
	add	r0, r7, #0
	mov	r1, #0x0
	bl	_sbrk_r
	add	r2, r0, #0
	mov	r0, r8
	ldr	r3, [r0, #0x8]
	sub	r6, r2, r3
	cmp	r6, #0xf
	ble	.L_malloc_trim_r_4	@cond_branch
	ldr	r1, .L_malloc_trim_r_6 + 8 @ 0x0
	ldr	r0, .L_malloc_trim_r_6 + 12 @ 0x0
	ldr	r0, [r0]
	sub	r0, r2, r0
	str	r0, [r1]
	mov	r0, #0x1
	orr	r6, r6, r0
	str	r6, [r3, #0x4]
.L_malloc_trim_r_4:
	add	r0, r7, #0
	bl	__malloc_unlock
	mov	r0, #0x0
	b	.L_malloc_trim_r_5
.L_malloc_trim_r_7:
	.align	2, 0
.L_malloc_trim_r_6:
	.word	0x203f76c
	.word	0xfef
	.word	0x203fb88
	.word	0x203fb7c
.L_malloc_trim_r_3:
	mov	r1, r8
	ldr	r2, [r1, #0x8]
	sub	r0, r6, r4
	mov	r1, #0x1
	orr	r0, r0, r1
	str	r0, [r2, #0x4]
	ldr	r1, .L_malloc_trim_r_8 @ 0x0
	ldr	r0, [r1]
	sub	r0, r0, r4
	str	r0, [r1]
	add	r0, r7, #0
	bl	__malloc_unlock
	mov	r0, #0x1
.L_malloc_trim_r_5:
	pop	{r3}
	mov	r8, r3
	pop	{r4, r5, r6, r7, pc}
.L_malloc_trim_r_9:
	.align	2, 0
.L_malloc_trim_r_8:
	.word	0x203fb88
	thumb_func_end _malloc_trim_r

	thumb_func_start __sfvwrite
__sfvwrite:
	push	{r4, r5, r6, r7, lr}
	mov	r7, sl
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7}
	add	sp, sp, #0xfffffffc
	add	r5, r0, #0
	mov	sl, r1
	ldr	r6, [r1, #0x8]
	cmp	r6, #0
	bne	.L__sfvwrite_1	@cond_branch
	b	.L__sfvwrite_30
.L__sfvwrite_1:
	mov	r0, #0x8
	ldrh	r1, [r5, #0xc]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L__sfvwrite_3	@cond_branch
	ldr	r0, [r5, #0x10]
	cmp	r0, #0
	bne	.L__sfvwrite_5	@cond_branch
.L__sfvwrite_3:
	add	r0, r5, #0
	bl	__swsetup
	cmp	r0, #0
	beq	.L__sfvwrite_5	@cond_branch
	b	.L__sfvwrite_6
.L__sfvwrite_5:
	mov	r2, sl
	ldr	r2, [r2]
	mov	r8, r2
	mov	r6, #0x0
	ldrh	r1, [r5, #0xc]
	mov	r0, #0x2
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L__sfvwrite_7	@cond_branch
.L__sfvwrite_13:
	ldr	r0, [r5, #0x1c]
	ldr	r3, [r5, #0x24]
	cmp	r6, #0
	bne	.L__sfvwrite_8	@cond_branch
.L__sfvwrite_9:
	mov	r1, r8
	ldr	r7, [r1]
	ldr	r6, [r1, #0x4]
	mov	r2, #0x8
	add r8, r8, r2
	cmp	r6, #0
	beq	.L__sfvwrite_9	@cond_branch
.L__sfvwrite_8:
	add	r2, r6, #0
	mov	r1, #0x80
	lsl	r1, r1, #0x3
	cmp	r6, r1
	bls	.L__sfvwrite_10	@cond_branch
	add	r2, r1, #0
.L__sfvwrite_10:
	add	r1, r7, #0
	bl	_call_via_r3
	add	r4, r0, #0
	cmp	r4, #0
	bgt	.L__sfvwrite_11	@cond_branch
	b	.L__sfvwrite_45
.L__sfvwrite_11:
	add	r7, r7, r4
	sub	r6, r6, r4
	mov	r1, sl
	ldr	r0, [r1, #0x8]
	sub	r0, r0, r4
	str	r0, [r1, #0x8]
	cmp	r0, #0
	bne	.L__sfvwrite_13	@cond_branch
	b	.L__sfvwrite_30
.L__sfvwrite_7:
	mov	r0, #0x1
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L__sfvwrite_15	@cond_branch
.L__sfvwrite_29:
	ldrh	r1, [r5, #0xc]
	ldr	r0, [r5, #0x8]
	ldr	r3, [r5]
	cmp	r6, #0
	bne	.L__sfvwrite_16	@cond_branch
.L__sfvwrite_17:
	mov	r2, r8
	ldr	r7, [r2]
	ldr	r6, [r2, #0x4]
	mov	r2, #0x8
	add r8, r8, r2
	cmp	r6, #0
	beq	.L__sfvwrite_17	@cond_branch
.L__sfvwrite_16:
	add	r4, r0, #0
	mov	r2, #0x80
	lsl	r2, r2, #0x2
	add	r0, r2, #0
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L__sfvwrite_18	@cond_branch
	cmp	r6, r4
	bcs	.L__sfvwrite_19	@cond_branch
	add	r4, r6, #0
.L__sfvwrite_19:
	add	r0, r3, #0
	add	r1, r7, #0
	add	r2, r4, #0
	bl	memmove
	ldr	r0, [r5, #0x8]
	sub	r0, r0, r4
	str	r0, [r5, #0x8]
	ldr	r0, [r5]
	add	r0, r0, r4
	str	r0, [r5]
	add	r4, r6, #0
	b	.L__sfvwrite_28
.L__sfvwrite_18:
	ldr	r0, [r5, #0x10]
	cmp	r3, r0
	bls	.L__sfvwrite_22	@cond_branch
	cmp	r6, r4
	bls	.L__sfvwrite_22	@cond_branch
	add	r0, r3, #0
	add	r1, r7, #0
	add	r2, r4, #0
	bl	memmove
	ldr	r0, [r5]
	add	r0, r0, r4
	str	r0, [r5]
	add	r0, r5, #0
	bl	fflush
	cmp	r0, #0
	beq	.L__sfvwrite_23	@cond_branch
	b	.L__sfvwrite_45
.L__sfvwrite_23:
	b	.L__sfvwrite_28
.L__sfvwrite_22:
	ldr	r4, [r5, #0x14]
	cmp	r6, r4
	bcc	.L__sfvwrite_26	@cond_branch
	ldr	r0, [r5, #0x1c]
	ldr	r3, [r5, #0x24]
	add	r1, r7, #0
	add	r2, r4, #0
	bl	_call_via_r3
	add	r4, r0, #0
	cmp	r4, #0
	ble	.L__sfvwrite_45	@cond_branch
	b	.L__sfvwrite_28
.L__sfvwrite_26:
	add	r4, r6, #0
	add	r0, r3, #0
	add	r1, r7, #0
	add	r2, r4, #0
	bl	memmove
	ldr	r0, [r5, #0x8]
	sub	r0, r0, r4
	str	r0, [r5, #0x8]
	ldr	r0, [r5]
	add	r0, r0, r4
	str	r0, [r5]
.L__sfvwrite_28:
	add	r7, r7, r4
	sub	r6, r6, r4
	mov	r1, sl
	ldr	r0, [r1, #0x8]
	sub	r0, r0, r4
	str	r0, [r1, #0x8]
	cmp	r0, #0
	bne	.L__sfvwrite_29	@cond_branch
	b	.L__sfvwrite_30
.L__sfvwrite_15:
	mov	r2, #0x0
	str	r2, [sp]
.L__sfvwrite_46:
	cmp	r6, #0
	bne	.L__sfvwrite_31	@cond_branch
	mov	r0, #0x0
	str	r0, [sp]
.L__sfvwrite_32:
	mov	r1, r8
	ldr	r7, [r1]
	ldr	r6, [r1, #0x4]
	mov	r2, #0x8
	add r8, r8, r2
	cmp	r6, #0
	beq	.L__sfvwrite_32	@cond_branch
.L__sfvwrite_31:
	ldr	r0, [sp]
	cmp	r0, #0
	bne	.L__sfvwrite_33	@cond_branch
	add	r0, r7, #0
	mov	r1, #0xa
	add	r2, r6, #0
	bl	memchr
	add	r1, r0, #0
	cmp	r1, #0
	beq	.L__sfvwrite_34	@cond_branch
	sub	r0, r7, #1
	sub	r1, r1, r0
	b	.L__sfvwrite_35
.L__sfvwrite_34:
	add	r1, r6, #1
.L__sfvwrite_35:
	mov	r9, r1
	mov	r2, #0x1
	str	r2, [sp]
.L__sfvwrite_33:
	mov	r2, r9
	cmp	r9, r6
	bls	.L__sfvwrite_36	@cond_branch
	add	r2, r6, #0
.L__sfvwrite_36:
	ldr	r0, [r5, #0x8]
	ldr	r1, [r5, #0x14]
	add	r4, r0, r1
	ldr	r0, [r5, #0x10]
	ldr	r3, [r5]
	cmp	r3, r0
	bls	.L__sfvwrite_38	@cond_branch
	cmp	r2, r4
	ble	.L__sfvwrite_38	@cond_branch
	add	r0, r3, #0
	add	r1, r7, #0
	add	r2, r4, #0
	bl	memmove
	ldr	r0, [r5]
	add	r0, r0, r4
	str	r0, [r5]
	add	r0, r5, #0
	bl	fflush
	cmp	r0, #0
	bne	.L__sfvwrite_45	@cond_branch
	b	.L__sfvwrite_43
.L__sfvwrite_38:
	add	r4, r1, #0
	cmp	r2, r4
	blt	.L__sfvwrite_41	@cond_branch
	ldr	r0, [r5, #0x1c]
	ldr	r3, [r5, #0x24]
	add	r1, r7, #0
	add	r2, r4, #0
	bl	_call_via_r3
	add	r4, r0, #0
	cmp	r4, #0
	ble	.L__sfvwrite_45	@cond_branch
	b	.L__sfvwrite_43
.L__sfvwrite_41:
	add	r4, r2, #0
	add	r0, r3, #0
	add	r1, r7, #0
	bl	memmove
	ldr	r0, [r5, #0x8]
	sub	r0, r0, r4
	str	r0, [r5, #0x8]
	ldr	r0, [r5]
	add	r0, r0, r4
	str	r0, [r5]
.L__sfvwrite_43:
	mov	r0, r9
	sub	r0, r0, r4
	mov	r9, r0
	cmp	r0, #0
	bne	.L__sfvwrite_44	@cond_branch
	add	r0, r5, #0
	bl	fflush
	cmp	r0, #0
	bne	.L__sfvwrite_45	@cond_branch
	mov	r1, #0x0
	str	r1, [sp]
.L__sfvwrite_44:
	add	r7, r7, r4
	sub	r6, r6, r4
	mov	r2, sl
	ldr	r0, [r2, #0x8]
	sub	r0, r0, r4
	str	r0, [r2, #0x8]
	cmp	r0, #0
	bne	.L__sfvwrite_46	@cond_branch
.L__sfvwrite_30:
	mov	r0, #0x0
	b	.L__sfvwrite_47
.L__sfvwrite_45:
	mov	r0, #0x40
	ldrh	r1, [r5, #0xc]
	orr	r0, r0, r1
	strh	r0, [r5, #0xc]
.L__sfvwrite_6:
	mov	r0, #0x1
	neg	r0, r0
.L__sfvwrite_47:
	add	sp, sp, #0x4
	pop	{r3, r4, r5}
	mov	r8, r3
	mov	r9, r4
	mov	sl, r5
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end __sfvwrite

	thumb_func_start _fwalk
_fwalk:
	push	{r4, r5, r6, r7, lr}
	mov	r7, r8
	push	{r7}
	mov	r8, r1
	mov	r7, #0x0
	mov	r1, #0xec
	lsl	r1, r1, #0x1
	add	r6, r0, r1
	cmp	r6, #0
	beq	.L_fwalk_1	@cond_branch
.L_fwalk_5:
	ldr	r5, [r6, #0x8]
	ldr	r4, [r6, #0x4]
	b	.L_fwalk_2
.L_fwalk_4:
	mov	r1, #0xc
	ldsh	r0, [r5, r1]
	cmp	r0, #0
	beq	.L_fwalk_3	@cond_branch
	add	r0, r5, #0
	bl	_call_via_r8
	orr	r7, r7, r0
.L_fwalk_3:
	add	r5, r5, #0x58
.L_fwalk_2:
	sub	r4, r4, #0x1
	cmp	r4, #0
	bge	.L_fwalk_4	@cond_branch
	ldr	r6, [r6]
	cmp	r6, #0
	bne	.L_fwalk_5	@cond_branch
.L_fwalk_1:
	add	r0, r7, #0
	pop	{r3}
	mov	r8, r3
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end _fwalk

	thumb_func_start _setlocale_r
_setlocale_r:
	push	{r4, r5, r6, lr}
	add	r5, r0, #0
	add	r6, r1, #0
	add	r4, r2, #0
	cmp	r4, #0
	beq	.L_setlocale_r_1	@cond_branch
	ldr	r1, .L_setlocale_r_5 @ Data3+0xcc
	add	r0, r4, #0
	bl	strcmp
	cmp	r0, #0
	beq	.L_setlocale_r_3	@cond_branch
	ldr	r1, .L_setlocale_r_5 + 4 @ Data3+0xc4
	add	r0, r4, #0
	bl	strcmp
	cmp	r0, #0
	beq	.L_setlocale_r_3	@cond_branch
	mov	r0, #0x0
	b	.L_setlocale_r_4
.L_setlocale_r_6:
	.align	2, 0
.L_setlocale_r_5:
	.word	Data3+0xcc
	.word	Data3+0xc4
.L_setlocale_r_3:
	str	r6, [r5, #0x30]
	str	r4, [r5, #0x34]
.L_setlocale_r_1:
	ldr	r0, .L_setlocale_r_7 @ Data3+0xcc
.L_setlocale_r_4:
	pop	{r4, r5, r6, pc}
.L_setlocale_r_8:
	.align	2, 0
.L_setlocale_r_7:
	.word	Data3+0xcc
	thumb_func_end _setlocale_r

	thumb_func_start _localeconv_r
_localeconv_r:
	ldr	r0, .L_localeconv_r_1 @ Data3+0x94
	bx	lr
.L_localeconv_r_2:
	.align	2, 0
.L_localeconv_r_1:
	.word	Data3+0x94
	thumb_func_end _localeconv_r

	thumb_func_start setlocale
setlocale:
	push	{lr}
	add	r3, r0, #0
	add	r2, r1, #0
	ldr	r0, .Lsetlocale_1 @ 0x0
	ldr	r0, [r0]
	add	r1, r3, #0
	bl	_setlocale_r
	pop	{pc}
.Lsetlocale_2:
	.align	2, 0
.Lsetlocale_1:
	.word	0x203f754
	thumb_func_end setlocale

	thumb_func_start localeconv
localeconv:
	push	{lr}
	ldr	r0, .Llocaleconv_1 @ 0x0
	ldr	r0, [r0]
	bl	_localeconv_r
	pop	{pc}
.Llocaleconv_2:
	.align	2, 0
.Llocaleconv_1:
	.word	0x203f754
	thumb_func_end localeconv

	thumb_func_start __smakebuf
__smakebuf:
	push	{r4, r5, r6, r7, lr}
	add	sp, sp, #0xffffffc4
	add	r4, r0, #0
	mov	r0, #0x2
	ldrh	r1, [r4, #0xc]
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L__smakebuf_1	@cond_branch
	mov	r2, #0xe
	ldsh	r0, [r4, r2]
	cmp	r0, #0
	blt	.L__smakebuf_2	@cond_branch
	ldr	r0, [r4, #0x54]
	mov	r2, #0xe
	ldsh	r1, [r4, r2]
	mov	r2, sp
	bl	_fstat_r
	cmp	r0, #0
	bge	.L__smakebuf_3	@cond_branch
.L__smakebuf_2:
	mov	r7, #0x0
	mov	r6, #0x80
	lsl	r6, r6, #0x3
	mov	r1, #0x80
	lsl	r1, r1, #0x4
	add	r0, r1, #0
	ldrh	r2, [r4, #0xc]
	orr	r0, r0, r2
	b	.L__smakebuf_4
.L__smakebuf_3:
	mov	r7, #0x0
	ldr	r1, [sp, #0x4]
	mov	r0, #0xf0
	lsl	r0, r0, #0x8
	and	r1, r1, r0
	mov	r0, #0x80
	lsl	r0, r0, #0x6
	cmp	r1, r0
	bne	.L__smakebuf_5	@cond_branch
	mov	r7, #0x1
.L__smakebuf_5:
	mov	r6, #0x80
	lsl	r6, r6, #0x3
	mov	r0, #0x80
	lsl	r0, r0, #0x8
	cmp	r1, r0
	bne	.L__smakebuf_7	@cond_branch
	ldr	r1, [r4, #0x28]
	ldr	r0, .L__smakebuf_9 @ __sseek + 1
	cmp	r1, r0
	bne	.L__smakebuf_7	@cond_branch
	add	r0, r6, #0
	ldrh	r1, [r4, #0xc]
	orr	r0, r0, r1
	strh	r0, [r4, #0xc]
	str	r6, [r4, #0x4c]
	b	.L__smakebuf_8
.L__smakebuf_10:
	.align	2, 0
.L__smakebuf_9:
	.word	__sseek + 1
.L__smakebuf_7:
	mov	r2, #0x80
	lsl	r2, r2, #0x4
	add	r0, r2, #0
	ldrh	r1, [r4, #0xc]
	orr	r0, r0, r1
.L__smakebuf_4:
	strh	r0, [r4, #0xc]
.L__smakebuf_8:
	ldr	r0, [r4, #0x54]
	add	r1, r6, #0
	bl	_malloc_r
	add	r2, r0, #0
	cmp	r2, #0
	bne	.L__smakebuf_11	@cond_branch
	mov	r0, #0x2
	ldrh	r2, [r4, #0xc]
	orr	r0, r0, r2
	strh	r0, [r4, #0xc]
.L__smakebuf_1:
	add	r0, r4, #0
	add	r0, r0, #0x43
	str	r0, [r4]
	str	r0, [r4, #0x10]
	mov	r0, #0x1
	str	r0, [r4, #0x14]
	b	.L__smakebuf_14
.L__smakebuf_11:
	ldr	r1, [r4, #0x54]
	ldr	r0, .L__smakebuf_15 @ _cleanup_r + 1
	str	r0, [r1, #0x3c]
	mov	r0, #0x80
	mov	r5, #0x0
	ldrh	r1, [r4, #0xc]
	orr	r0, r0, r1
	strh	r0, [r4, #0xc]
	str	r2, [r4]
	str	r2, [r4, #0x10]
	str	r6, [r4, #0x14]
	cmp	r7, #0
	beq	.L__smakebuf_14	@cond_branch
	mov	r2, #0xe
	ldsh	r0, [r4, r2]
	bl	isatty
	cmp	r0, #0
	beq	.L__smakebuf_14	@cond_branch
	mov	r0, #0x1
	ldrh	r1, [r4, #0xc]
	orr	r0, r0, r1
	strh	r0, [r4, #0xc]
.L__smakebuf_14:
	add	sp, sp, #0x3c
	pop	{r4, r5, r6, r7, pc}
.L__smakebuf_16:
	.align	2, 0
.L__smakebuf_15:
	.word	_cleanup_r + 1
	thumb_func_end __smakebuf

	thumb_func_start malloc_extend_top
malloc_extend_top:
	push	{r4, r5, r6, r7, lr}
	mov	r7, sl
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7}
	add	sp, sp, #0xfffffffc
	str	r0, [sp]
	ldr	r0, .Lmalloc_extend_top_7 @ 0x0
	ldr	r0, [r0, #0x8]
	mov	r8, r0
	ldr	r7, [r0, #0x4]
	mov	r0, #0x4
	neg	r0, r0
	and	r7, r7, r0
	mov	r2, r8
	add	r4, r2, r7
	ldr	r0, .Lmalloc_extend_top_7 + 4 @ 0x0
	ldr	r0, [r0]
	add	r1, r1, r0
	add	r6, r1, #0
	add	r6, r6, #0x10
	ldr	r3, .Lmalloc_extend_top_7 + 8 @ 0x0
	mov	sl, r3
	ldr	r0, [r3]
	mov	r2, #0x1
	neg	r2, r2
	mov	r9, r2
	cmp	r0, r9
	beq	.Lmalloc_extend_top_1	@cond_branch
	ldr	r3, .Lmalloc_extend_top_7 + 12 @ 0x0
	add	r6, r1, r3
	ldr	r0, .Lmalloc_extend_top_7 + 16 @ 0x0
	and	r6, r6, r0
.Lmalloc_extend_top_1:
	ldr	r0, [sp]
	add	r1, r6, #0
	bl	_sbrk_r
	add	r5, r0, #0
	cmp	r5, r9
	beq	.Lmalloc_extend_top_21	@cond_branch
	cmp	r5, r4
	bcs	.Lmalloc_extend_top_3	@cond_branch
	ldr	r0, .Lmalloc_extend_top_7 @ 0x0
	cmp	r8, r0
	bne	.Lmalloc_extend_top_21	@cond_branch
.Lmalloc_extend_top_3:
	ldr	r1, .Lmalloc_extend_top_7 + 20 @ 0x0
	ldr	r0, [r1]
	add	r2, r0, r6
	str	r2, [r1]
	cmp	r5, r4
	bne	.Lmalloc_extend_top_5	@cond_branch
	add	r2, r6, r7
	ldr	r3, .Lmalloc_extend_top_7 @ 0x0
	ldr	r1, [r3, #0x8]
	mov	r0, #0x1
	orr	r2, r2, r0
	str	r2, [r1, #0x4]
	b	.Lmalloc_extend_top_19
.Lmalloc_extend_top_8:
	.align	2, 0
.Lmalloc_extend_top_7:
	.word	0x203f76c
	.word	0x203fb78
	.word	0x203fb7c
	.word	0x100f
	.word	0xfffff000
	.word	0x203fb88
.Lmalloc_extend_top_5:
	mov	r3, sl
	ldr	r0, [r3]
	cmp	r0, r9
	bne	.Lmalloc_extend_top_9	@cond_branch
	str	r5, [r3]
	b	.Lmalloc_extend_top_10
.Lmalloc_extend_top_9:
	sub	r0, r5, r4
	add	r0, r2, r0
	str	r0, [r1]
.Lmalloc_extend_top_10:
	add	r1, r5, #0
	add	r1, r1, #0x8
	mov	r0, #0x7
	and	r1, r1, r0
	cmp	r1, #0
	beq	.Lmalloc_extend_top_11	@cond_branch
	mov	r0, #0x8
	sub	r4, r0, r1
	add	r5, r5, r4
	b	.Lmalloc_extend_top_12
.Lmalloc_extend_top_11:
	mov	r4, #0x0
.Lmalloc_extend_top_12:
	add	r0, r5, r6
	mov	r1, #0x80
	lsl	r1, r1, #0x5
	sub	r1, r1, #0x1
	and	r0, r0, r1
	mov	r1, #0x80
	lsl	r1, r1, #0x5
	sub	r0, r1, r0
	add	r4, r4, r0
	ldr	r0, [sp]
	add	r1, r4, #0
	bl	_sbrk_r
	add	r2, r0, #0
	mov	r0, #0x1
	neg	r0, r0
	cmp	r2, r0
	beq	.Lmalloc_extend_top_21	@cond_branch
	ldr	r1, .Lmalloc_extend_top_17 @ 0x0
	ldr	r0, [r1]
	add	r0, r0, r4
	str	r0, [r1]
	ldr	r1, .Lmalloc_extend_top_17 + 4 @ 0x0
	str	r5, [r1, #0x8]
	sub	r0, r2, r5
	add	r2, r0, r4
	mov	r3, #0x1
	orr	r2, r2, r3
	str	r2, [r5, #0x4]
	cmp	r8, r1
	beq	.Lmalloc_extend_top_19	@cond_branch
	cmp	r7, #0xf
	bhi	.Lmalloc_extend_top_15	@cond_branch
	str	r3, [r5, #0x4]
	b	.Lmalloc_extend_top_21
.Lmalloc_extend_top_18:
	.align	2, 0
.Lmalloc_extend_top_17:
	.word	0x203fb88
	.word	0x203f76c
.Lmalloc_extend_top_15:
	sub	r7, r7, #0xc
	mov	r0, #0x8
	neg	r0, r0
	and	r7, r7, r0
	mov	r2, r8
	ldr	r0, [r2, #0x4]
	and	r0, r0, r3
	orr	r0, r0, r7
	str	r0, [r2, #0x4]
	add	r1, r2, r7
	mov	r0, #0x5
	str	r0, [r1, #0x4]
	str	r0, [r1, #0x8]
	cmp	r7, #0xf
	bls	.Lmalloc_extend_top_19	@cond_branch
	mov	r1, r8
	add	r1, r1, #0x8
	ldr	r0, [sp]
	bl	_free_r
.Lmalloc_extend_top_19:
	ldr	r0, .Lmalloc_extend_top_22 @ 0x0
	ldr	r2, .Lmalloc_extend_top_22 + 4 @ 0x0
	ldr	r1, [r0]
	ldr	r0, [r2]
	cmp	r1, r0
	bls	.Lmalloc_extend_top_20	@cond_branch
	str	r1, [r2]
.Lmalloc_extend_top_20:
	ldr	r2, .Lmalloc_extend_top_22 + 8 @ 0x0
	ldr	r0, [r2]
	cmp	r1, r0
	bls	.Lmalloc_extend_top_21	@cond_branch
	str	r1, [r2]
.Lmalloc_extend_top_21:
	add	sp, sp, #0x4
	pop	{r3, r4, r5}
	mov	r8, r3
	mov	r9, r4
	mov	sl, r5
	pop	{r4, r5, r6, r7, pc}
.Lmalloc_extend_top_23:
	.align	2, 0
.Lmalloc_extend_top_22:
	.word	0x203fb88
	.word	0x203fb80
	.word	0x203fb84
	thumb_func_end malloc_extend_top

	thumb_func_start _malloc_r
_malloc_r:
	push	{r4, r5, r6, r7, lr}
	mov	r7, sl
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7}
	add	sp, sp, #0xfffffff8
	str	r0, [sp]
	add	r1, r1, #0xb
	cmp	r1, #0x16
	ble	.L_malloc_r_1	@cond_branch
	mov	r0, #0x8
	neg	r0, r0
	mov	r8, r0
	mov	r2, r8
	and	r2, r2, r1
	mov	r8, r2
	b	.L_malloc_r_2
.L_malloc_r_1:
	mov	r3, #0x10
	mov	r8, r3
.L_malloc_r_2:
	ldr	r0, [sp]
	bl	__malloc_lock
	ldr	r0, .L_malloc_r_7 @ 0x0
	cmp	r8, r0
	bhi	.L_malloc_r_3	@cond_branch
	mov	r4, r8
	lsr	r4, r4, #0x3
	mov	ip, r4
	ldr	r0, .L_malloc_r_7 + 4 @ 0x0
	mov	r7, r8
	add	r2, r7, r0
	ldr	r5, [r2, #0xc]
	cmp	r5, r2
	bne	.L_malloc_r_4	@cond_branch
	add	r2, r5, #0
	add	r2, r2, #0x8
	ldr	r5, [r2, #0xc]
	cmp	r5, r2
	beq	.L_malloc_r_5	@cond_branch
.L_malloc_r_4:
	ldr	r2, [r5, #0x4]
	mov	r0, #0x4
	neg	r0, r0
	and	r2, r2, r0
	ldr	r6, [r5, #0xc]
	ldr	r4, [r5, #0x8]
	str	r6, [r4, #0xc]
	str	r4, [r6, #0x8]
	add	r2, r5, r2
	ldr	r0, [r2, #0x4]
	mov	r1, #0x1
	orr	r0, r0, r1
	str	r0, [r2, #0x4]
	b	.L_malloc_r_97
.L_malloc_r_8:
	.align	2, 0
.L_malloc_r_7:
	.word	0x1f7
	.word	0x203f76c
.L_malloc_r_5:
	mov	r0, #0x2
	add ip, ip, r0
	b	.L_malloc_r_9
.L_malloc_r_3:
	mov	r2, r8
	lsr	r1, r2, #0x9
	cmp	r1, #0
	bne	.L_malloc_r_10	@cond_branch
	lsr	r2, r2, #0x3
	b	.L_malloc_r_11
.L_malloc_r_10:
	cmp	r1, #0x4
	bhi	.L_malloc_r_12	@cond_branch
	mov	r3, r8
	lsr	r0, r3, #0x6
	add	r0, r0, #0x38
	mov	ip, r0
	b	.L_malloc_r_21
.L_malloc_r_12:
	cmp	r1, #0x14
	bhi	.L_malloc_r_14	@cond_branch
	add	r1, r1, #0x5b
	mov	ip, r1
	b	.L_malloc_r_21
.L_malloc_r_14:
	cmp	r1, #0x54
	bhi	.L_malloc_r_16	@cond_branch
	mov	r4, r8
	lsr	r0, r4, #0xc
	add	r0, r0, #0x6e
	mov	ip, r0
	b	.L_malloc_r_21
.L_malloc_r_16:
	mov	r0, #0xaa
	lsl	r0, r0, #0x1
	cmp	r1, r0
	bhi	.L_malloc_r_18	@cond_branch
	mov	r7, r8
	lsr	r0, r7, #0xf
	add	r0, r0, #0x77
	mov	ip, r0
	b	.L_malloc_r_21
.L_malloc_r_18:
	ldr	r0, .L_malloc_r_22 @ 0x0
	cmp	r1, r0
	bhi	.L_malloc_r_20	@cond_branch
	mov	r1, r8
	lsr	r0, r1, #0x12
	add	r0, r0, #0x7c
	mov	ip, r0
	b	.L_malloc_r_21
.L_malloc_r_23:
	.align	2, 0
.L_malloc_r_22:
	.word	0x554
.L_malloc_r_20:
	mov	r2, #0x7e
.L_malloc_r_11:
	mov	ip, r2
.L_malloc_r_21:
	mov	r3, ip
	lsl	r0, r3, #0x3
	ldr	r1, .L_malloc_r_27 @ 0x0
	add	r4, r0, r1
	ldr	r5, [r4, #0xc]
	cmp	r5, r4
	beq	.L_malloc_r_31	@cond_branch
	ldr	r1, [r5, #0x4]
	mov	r0, #0x4
	neg	r0, r0
	and	r1, r1, r0
	mov	r7, r8
	sub	r3, r1, r7
	cmp	r3, #0xf
	ble	.L_malloc_r_32	@cond_branch
	add	r0, r0, #0x3
	add ip, ip, r0
	b	.L_malloc_r_31
.L_malloc_r_28:
	.align	2, 0
.L_malloc_r_27:
	.word	0x203f76c
.L_malloc_r_32:
	cmp	r3, #0
	blt	.L_malloc_r_29	@cond_branch
	b	.L_malloc_r_30
.L_malloc_r_29:
	ldr	r5, [r5, #0xc]
	cmp	r5, r4
	beq	.L_malloc_r_31	@cond_branch
	ldr	r1, [r5, #0x4]
	mov	r0, #0x4
	neg	r0, r0
	and	r1, r1, r0
	mov	r2, r8
	sub	r3, r1, r2
	cmp	r3, #0xf
	ble	.L_malloc_r_32	@cond_branch
	mov	r3, #0x1
	neg	r3, r3
	add ip, ip, r3
.L_malloc_r_31:
	mov	r4, #0x1
	add ip, ip, r4
.L_malloc_r_9:
	ldr	r0, .L_malloc_r_37 @ 0x0
	ldr	r5, [r0, #0x8]
	mov	sl, r0
	cmp	r5, sl
	bne	.L_malloc_r_33	@cond_branch
	b	.L_malloc_r_34
.L_malloc_r_33:
	ldr	r1, [r5, #0x4]
	mov	r0, #0x4
	neg	r0, r0
	and	r1, r1, r0
	mov	r7, r8
	sub	r3, r1, r7
	cmp	r3, #0xf
	ble	.L_malloc_r_35	@cond_branch
	add	r2, r5, r7
	mov	r1, #0x1
	add	r0, r7, #0
	orr	r0, r0, r1
	str	r0, [r5, #0x4]
	mov	r4, sl
	str	r2, [r4, #0xc]
	str	r2, [r4, #0x8]
	str	r4, [r2, #0xc]
	str	r4, [r2, #0x8]
	add	r0, r3, #0
	orr	r0, r0, r1
	str	r0, [r2, #0x4]
	add	r0, r2, r3
	str	r3, [r0]
	b	.L_malloc_r_97
.L_malloc_r_38:
	.align	2, 0
.L_malloc_r_37:
	.word	0x203f774
.L_malloc_r_35:
	mov	r7, sl
	str	r7, [r7, #0xc]
	str	r7, [r7, #0x8]
	cmp	r3, #0
	blt	.L_malloc_r_39	@cond_branch
	add	r2, r5, r1
	ldr	r0, [r2, #0x4]
	mov	r1, #0x1
	orr	r0, r0, r1
	str	r0, [r2, #0x4]
	b	.L_malloc_r_97
.L_malloc_r_39:
	ldr	r0, .L_malloc_r_43 @ 0x0
	cmp	r1, r0
	bhi	.L_malloc_r_41	@cond_branch
	lsr	r2, r1, #0x3
	mov	r3, sl
	sub	r3, r3, #0x8
	add	r0, r2, #0
	asr	r0, r0, #0x2
	mov	r1, #0x1
	LSL	r1, r0
	ldr	r0, [r3, #0x4]
	orr	r0, r0, r1
	str	r0, [r3, #0x4]
	lsl	r0, r2, #0x3
	add	r6, r0, r3
	ldr	r4, [r6, #0x8]
	b	.L_malloc_r_60
.L_malloc_r_44:
	.align	2, 0
.L_malloc_r_43:
	.word	0x1ff
.L_malloc_r_41:
	lsr	r2, r1, #0x9
	cmp	r2, #0
	bne	.L_malloc_r_45	@cond_branch
	lsr	r2, r1, #0x3
	b	.L_malloc_r_56
.L_malloc_r_45:
	cmp	r2, #0x4
	bhi	.L_malloc_r_47	@cond_branch
	lsr	r0, r1, #0x6
	add	r2, r0, #0
	add	r2, r2, #0x38
	b	.L_malloc_r_56
.L_malloc_r_47:
	cmp	r2, #0x14
	bhi	.L_malloc_r_49	@cond_branch
	add	r2, r2, #0x5b
	b	.L_malloc_r_56
.L_malloc_r_49:
	cmp	r2, #0x54
	bhi	.L_malloc_r_51	@cond_branch
	lsr	r0, r1, #0xc
	add	r2, r0, #0
	add	r2, r2, #0x6e
	b	.L_malloc_r_56
.L_malloc_r_51:
	mov	r0, #0xaa
	lsl	r0, r0, #0x1
	cmp	r2, r0
	bhi	.L_malloc_r_53	@cond_branch
	lsr	r0, r1, #0xf
	add	r2, r0, #0
	add	r2, r2, #0x77
	b	.L_malloc_r_56
.L_malloc_r_53:
	ldr	r0, .L_malloc_r_57 @ 0x0
	cmp	r2, r0
	bhi	.L_malloc_r_55	@cond_branch
	lsr	r0, r1, #0x12
	add	r2, r0, #0
	add	r2, r2, #0x7c
	b	.L_malloc_r_56
.L_malloc_r_58:
	.align	2, 0
.L_malloc_r_57:
	.word	0x554
.L_malloc_r_55:
	mov	r2, #0x7e
.L_malloc_r_56:
	lsl	r0, r2, #0x3
	ldr	r3, .L_malloc_r_61 @ 0x0
	add	r6, r0, r3
	ldr	r4, [r6, #0x8]
	cmp	r4, r6
	bne	.L_malloc_r_59	@cond_branch
	add	r0, r2, #0
	asr	r0, r0, #0x2
	mov	r1, #0x1
	LSL	r1, r0
	ldr	r7, .L_malloc_r_61 @ 0x0
	ldr	r0, [r7, #0x4]
	orr	r0, r0, r1
	str	r0, [r7, #0x4]
	b	.L_malloc_r_60
.L_malloc_r_62:
	.align	2, 0
.L_malloc_r_61:
	.word	0x203f76c
.L_malloc_r_59:
	ldr	r0, [r4, #0x4]
	mov	r2, #0x4
	neg	r2, r2
	b	.L_malloc_r_63
.L_malloc_r_65:
	ldr	r4, [r4, #0x8]
	cmp	r4, r6
	beq	.L_malloc_r_64	@cond_branch
	ldr	r0, [r4, #0x4]
.L_malloc_r_63:
	and	r0, r0, r2
	cmp	r1, r0
	bcc	.L_malloc_r_65	@cond_branch
.L_malloc_r_64:
	ldr	r6, [r4, #0xc]
.L_malloc_r_60:
	str	r6, [r5, #0xc]
	str	r4, [r5, #0x8]
	str	r5, [r6, #0x8]
	str	r5, [r4, #0xc]
.L_malloc_r_34:
	mov	r0, ip
	cmp	r0, #0
	bge	.L_malloc_r_66	@cond_branch
	add	r0, r0, #0x3
.L_malloc_r_66:
	asr	r0, r0, #0x2
	mov	r6, #0x1
	LSL	r6, r0
	ldr	r0, .L_malloc_r_70 @ 0x0
	ldr	r1, [r0, #0x4]
	cmp	r6, r1
	bhi	.L_malloc_r_81	@cond_branch
	add	r0, r6, #0
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_malloc_r_68	@cond_branch
	mov	r0, #0x4
	neg	r0, r0
	mov	r2, ip
	and	r0, r0, r2
	add	r0, r0, #0x4
	mov	ip, r0
	b	.L_malloc_r_69
.L_malloc_r_71:
	.align	2, 0
.L_malloc_r_70:
	.word	0x203f76c
.L_malloc_r_72:
	mov	r3, #0x4
	add ip, ip, r3
.L_malloc_r_69:
	lsl	r6, r6, #0x1
	add	r0, r6, #0
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_malloc_r_72	@cond_branch
.L_malloc_r_68:
	ldr	r4, .L_malloc_r_85 @ 0x0
	mov	r9, r4
.L_malloc_r_84:
	mov	r7, ip
	str	r7, [sp, #0x4]
	mov	r1, ip
	lsl	r0, r1, #0x3
	mov	r3, r9
	add	r2, r0, r3
	add	r4, r2, #0
.L_malloc_r_77:
	ldr	r5, [r4, #0xc]
	cmp	r5, r4
	beq	.L_malloc_r_73	@cond_branch
	mov	r0, #0x4
	neg	r0, r0
.L_malloc_r_76:
	ldr	r1, [r5, #0x4]
	and	r1, r1, r0
	mov	r7, r8
	sub	r3, r1, r7
	cmp	r3, #0xf
	bgt	.L_malloc_r_74	@cond_branch
	cmp	r3, #0
	bge	.L_malloc_r_75	@cond_branch
	ldr	r5, [r5, #0xc]
	cmp	r5, r4
	bne	.L_malloc_r_76	@cond_branch
.L_malloc_r_73:
	add	r4, r4, #0x8
	mov	r0, #0x1
	add ip, ip, r0
	mov	r0, ip
	mov	r1, #0x3
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_malloc_r_77	@cond_branch
.L_malloc_r_79:
	ldr	r0, [sp, #0x4]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_malloc_r_78	@cond_branch
	ldr	r3, [sp, #0x4]
	sub	r3, r3, #0x1
	str	r3, [sp, #0x4]
	sub	r2, r2, #0x8
	ldr	r0, [r2, #0x8]
	cmp	r0, r2
	beq	.L_malloc_r_79	@cond_branch
.L_malloc_r_87:
	lsl	r6, r6, #0x1
	mov	r4, r9
	ldr	r1, [r4, #0x4]
	cmp	r6, r1
	bhi	.L_malloc_r_81	@cond_branch
	cmp	r6, #0
	beq	.L_malloc_r_81	@cond_branch
	add	r0, r6, #0
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_malloc_r_84	@cond_branch
.L_malloc_r_83:
	mov	r7, #0x4
	add ip, ip, r7
	lsl	r6, r6, #0x1
	add	r0, r6, #0
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_malloc_r_83	@cond_branch
	b	.L_malloc_r_84
.L_malloc_r_86:
	.align	2, 0
.L_malloc_r_85:
	.word	0x203f76c
.L_malloc_r_78:
	mov	r1, r9
	ldr	r0, [r1, #0x4]
	BIC	r0, r6
	str	r0, [r1, #0x4]
	b	.L_malloc_r_87
.L_malloc_r_81:
	ldr	r2, .L_malloc_r_93 @ 0x0
	ldr	r0, [r2, #0x8]
	ldr	r0, [r0, #0x4]
	mov	r4, #0x4
	neg	r4, r4
	and	r0, r0, r4
	mov	r7, r8
	sub	r3, r0, r7
	cmp	r0, r8
	bcc	.L_malloc_r_88	@cond_branch
	cmp	r3, #0xf
	bgt	.L_malloc_r_91	@cond_branch
.L_malloc_r_88:
	ldr	r0, [sp]
	mov	r1, r8
	bl	malloc_extend_top
	ldr	r1, .L_malloc_r_93 @ 0x0
	ldr	r0, [r1, #0x8]
	ldr	r0, [r0, #0x4]
	and	r0, r0, r4
	mov	r2, r8
	sub	r3, r0, r2
	cmp	r0, r8
	bcc	.L_malloc_r_90	@cond_branch
	cmp	r3, #0xf
	bgt	.L_malloc_r_91	@cond_branch
.L_malloc_r_90:
	ldr	r0, [sp]
	bl	__malloc_unlock
	mov	r0, #0x0
	b	.L_malloc_r_92
.L_malloc_r_94:
	.align	2, 0
.L_malloc_r_93:
	.word	0x203f76c
.L_malloc_r_30:
	ldr	r6, [r5, #0xc]
	ldr	r4, [r5, #0x8]
	str	r6, [r4, #0xc]
	str	r4, [r6, #0x8]
	add	r2, r5, r1
	ldr	r0, [r2, #0x4]
	mov	r1, #0x1
	orr	r0, r0, r1
	str	r0, [r2, #0x4]
	b	.L_malloc_r_97
.L_malloc_r_74:
	mov	r4, r8
	add	r2, r5, r4
	mov	r1, #0x1
	orr	r4, r4, r1
	str	r4, [r5, #0x4]
	ldr	r6, [r5, #0xc]
	ldr	r4, [r5, #0x8]
	str	r6, [r4, #0xc]
	str	r4, [r6, #0x8]
	mov	r7, sl
	str	r2, [r7, #0xc]
	str	r2, [r7, #0x8]
	str	r7, [r2, #0xc]
	str	r7, [r2, #0x8]
	add	r0, r3, #0
	orr	r0, r0, r1
	str	r0, [r2, #0x4]
	add	r0, r2, r3
	str	r3, [r0]
	b	.L_malloc_r_97
.L_malloc_r_75:
	add	r2, r5, r1
	ldr	r0, [r2, #0x4]
	mov	r1, #0x1
	orr	r0, r0, r1
	str	r0, [r2, #0x4]
	ldr	r6, [r5, #0xc]
	ldr	r4, [r5, #0x8]
	str	r6, [r4, #0xc]
	str	r4, [r6, #0x8]
	b	.L_malloc_r_97
.L_malloc_r_91:
	ldr	r2, .L_malloc_r_98 @ 0x0
	ldr	r5, [r2, #0x8]
	mov	r1, #0x1
	mov	r0, r8
	orr	r0, r0, r1
	str	r0, [r5, #0x4]
	mov	r4, r8
	add	r0, r5, r4
	str	r0, [r2, #0x8]
	orr	r3, r3, r1
	str	r3, [r0, #0x4]
.L_malloc_r_97:
	ldr	r0, [sp]
	bl	__malloc_unlock
	add	r0, r5, #0
	add	r0, r0, #0x8
.L_malloc_r_92:
	add	sp, sp, #0x8
	pop	{r3, r4, r5}
	mov	r8, r3
	mov	r9, r4
	mov	sl, r5
	pop	{r4, r5, r6, r7, pc}
.L_malloc_r_99:
	.align	2, 0
.L_malloc_r_98:
	.word	0x203f76c
	thumb_func_end _malloc_r

	thumb_func_start _mbtowc_r
_mbtowc_r:
	add	sp, sp, #0xfffffffc
	cmp	r1, #0
	bne	.L_mbtowc_r_1	@cond_branch
	mov	r1, sp
.L_mbtowc_r_1:
	cmp	r2, #0
	beq	.L_mbtowc_r_5	@cond_branch
	cmp	r3, #0
	bne	.L_mbtowc_r_3	@cond_branch
	mov	r0, #0x1
	neg	r0, r0
	b	.L_mbtowc_r_6
.L_mbtowc_r_3:
	ldrb	r0, [r2]
	str	r0, [r1]
	ldrb	r0, [r2]
	cmp	r0, #0
	beq	.L_mbtowc_r_5	@cond_branch
	mov	r0, #0x1
	b	.L_mbtowc_r_6
.L_mbtowc_r_5:
	mov	r0, #0x0
.L_mbtowc_r_6:
	add	sp, sp, #0x4
	bx	lr
	thumb_func_end _mbtowc_r

	thumb_func_start memchr
memchr:
	push	{r4, r5, r6, r7, lr}
	add	r5, r1, #0
	add	r1, r0, #0
	mov	r0, #0xff
	and	r5, r5, r0
	cmp	r2, #0x3
	bls	.Lmemchr_9	@cond_branch
	mov	r0, #0x3
	and	r0, r0, r1
	cmp	r0, #0
	bne	.Lmemchr_9	@cond_branch
	add	r4, r1, #0
	mov	r6, #0x0
	mov	r1, #0x0
.Lmemchr_3:
	lsl	r0, r6, #0x8
	add	r6, r0, r5
	add	r1, r1, #0x1
	cmp	r1, #0x3
	bls	.Lmemchr_3	@cond_branch
	cmp	r2, #0x3
	bls	.Lmemchr_4	@cond_branch
	ldr	r0, .Lmemchr_10 @ 0x0
	mov	ip, r0
	ldr	r7, .Lmemchr_10 + 4 @ 0x0
.Lmemchr_8:
	ldr	r1, [r4]
	eor	r1, r1, r6
	mov	r3, ip
	add	r0, r1, r3
	BIC	r0, r1
	and	r0, r0, r7
	cmp	r0, #0
	beq	.Lmemchr_5	@cond_branch
	add	r1, r4, #0
	mov	r3, #0x0
.Lmemchr_7:
	ldrb	r0, [r1]
	cmp	r0, r5
	beq	.Lmemchr_6	@cond_branch
	add	r1, r1, #0x1
	add	r3, r3, #0x1
	cmp	r3, #0x3
	bls	.Lmemchr_7	@cond_branch
.Lmemchr_5:
	sub	r2, r2, #0x4
	add	r4, r4, #0x4
	cmp	r2, #0x3
	bhi	.Lmemchr_8	@cond_branch
.Lmemchr_4:
	add	r1, r4, #0
	b	.Lmemchr_9
.Lmemchr_11:
	.align	2, 0
.Lmemchr_10:
	.word	0xfefefeff
	.word	0x80808080
.Lmemchr_14:
	ldrb	r0, [r1]
	cmp	r0, r5
	bne	.Lmemchr_12	@cond_branch
.Lmemchr_6:
	add	r0, r1, #0
	b	.Lmemchr_13
.Lmemchr_12:
	add	r1, r1, #0x1
.Lmemchr_9:
	add	r0, r2, #0
	sub	r2, r2, #0x1
	cmp	r0, #0
	bne	.Lmemchr_14	@cond_branch
	mov	r0, #0x0
.Lmemchr_13:
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end memchr

	thumb_func_start memmove
memmove:
	push	{r4, r5, lr}
	add	r5, r0, #0
	add	r4, r5, #0
	add	r3, r1, #0
	cmp	r3, r5
	bcs	.Lmemmove_2	@cond_branch
	add	r0, r3, r2
	cmp	r5, r0
	bcs	.Lmemmove_2	@cond_branch
	add	r3, r0, #0
	add	r4, r5, r2
	sub	r2, r2, #0x1
	mov	r0, #0x1
	neg	r0, r0
	cmp	r2, r0
	beq	.Lmemmove_11	@cond_branch
	add	r1, r0, #0
.Lmemmove_4:
	sub	r4, r4, #0x1
	sub	r3, r3, #0x1
	ldrb	r0, [r3]
	strb	r0, [r4]
	sub	r2, r2, #0x1
	cmp	r2, r1
	bne	.Lmemmove_4	@cond_branch
	b	.Lmemmove_11
.Lmemmove_2:
	cmp	r2, #0xf
	bls	.Lmemmove_7	@cond_branch
	add	r0, r3, #0
	orr	r0, r0, r4
	mov	r1, #0x3
	and	r0, r0, r1
	cmp	r0, #0
	bne	.Lmemmove_7	@cond_branch
	add	r1, r3, #0
.Lmemmove_8:
	ldmia	r1!, {r0}
	stmia	r4!, {r0}
	ldmia	r1!, {r0}
	stmia	r4!, {r0}
	ldmia	r1!, {r0}
	stmia	r4!, {r0}
	ldmia	r1!, {r0}
	stmia	r4!, {r0}
	sub	r2, r2, #0x10
	cmp	r2, #0xf
	bhi	.Lmemmove_8	@cond_branch
	cmp	r2, #0x3
	bls	.Lmemmove_9	@cond_branch
.Lmemmove_10:
	ldmia	r1!, {r0}
	stmia	r4!, {r0}
	sub	r2, r2, #0x4
	cmp	r2, #0x3
	bhi	.Lmemmove_10	@cond_branch
.Lmemmove_9:
	add	r3, r1, #0
.Lmemmove_7:
	sub	r2, r2, #0x1
	mov	r0, #0x1
	neg	r0, r0
	cmp	r2, r0
	beq	.Lmemmove_11	@cond_branch
	add	r1, r0, #0
.Lmemmove_12:
	ldrb	r0, [r3]
	strb	r0, [r4]
	add	r3, r3, #0x1
	add	r4, r4, #0x1
	sub	r2, r2, #0x1
	cmp	r2, r1
	bne	.Lmemmove_12	@cond_branch
.Lmemmove_11:
	add	r0, r5, #0
	pop	{r4, r5, pc}
	thumb_func_end memmove

	thumb_func_start __malloc_lock
__malloc_lock:
	bx	lr
	thumb_func_end __malloc_lock

	thumb_func_start __malloc_unlock
__malloc_unlock:
	bx	lr
	thumb_func_end __malloc_unlock

	thumb_func_start _Balloc
_Balloc:
	push	{r4, r5, r6, lr}
	add	r4, r0, #0
	add	r6, r1, #0
	ldr	r0, [r4, #0x4c]
	cmp	r0, #0
	bne	.L_Balloc_1	@cond_branch
	add	r0, r4, #0
	mov	r1, #0x4
	mov	r2, #0x10
	bl	_calloc_r
	str	r0, [r4, #0x4c]
	cmp	r0, #0
	beq	.L_Balloc_2	@cond_branch
.L_Balloc_1:
	ldr	r1, [r4, #0x4c]
	lsl	r0, r6, #0x2
	add	r2, r0, r1
	ldr	r1, [r2]
	cmp	r1, #0
	beq	.L_Balloc_3	@cond_branch
	ldr	r0, [r1]
	str	r0, [r2]
	b	.L_Balloc_4
.L_Balloc_3:
	mov	r5, #0x1
	LSL	r5, r6
	lsl	r2, r5, #0x2
	add	r2, r2, #0x14
	add	r0, r4, #0
	mov	r1, #0x1
	bl	_calloc_r
	add	r1, r0, #0
	cmp	r1, #0
	bne	.L_Balloc_5	@cond_branch
.L_Balloc_2:
	mov	r0, #0x0
	b	.L_Balloc_6
.L_Balloc_5:
	str	r6, [r1, #0x4]
	str	r5, [r1, #0x8]
.L_Balloc_4:
	mov	r0, #0x0
	str	r0, [r1, #0x10]
	str	r0, [r1, #0xc]
	add	r0, r1, #0
.L_Balloc_6:
	pop	{r4, r5, r6, pc}
	thumb_func_end _Balloc

	thumb_func_start _Bfree
_Bfree:
	add	r3, r0, #0
	add	r2, r1, #0
	cmp	r2, #0
	beq	.L_Bfree_1	@cond_branch
	ldr	r0, [r2, #0x4]
	ldr	r1, [r3, #0x4c]
	lsl	r0, r0, #0x2
	add	r0, r0, r1
	ldr	r1, [r0]
	str	r1, [r2]
	str	r2, [r0]
.L_Bfree_1:
	bx	lr
	thumb_func_end _Bfree

	thumb_func_start _multadd
_multadd:
	push	{r4, r5, r6, r7, lr}
	mov	r7, r9
	mov	r6, r8
	push	{r6, r7}
	mov	r9, r0
	add	r5, r1, #0
	add	r4, r2, #0
	mov	r8, r3
	ldr	r6, [r5, #0x10]
	add	r3, r5, #0
	add	r3, r3, #0x14
	mov	r7, #0x0
	ldr	r0, .L_multadd_4 @ 0x0
	mov	ip, r0
.L_multadd_1:
	ldr	r1, [r3]
	add	r0, r1, #0
	mov	r2, ip
	and	r0, r0, r2
	add	r2, r0, #0
	mul	r2, r2, r4
	add r2, r2, r8
	lsr	r1, r1, #0x10
	add	r0, r1, #0
	mul	r0, r0, r4
	lsr	r1, r2, #0x10
	add	r0, r0, r1
	lsr	r1, r0, #0x10
	mov	r8, r1
	lsl	r0, r0, #0x10
	mov	r1, ip
	and	r2, r2, r1
	add	r0, r0, r2
	stmia	r3!, {r0}
	add	r7, r7, #0x1
	cmp	r7, r6
	blt	.L_multadd_1	@cond_branch
	mov	r2, r8
	cmp	r2, #0
	beq	.L_multadd_2	@cond_branch
	ldr	r0, [r5, #0x8]
	cmp	r6, r0
	blt	.L_multadd_3	@cond_branch
	ldr	r1, [r5, #0x4]
	add	r1, r1, #0x1
	mov	r0, r9
	bl	_Balloc
	add	r4, r0, #0
	add	r0, r0, #0xc
	add	r1, r5, #0
	add	r1, r1, #0xc
	ldr	r2, [r5, #0x10]
	lsl	r2, r2, #0x2
	add	r2, r2, #0x8
	bl	memcpy
	mov	r0, r9
	add	r1, r5, #0
	bl	_Bfree
	add	r5, r4, #0
.L_multadd_3:
	lsl	r1, r6, #0x2
	add	r0, r5, #0
	add	r0, r0, #0x14
	add	r0, r0, r1
	mov	r1, r8
	str	r1, [r0]
	add	r6, r6, #0x1
	str	r6, [r5, #0x10]
.L_multadd_2:
	add	r0, r5, #0
	pop	{r3, r4}
	mov	r8, r3
	mov	r9, r4
	pop	{r4, r5, r6, r7, pc}
.L_multadd_5:
	.align	2, 0
.L_multadd_4:
	.word	0xffff
	thumb_func_end _multadd

	thumb_func_start _s2b
_s2b:
	push	{r4, r5, r6, r7, lr}
	mov	r7, r8
	push	{r7}
	add	r7, r0, #0
	add	r4, r1, #0
	add	r6, r2, #0
	mov	r8, r3
	mov	r0, r8
	add	r0, r0, #0x8
	mov	r1, #0x9
	bl	__divsi3
	mov	r1, #0x0
	mov	r2, #0x1
	cmp	r0, #0x1
	ble	.L_s2b_1	@cond_branch
.L_s2b_2:
	lsl	r2, r2, #0x1
	add	r1, r1, #0x1
	cmp	r0, r2
	bgt	.L_s2b_2	@cond_branch
.L_s2b_1:
	add	r0, r7, #0
	bl	_Balloc
	add	r1, r0, #0
	ldr	r0, [sp, #0x18]
	str	r0, [r1, #0x14]
	mov	r0, #0x1
	str	r0, [r1, #0x10]
	mov	r5, #0x9
	cmp	r6, #0x9
	ble	.L_s2b_3	@cond_branch
	add	r4, r4, #0x9
.L_s2b_4:
	ldrb	r3, [r4]
	sub	r3, r3, #0x30
	add	r4, r4, #0x1
	add	r0, r7, #0
	mov	r2, #0xa
	bl	_multadd
	add	r1, r0, #0
	add	r5, r5, #0x1
	cmp	r5, r6
	blt	.L_s2b_4	@cond_branch
	add	r4, r4, #0x1
	b	.L_s2b_5
.L_s2b_3:
	add	r4, r4, #0xa
.L_s2b_5:
	cmp	r5, r8
	bge	.L_s2b_6	@cond_branch
	mov	r0, r8
	sub	r5, r0, r5
.L_s2b_7:
	ldrb	r3, [r4]
	sub	r3, r3, #0x30
	add	r4, r4, #0x1
	add	r0, r7, #0
	mov	r2, #0xa
	bl	_multadd
	add	r1, r0, #0
	sub	r5, r5, #0x1
	cmp	r5, #0
	bne	.L_s2b_7	@cond_branch
.L_s2b_6:
	add	r0, r1, #0
	pop	{r3}
	mov	r8, r3
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end _s2b

	thumb_func_start _hi0bits
_hi0bits:
	add	r1, r0, #0
	mov	r2, #0x0
	ldr	r0, .L_hi0bits_8 @ 0x0
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_hi0bits_1	@cond_branch
	mov	r2, #0x10
	lsl	r1, r1, #0x10
.L_hi0bits_1:
	mov	r0, #0xff
	lsl	r0, r0, #0x18
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_hi0bits_2	@cond_branch
	add	r2, r2, #0x8
	lsl	r1, r1, #0x8
.L_hi0bits_2:
	mov	r0, #0xf0
	lsl	r0, r0, #0x18
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_hi0bits_3	@cond_branch
	add	r2, r2, #0x4
	lsl	r1, r1, #0x4
.L_hi0bits_3:
	mov	r0, #0xc0
	lsl	r0, r0, #0x18
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_hi0bits_4	@cond_branch
	add	r2, r2, #0x2
	lsl	r1, r1, #0x2
.L_hi0bits_4:
	cmp	r1, #0
	blt	.L_hi0bits_6	@cond_branch
	add	r2, r2, #0x1
	mov	r0, #0x80
	lsl	r0, r0, #0x17
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_hi0bits_6	@cond_branch
	mov	r0, #0x20
	b	.L_hi0bits_7
.L_hi0bits_9:
	.align	2, 0
.L_hi0bits_8:
	.word	0xffff0000
.L_hi0bits_6:
	add	r0, r2, #0
.L_hi0bits_7:
	bx	lr
	thumb_func_end _hi0bits

	thumb_func_start _lo0bits
_lo0bits:
	add	r3, r0, #0
	ldr	r1, [r3]
	mov	r0, #0x7
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_lo0bits_1	@cond_branch
	mov	r0, #0x1
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_lo0bits_2	@cond_branch
	mov	r0, #0x0
	b	.L_lo0bits_13
.L_lo0bits_2:
	mov	r0, #0x2
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L_lo0bits_4	@cond_branch
	lsr	r0, r1, #0x1
	str	r0, [r3]
	mov	r0, #0x1
	b	.L_lo0bits_13
.L_lo0bits_4:
	lsr	r0, r1, #0x2
	str	r0, [r3]
	mov	r0, #0x2
	b	.L_lo0bits_13
.L_lo0bits_1:
	mov	r2, #0x0
	ldr	r0, .L_lo0bits_14 @ 0x0
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_lo0bits_7	@cond_branch
	mov	r2, #0x10
	lsr	r1, r1, #0x10
.L_lo0bits_7:
	mov	r0, #0xff
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_lo0bits_8	@cond_branch
	add	r2, r2, #0x8
	lsr	r1, r1, #0x8
.L_lo0bits_8:
	mov	r0, #0xf
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_lo0bits_9	@cond_branch
	add	r2, r2, #0x4
	lsr	r1, r1, #0x4
.L_lo0bits_9:
	mov	r0, #0x3
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_lo0bits_10	@cond_branch
	add	r2, r2, #0x2
	lsr	r1, r1, #0x2
.L_lo0bits_10:
	mov	r0, #0x1
	and	r0, r0, r1
	cmp	r0, #0
	bne	.L_lo0bits_12	@cond_branch
	add	r2, r2, #0x1
	lsr	r1, r1, #0x1
	cmp	r1, #0
	bne	.L_lo0bits_12	@cond_branch
	mov	r0, #0x20
	b	.L_lo0bits_13
.L_lo0bits_15:
	.align	2, 0
.L_lo0bits_14:
	.word	0xffff
.L_lo0bits_12:
	str	r1, [r3]
	add	r0, r2, #0
.L_lo0bits_13:
	bx	lr
	thumb_func_end _lo0bits

	thumb_func_start _i2b
_i2b:
	push	{r4, lr}
	add	r4, r1, #0
	mov	r1, #0x1
	bl	_Balloc
	str	r4, [r0, #0x14]
	mov	r1, #0x1
	str	r1, [r0, #0x10]
	pop	{r4, pc}
	thumb_func_end _i2b

	thumb_func_start _multiply
_multiply:
	push	{r4, r5, r6, r7, lr}
	mov	r7, sl
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7}
	add	sp, sp, #0xffffffdc
	add	r3, r0, #0
	add	r4, r1, #0
	add	r5, r2, #0
	ldr	r1, [r4, #0x10]
	ldr	r0, [r5, #0x10]
	cmp	r1, r0
	bge	.L_multiply_1	@cond_branch
	str	r4, [sp]
	add	r4, r5, #0
	ldr	r5, [sp]
.L_multiply_1:
	ldr	r1, [r4, #0x4]
	ldr	r6, [r4, #0x10]
	ldr	r0, [r5, #0x10]
	mov	r8, r0
	mov	r2, r8
	add	r2, r6, r2
	str	r2, [sp, #0x4]
	ldr	r0, [r4, #0x8]
	cmp	r2, r0
	ble	.L_multiply_2	@cond_branch
	add	r1, r1, #0x1
.L_multiply_2:
	add	r0, r3, #0
	bl	_Balloc
	str	r0, [sp]
	add	r7, r0, #0
	add	r7, r7, #0x14
	ldr	r1, [sp, #0x4]
	lsl	r0, r1, #0x2
	add	r2, r7, r0
	str	r2, [sp, #0x8]
	str	r0, [sp, #0x18]
	add	r1, r4, #0
	add	r1, r1, #0x14
	lsl	r3, r6, #0x2
	add	r2, r5, #0
	add	r2, r2, #0x14
	mov	r5, r8
	lsl	r4, r5, #0x2
	ldr	r0, [sp, #0x8]
	cmp	r7, r0
	bcs	.L_multiply_3	@cond_branch
	mov	r0, #0x0
.L_multiply_4:
	stmia	r7!, {r0}
	ldr	r5, [sp, #0x8]
	cmp	r7, r5
	bcc	.L_multiply_4	@cond_branch
.L_multiply_3:
	str	r1, [sp, #0x8]
	add	r3, r1, r3
	str	r3, [sp, #0xc]
	mov	r8, r2
	add r4, r4, r8
	str	r4, [sp, #0x10]
	ldr	r0, [sp]
	add	r0, r0, #0x14
	mov	r9, r0
	mov	r1, r9
	str	r1, [sp, #0x20]
	cmp	r8, r4
	bcs	.L_multiply_5	@cond_branch
.L_multiply_10:
	mov	r2, r8
	ldmia	r2!, {r6}
	str	r2, [sp, #0x14]
	ldr	r0, .L_multiply_13 @ 0x0
	and	r6, r6, r0
	mov	r4, r9
	add	r4, r4, #0x4
	str	r4, [sp, #0x1c]
	cmp	r6, #0
	beq	.L_multiply_6	@cond_branch
	ldr	r7, [sp, #0x8]
	mov	r5, r9
	mov	r1, #0x0
	mov	ip, r1
	mov	sl, r0
.L_multiply_7:
	ldmia	r7!, {r3}
	add	r0, r3, #0
	mov	r2, sl
	and	r0, r0, r2
	add	r1, r0, #0
	mul	r1, r1, r6
	ldr	r2, [r5]
	add	r0, r2, #0
	mov	r4, sl
	and	r0, r0, r4
	add	r1, r1, r0
	mov	r0, ip
	add	r4, r1, r0
	lsr	r1, r4, #0x10
	lsr	r3, r3, #0x10
	add	r0, r3, #0
	mul	r0, r0, r6
	lsr	r2, r2, #0x10
	add	r0, r0, r2
	add	r2, r0, r1
	lsr	r0, r2, #0x10
	mov	ip, r0
	strh	r2, [r5]
	strh	r4, [r5, #0x2]
	add	r5, r5, #0x4
	ldr	r1, [sp, #0xc]
	cmp	r7, r1
	bcc	.L_multiply_7	@cond_branch
	str	r0, [r5]
.L_multiply_6:
	mov	r2, r8
	ldrh	r6, [r2, #0x2]
	cmp	r6, #0
	beq	.L_multiply_8	@cond_branch
	ldr	r7, [sp, #0x8]
	mov	r5, r9
	mov	r4, #0x0
	mov	ip, r4
	ldr	r2, [r5]
	ldr	r3, .L_multiply_13 @ 0x0
.L_multiply_9:
	ldmia	r7!, {r1}
	add	r0, r1, #0
	and	r0, r0, r3
	mul	r0, r0, r6
	ldrh	r4, [r5, #0x2]
	add	r4, r4, r0
	mov	r8, r4
	add r4, r4, ip
	lsr	r0, r4, #0x10
	mov	ip, r0
	strh	r4, [r5]
	strh	r2, [r5, #0x2]
	add	r5, r5, #0x4
	lsr	r1, r1, #0x10
	mul	r1, r1, r6
	ldr	r0, [r5]
	and	r0, r0, r3
	add	r1, r1, r0
	mov	r4, ip
	add	r2, r1, r4
	lsr	r0, r2, #0x10
	mov	ip, r0
	ldr	r1, [sp, #0xc]
	cmp	r7, r1
	bcc	.L_multiply_9	@cond_branch
	str	r2, [r5]
.L_multiply_8:
	ldr	r2, [sp, #0x14]
	mov	r8, r2
	ldr	r4, [sp, #0x1c]
	mov	r9, r4
	ldr	r5, [sp, #0x10]
	cmp	r8, r5
	bcc	.L_multiply_10	@cond_branch
.L_multiply_5:
	ldr	r0, [sp, #0x20]
	ldr	r1, [sp, #0x18]
	add	r5, r0, r1
	ldr	r2, [sp, #0x4]
	cmp	r2, #0
	ble	.L_multiply_15	@cond_branch
	b	.L_multiply_12
.L_multiply_14:
	.align	2, 0
.L_multiply_13:
	.word	0xffff
.L_multiply_16:
	ldr	r4, [sp, #0x4]
	sub	r4, r4, #0x1
	str	r4, [sp, #0x4]
	cmp	r4, #0
	ble	.L_multiply_15	@cond_branch
.L_multiply_12:
	sub	r5, r5, #0x4
	ldr	r0, [r5]
	cmp	r0, #0
	beq	.L_multiply_16	@cond_branch
.L_multiply_15:
	ldr	r5, [sp, #0x4]
	ldr	r0, [sp]
	str	r5, [r0, #0x10]
	ldr	r0, [sp]
	add	sp, sp, #0x24
	pop	{r3, r4, r5}
	mov	r8, r3
	mov	r9, r4
	mov	sl, r5
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end _multiply

	thumb_func_start _pow5mult
_pow5mult:
	push	{r4, r5, r6, r7, lr}
	mov	r7, r8
	push	{r7}
	mov	r8, r0
	add	r7, r1, #0
	add	r6, r2, #0
	mov	r1, #0x3
	and	r1, r1, r6
	cmp	r1, #0
	beq	.L_pow5mult_1	@cond_branch
	ldr	r0, .L_pow5mult_5 @ Data3+0xd0
	sub	r1, r1, #0x1
	lsl	r1, r1, #0x2
	add	r1, r1, r0
	ldr	r2, [r1]
	mov	r0, r8
	add	r1, r7, #0
	mov	r3, #0x0
	bl	_multadd
	add	r7, r0, #0
.L_pow5mult_1:
	asr	r6, r6, #0x2
	cmp	r6, #0
	beq	.L_pow5mult_2	@cond_branch
	mov	r0, r8
	ldr	r5, [r0, #0x48]
	add	r4, r5, #0
	cmp	r5, #0
	bne	.L_pow5mult_4	@cond_branch
	ldr	r1, .L_pow5mult_5 + 4 @ 0x0
	bl	_i2b
	mov	r1, r8
	str	r0, [r1, #0x48]
	add	r5, r0, #0
	str	r4, [r5]
	b	.L_pow5mult_4
.L_pow5mult_6:
	.align	2, 0
.L_pow5mult_5:
	.word	Data3+0xd0
	.word	0x271
.L_pow5mult_9:
	ldr	r0, [r5]
	add	r4, r0, #0
	cmp	r0, #0
	bne	.L_pow5mult_7	@cond_branch
	mov	r0, r8
	add	r1, r5, #0
	add	r2, r5, #0
	bl	_multiply
	str	r0, [r5]
	str	r4, [r0]
.L_pow5mult_7:
	add	r5, r0, #0
.L_pow5mult_4:
	mov	r0, #0x1
	and	r0, r0, r6
	cmp	r0, #0
	beq	.L_pow5mult_8	@cond_branch
	mov	r0, r8
	add	r1, r7, #0
	add	r2, r5, #0
	bl	_multiply
	add	r4, r0, #0
	mov	r0, r8
	add	r1, r7, #0
	bl	_Bfree
	add	r7, r4, #0
.L_pow5mult_8:
	asr	r6, r6, #0x1
	cmp	r6, #0
	bne	.L_pow5mult_9	@cond_branch
.L_pow5mult_2:
	add	r0, r7, #0
	pop	{r3}
	mov	r8, r3
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end _pow5mult

	thumb_func_start _lshift
_lshift:
	push	{r4, r5, r6, r7, lr}
	mov	r7, sl
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7}
	mov	sl, r0
	mov	r8, r1
	add	r5, r2, #0
	asr	r6, r5, #0x5
	ldr	r1, [r1, #0x4]
	mov	r2, r8
	ldr	r0, [r2, #0x10]
	add	r0, r6, r0
	add	r7, r0, #1
	ldr	r2, [r2, #0x8]
	cmp	r7, r2
	ble	.L_lshift_1	@cond_branch
.L_lshift_2:
	add	r1, r1, #0x1
	lsl	r2, r2, #0x1
	cmp	r7, r2
	bgt	.L_lshift_2	@cond_branch
.L_lshift_1:
	mov	r0, sl
	bl	_Balloc
	mov	r9, r0
	mov	r4, r9
	add	r4, r4, #0x14
	mov	r0, r8
	add	r0, r0, #0x14
	cmp	r6, #0
	ble	.L_lshift_3	@cond_branch
	mov	r1, #0x0
	add	r2, r6, #0
.L_lshift_4:
	stmia	r4!, {r1}
	sub	r2, r2, #0x1
	cmp	r2, #0
	bne	.L_lshift_4	@cond_branch
.L_lshift_3:
	add	r3, r0, #0
	mov	r1, r8
	ldr	r0, [r1, #0x10]
	lsl	r0, r0, #0x2
	add	r6, r3, r0
	mov	r0, #0x1f
	and	r5, r5, r0
	cmp	r5, #0
	beq	.L_lshift_9	@cond_branch
	mov	r0, #0x20
	sub	r1, r0, r5
	mov	r2, #0x0
.L_lshift_6:
	ldr	r0, [r3]
	LSL	r0, r5
	orr	r0, r0, r2
	stmia	r4!, {r0}
	ldmia	r3!, {r2}
	LSR	r2, r1
	cmp	r3, r6
	bcc	.L_lshift_6	@cond_branch
	str	r2, [r4]
	cmp	r2, #0
	beq	.L_lshift_8	@cond_branch
	add	r7, r7, #0x1
	b	.L_lshift_8
.L_lshift_9:
	ldmia	r3!, {r0}
	stmia	r4!, {r0}
	cmp	r3, r6
	bcc	.L_lshift_9	@cond_branch
.L_lshift_8:
	sub	r0, r7, #1
	mov	r2, r9
	str	r0, [r2, #0x10]
	mov	r0, sl
	mov	r1, r8
	bl	_Bfree
	mov	r0, r9
	pop	{r3, r4, r5}
	mov	r8, r3
	mov	r9, r4
	mov	sl, r5
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end _lshift

	thumb_func_start __mcmp
__mcmp:
	push	{r4, r5, lr}
	add	r2, r0, #0
	add	r5, r1, #0
	ldr	r0, [r2, #0x10]
	ldr	r1, [r5, #0x10]
	sub	r0, r0, r1
	cmp	r0, #0
	bne	.L__mcmp_4	@cond_branch
	add	r4, r2, #0
	add	r4, r4, #0x14
	lsl	r1, r1, #0x2
	add	r3, r4, r1
	add	r0, r5, #0
	add	r0, r0, #0x14
	add	r1, r0, r1
.L__mcmp_5:
	sub	r3, r3, #0x4
	sub	r1, r1, #0x4
	ldr	r0, [r3]
	ldr	r2, [r1]
	cmp	r0, r2
	beq	.L__mcmp_2	@cond_branch
	mov	r1, #0x1
	cmp	r0, r2
	bcs	.L__mcmp_3	@cond_branch
	sub	r1, r1, #0x2
.L__mcmp_3:
	add	r0, r1, #0
	b	.L__mcmp_4
.L__mcmp_2:
	cmp	r3, r4
	bhi	.L__mcmp_5	@cond_branch
	mov	r0, #0x0
.L__mcmp_4:
	pop	{r4, r5, pc}
	thumb_func_end __mcmp

	thumb_func_start __mdiff
__mdiff:
	push	{r4, r5, r6, r7, lr}
	mov	r7, sl
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7}
	add	sp, sp, #0xfffffff8
	add	r6, r0, #0
	add	r5, r1, #0
	mov	r8, r2
	add	r0, r5, #0
	mov	r1, r8
	bl	__mcmp
	add	r4, r0, #0
	cmp	r4, #0
	bne	.L__mdiff_1	@cond_branch
	add	r0, r6, #0
	mov	r1, #0x0
	bl	_Balloc
	add	r7, r0, #0
	mov	r0, #0x1
	str	r0, [r7, #0x10]
	str	r4, [r7, #0x14]
	b	.L__mdiff_2
.L__mdiff_1:
	cmp	r4, #0
	bge	.L__mdiff_3	@cond_branch
	add	r7, r5, #0
	mov	r5, r8
	mov	r8, r7
	mov	r4, #0x1
	b	.L__mdiff_4
.L__mdiff_3:
	mov	r4, #0x0
.L__mdiff_4:
	ldr	r1, [r5, #0x4]
	add	r0, r6, #0
	bl	_Balloc
	add	r7, r0, #0
	str	r4, [r7, #0xc]
	ldr	r0, [r5, #0x10]
	mov	r9, r0
	add	r6, r5, #0
	add	r6, r6, #0x14
	lsl	r0, r0, #0x2
	add	r0, r0, r6
	mov	sl, r0
	mov	r1, r8
	ldr	r0, [r1, #0x10]
	mov	r3, #0x14
	add r3, r3, r8
	mov	ip, r3
	lsl	r0, r0, #0x2
	add r0, r0, ip
	str	r0, [sp]
	add	r4, r7, #0
	add	r4, r4, #0x14
	mov	r5, #0x0
	ldr	r0, .L__mdiff_9 @ 0x0
	mov	r8, r0
.L__mdiff_5:
	ldmia	r6!, {r1}
	str	r1, [sp, #0x4]
	mov	r3, r8
	and	r1, r1, r3
	mov	r0, ip
	add	r0, r0, #0x4
	mov	ip, r0
	sub	r0, r0, #0x4
	ldmia	r0!, {r2}
	add	r0, r2, #0
	and	r0, r0, r3
	sub	r1, r1, r0
	add	r0, r1, r5
	asr	r5, r0, #0x10
	ldr	r1, [sp, #0x4]
	lsr	r3, r1, #0x10
	lsr	r2, r2, #0x10
	sub	r3, r3, r2
	add	r1, r3, r5
	asr	r5, r1, #0x10
	strh	r1, [r4]
	strh	r0, [r4, #0x2]
	add	r4, r4, #0x4
	ldr	r3, [sp]
	cmp	ip, r3
	bcc	.L__mdiff_5	@cond_branch
	cmp	r6, sl
	bcs	.L__mdiff_8	@cond_branch
	ldr	r2, .L__mdiff_9 @ 0x0
.L__mdiff_7:
	ldmia	r6!, {r1}
	add	r0, r1, #0
	and	r0, r0, r2
	add	r0, r0, r5
	asr	r5, r0, #0x10
	lsr	r1, r1, #0x10
	add	r1, r1, r5
	asr	r5, r1, #0x10
	strh	r1, [r4]
	strh	r0, [r4, #0x2]
	add	r4, r4, #0x4
	cmp	r6, sl
	bcc	.L__mdiff_7	@cond_branch
	b	.L__mdiff_8
.L__mdiff_10:
	.align	2, 0
.L__mdiff_9:
	.word	0xffff
.L__mdiff_11:
	mov	r0, #0x1
	neg	r0, r0
	add r9, r9, r0
.L__mdiff_8:
	sub	r4, r4, #0x4
	ldr	r0, [r4]
	cmp	r0, #0
	beq	.L__mdiff_11	@cond_branch
	mov	r1, r9
	str	r1, [r7, #0x10]
.L__mdiff_2:
	add	r0, r7, #0
	add	sp, sp, #0x8
	pop	{r3, r4, r5}
	mov	r8, r3
	mov	r9, r4
	mov	sl, r5
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end __mdiff

	thumb_func_start _ulp
_ulp:
	push	{r4, lr}
	ldr	r2, .L_ulp_3 @ 0x0
	and	r2, r2, r0
	ldr	r0, .L_ulp_3 + 4 @ 0x0
	add	r2, r2, r0
	cmp	r2, #0
	ble	.L_ulp_1	@cond_branch
	add	r3, r2, #0
	mov	r4, #0x0
	b	.L_ulp_6
.L_ulp_4:
	.align	2, 0
.L_ulp_3:
	.word	0x7ff00000
	.word	0xfcc00000
.L_ulp_1:
	neg	r0, r2
	asr	r2, r0, #0x14
	cmp	r2, #0x13
	bgt	.L_ulp_5	@cond_branch
	mov	r0, #0x80
	lsl	r0, r0, #0xc
	add	r3, r0, #0
	ASR	r3, r2
	mov	r4, #0x0
	b	.L_ulp_6
.L_ulp_5:
	mov	r3, #0x0
	sub	r2, r2, #0x14
	cmp	r2, #0x1e
	bgt	.L_ulp_7	@cond_branch
	mov	r0, #0x1f
	sub	r0, r0, r2
	mov	r1, #0x1
	LSL	r1, r0
	b	.L_ulp_8
.L_ulp_7:
	mov	r1, #0x1
.L_ulp_8:
	add	r4, r1, #0
.L_ulp_6:
	add	r1, r4, #0
	add	r0, r3, #0
	pop	{r4, pc}
	thumb_func_end _ulp

	thumb_func_start _b2d
_b2d:
	push	{r4, r5, r6, r7, lr}
	mov	r7, r8
	push	{r7}
	add	sp, sp, #0xfffffffc
	add	r4, r1, #0
	mov	r1, #0x14
	add	r1, r1, r0
	mov	r8, r1
	ldr	r0, [r0, #0x10]
	lsl	r0, r0, #0x2
	add	r5, r1, r0
	sub	r5, r5, #0x4
	ldr	r2, [r5]
	add	r0, r2, #0
	str	r2, [sp]
	bl	_hi0bits
	add	r3, r0, #0
	mov	r0, #0x20
	sub	r0, r0, r3
	str	r0, [r4]
	ldr	r2, [sp]
	cmp	r3, #0xa
	bgt	.L_b2d_1	@cond_branch
	mov	r0, #0xb
	sub	r0, r0, r3
	add	r1, r2, #0
	LSR	r1, r0
	ldr	r0, .L_b2d_4 @ 0x0
	add	r6, r1, #0
	orr	r6, r6, r0
	cmp	r5, r8
	bls	.L_b2d_2	@cond_branch
	sub	r5, r5, #0x4
	ldr	r1, [r5]
	b	.L_b2d_3
.L_b2d_5:
	.align	2, 0
.L_b2d_4:
	.word	0x3ff00000
.L_b2d_2:
	mov	r1, #0x0
.L_b2d_3:
	add	r0, r3, #0
	add	r0, r0, #0x15
	LSL	r2, r0
	mov	r0, #0xb
	sub	r0, r0, r3
	LSR	r1, r0
	add	r7, r2, #0
	orr	r7, r7, r1
	b	.L_b2d_14
.L_b2d_1:
	cmp	r5, r8
	bls	.L_b2d_7	@cond_branch
	sub	r5, r5, #0x4
	ldr	r4, [r5]
	b	.L_b2d_8
.L_b2d_7:
	mov	r4, #0x0
.L_b2d_8:
	sub	r3, r3, #0xb
	cmp	r3, #0
	beq	.L_b2d_9	@cond_branch
	LSL	r2, r3
	mov	r0, #0x20
	sub	r0, r0, r3
	add	r1, r4, #0
	LSR	r1, r0
	ldr	r0, .L_b2d_12 @ 0x0
	orr	r1, r1, r0
	add	r6, r2, #0
	orr	r6, r6, r1
	cmp	r5, r8
	bls	.L_b2d_10	@cond_branch
	sub	r5, r5, #0x4
	ldr	r2, [r5]
	b	.L_b2d_11
.L_b2d_13:
	.align	2, 0
.L_b2d_12:
	.word	0x3ff00000
.L_b2d_10:
	mov	r2, #0x0
.L_b2d_11:
	LSL	r4, r3
	mov	r0, #0x20
	sub	r0, r0, r3
	LSR	r2, r0
	add	r7, r4, #0
	orr	r7, r7, r2
	b	.L_b2d_14
.L_b2d_9:
	ldr	r0, .L_b2d_15 @ 0x0
	add	r6, r2, #0
	orr	r6, r6, r0
	add	r7, r4, #0
.L_b2d_14:
	add	r1, r7, #0
	add	r0, r6, #0
	add	sp, sp, #0x4
	pop	{r3}
	mov	r8, r3
	pop	{r4, r5, r6, r7, pc}
.L_b2d_16:
	.align	2, 0
.L_b2d_15:
	.word	0x3ff00000
	thumb_func_end _b2d

	thumb_func_start _d2b
_d2b:
	push	{r4, r5, r6, r7, lr}
	mov	r7, sl
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7}
	add	sp, sp, #0xfffffff8
	mov	r9, r3
	ldr	r3, [sp, #0x28]
	mov	sl, r3
	add	r5, r2, #0
	add	r4, r1, #0
	mov	r1, #0x1
	bl	_Balloc
	add	r6, r0, #0
	mov	r0, #0x14
	add	r0, r0, r6
	mov	r8, r0
	ldr	r2, .L_d2b_5 @ 0x0
	add	r1, r4, #0
	and	r2, r2, r1
	str	r2, [sp, #0x4]
	ldr	r0, .L_d2b_5 + 4 @ 0x0
	and	r4, r4, r0
	lsr	r7, r4, #0x14
	cmp	r7, #0
	beq	.L_d2b_1	@cond_branch
	mov	r0, #0x80
	lsl	r0, r0, #0xd
	orr	r0, r0, r2
	str	r0, [sp, #0x4]
.L_d2b_1:
	str	r5, [sp]
	cmp	r5, #0
	beq	.L_d2b_2	@cond_branch
	mov	r0, sp
	bl	_lo0bits
	add	r2, r0, #0
	cmp	r2, #0
	beq	.L_d2b_3	@cond_branch
	mov	r0, #0x20
	sub	r0, r0, r2
	ldr	r1, [sp, #0x4]
	LSL	r1, r0
	ldr	r0, [sp]
	orr	r0, r0, r1
	str	r0, [r6, #0x14]
	ldr	r0, [sp, #0x4]
	LSR	r0, r2
	str	r0, [sp, #0x4]
	b	.L_d2b_4
.L_d2b_6:
	.align	2, 0
.L_d2b_5:
	.word	0xfffff
	.word	0x7fffffff
.L_d2b_3:
	ldr	r0, [sp]
	str	r0, [r6, #0x14]
.L_d2b_4:
	ldr	r0, [sp, #0x4]
	mov	r1, r8
	str	r0, [r1, #0x4]
	mov	r1, #0x1
	cmp	r0, #0
	beq	.L_d2b_7	@cond_branch
	mov	r1, #0x2
.L_d2b_7:
	str	r1, [r6, #0x10]
	add	r4, r1, #0
	b	.L_d2b_8
.L_d2b_2:
	add	r0, sp, #0x4
	bl	_lo0bits
	add	r2, r0, #0
	ldr	r0, [sp, #0x4]
	str	r0, [r6, #0x14]
	mov	r0, #0x1
	str	r0, [r6, #0x10]
	mov	r4, #0x1
	add	r2, r2, #0x20
.L_d2b_8:
	cmp	r7, #0
	beq	.L_d2b_9	@cond_branch
	ldr	r3, .L_d2b_11 @ 0x0
	add	r0, r2, r3
	add	r0, r7, r0
	mov	r1, r9
	str	r0, [r1]
	mov	r0, #0x35
	sub	r0, r0, r2
	mov	r3, sl
	str	r0, [r3]
	b	.L_d2b_10
.L_d2b_12:
	.align	2, 0
.L_d2b_11:
	.word	0xfffffbcd
.L_d2b_9:
	ldr	r1, .L_d2b_13 @ 0x0
	add	r0, r2, r1
	mov	r3, r9
	str	r0, [r3]
	lsl	r0, r4, #0x2
	add r0, r0, r8
	sub	r0, r0, #0x4
	ldr	r0, [r0]
	bl	_hi0bits
	lsl	r1, r4, #0x5
	sub	r1, r1, r0
	mov	r0, sl
	str	r1, [r0]
.L_d2b_10:
	add	r0, r6, #0
	add	sp, sp, #0x8
	pop	{r3, r4, r5}
	mov	r8, r3
	mov	r9, r4
	mov	sl, r5
	pop	{r4, r5, r6, r7, pc}
.L_d2b_14:
	.align	2, 0
.L_d2b_13:
	.word	0xfffffbce
	thumb_func_end _d2b

	thumb_func_start _ratio
_ratio:
	push	{r4, r5, r6, r7, lr}
	add	sp, sp, #0xfffffff0
	add	r4, r0, #0
	add	r5, r1, #0
	mov	r1, sp
	bl	_b2d
	str	r0, [sp, #0x8]
	str	r1, [sp, #0xc]
	add	r1, sp, #0x4
	add	r0, r5, #0
	bl	_b2d
	add	r7, r1, #0
	add	r6, r0, #0
	ldr	r2, [sp]
	ldr	r0, [sp, #0x4]
	sub	r2, r2, r0
	ldr	r0, [r4, #0x10]
	ldr	r1, [r5, #0x10]
	sub	r0, r0, r1
	lsl	r0, r0, #0x5
	add	r0, r2, r0
	cmp	r0, #0
	ble	.L_ratio_1	@cond_branch
	lsl	r0, r0, #0x14
	ldr	r1, [sp, #0x8]
	add	r0, r1, r0
	str	r0, [sp, #0x8]
	b	.L_ratio_2
.L_ratio_1:
	lsl	r0, r0, #0x14
	sub	r6, r6, r0
.L_ratio_2:
	ldr	r0, [sp, #0x8]
	ldr	r1, [sp, #0xc]
	add	r3, r7, #0
	add	r2, r6, #0
	bl	__divdf3
	add	sp, sp, #0x10
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end _ratio

	thumb_func_start _mprec_log10
_mprec_log10:
	push	{r4, lr}
	add	r4, r0, #0
	ldr	r1, .L_mprec_log10_3 + 4 @ 0x0
	ldr	r0, .L_mprec_log10_3 @ 0x0
	cmp	r4, #0x17
	bgt	.L_mprec_log10_1	@cond_branch
	ldr	r0, .L_mprec_log10_3 + 8 @ Data3+0xdc
	lsl	r1, r4, #0x3
	add	r1, r1, r0
	ldr	r0, [r1]
	ldr	r1, [r1, #0x4]
	b	.L_mprec_log10_5
.L_mprec_log10_4:
	.align	2, 0
.L_mprec_log10_3:
	.word	0x3ff00000
	.word	0x0
	.word	Data3+0xdc
.L_mprec_log10_1:
	cmp	r4, #0
	ble	.L_mprec_log10_5	@cond_branch
.L_mprec_log10_6:
	ldr	r3, .L_mprec_log10_7 + 4 @ 0x0
	ldr	r2, .L_mprec_log10_7 @ 0x0
	bl	__muldf3
	sub	r4, r4, #0x1
	cmp	r4, #0
	bgt	.L_mprec_log10_6	@cond_branch
.L_mprec_log10_5:
	pop	{r4, pc}
.L_mprec_log10_8:
	.align	2, 0
.L_mprec_log10_7:
	.word	0x40240000
	.word	0x0
	thumb_func_end _mprec_log10

	thumb_func_start isinf
isinf:
	ldr	r3, .Lisinf_1 @ 0x0
	and	r3, r3, r0
	neg	r2, r1
	orr	r2, r2, r1
	lsr	r2, r2, #0x1f
	orr	r3, r3, r2
	ldr	r0, .Lisinf_1 + 4 @ 0x0
	sub	r3, r0, r3
	neg	r0, r3
	orr	r3, r3, r0
	lsr	r3, r3, #0x1f
	mov	r0, #0x1
	sub	r0, r0, r3
	bx	lr
.Lisinf_2:
	.align	2, 0
.Lisinf_1:
	.word	0x7fffffff
	.word	0x7ff00000
	thumb_func_end isinf

	thumb_func_start isnan
isnan:
	ldr	r3, .Lisnan_1 @ 0x0
	and	r3, r3, r0
	neg	r2, r1
	orr	r2, r2, r1
	lsr	r2, r2, #0x1f
	orr	r3, r3, r2
	ldr	r0, .Lisnan_1 + 4 @ 0x0
	sub	r3, r0, r3
	lsr	r3, r3, #0x1f
	add	r0, r3, #0
	bx	lr
.Lisnan_2:
	.align	2, 0
.Lisnan_1:
	.word	0x7fffffff
	.word	0x7ff00000
	thumb_func_end isnan

	thumb_func_start _sbrk_r
_sbrk_r:
	push	{r4, r5, lr}
	add	r5, r0, #0
	add	r0, r1, #0
	ldr	r4, .L_sbrk_r_3 @ 0x0
	mov	r1, #0x0
	str	r1, [r4]
	bl	_sbrk
	add	r1, r0, #0
	mov	r0, #0x1
	neg	r0, r0
	cmp	r1, r0
	bne	.L_sbrk_r_2	@cond_branch
	ldr	r0, [r4]
	cmp	r0, #0
	beq	.L_sbrk_r_2	@cond_branch
	str	r0, [r5]
.L_sbrk_r_2:
	add	r0, r1, #0
	pop	{r4, r5, pc}
.L_sbrk_r_4:
	.align	2, 0
.L_sbrk_r_3:
	.word	0x300747c
	thumb_func_end _sbrk_r

	thumb_func_start __sread
__sread:
	push	{r4, r5, lr}
	add	r5, r0, #0
	add	r4, r1, #0
	add	r3, r2, #0
	ldr	r0, [r5, #0x54]
	mov	r2, #0xe
	ldsh	r1, [r5, r2]
	add	r2, r4, #0
	bl	_read_r
	add	r1, r0, #0
	cmp	r1, #0
	blt	.L__sread_1	@cond_branch
	ldr	r0, [r5, #0x50]
	add	r0, r0, r1
	str	r0, [r5, #0x50]
	b	.L__sread_2
.L__sread_1:
	ldr	r0, .L__sread_3 @ 0x0
	ldrh	r2, [r5, #0xc]
	and	r0, r0, r2
	strh	r0, [r5, #0xc]
.L__sread_2:
	add	r0, r1, #0
	pop	{r4, r5, pc}
.L__sread_4:
	.align	2, 0
.L__sread_3:
	.word	0xffffefff
	thumb_func_end __sread

	thumb_func_start __swrite
__swrite:
	push	{r4, r5, r6, lr}
	add	r4, r0, #0
	add	r5, r1, #0
	add	r6, r2, #0
	mov	r0, #0x80
	lsl	r0, r0, #0x1
	ldrh	r1, [r4, #0xc]
	and	r0, r0, r1
	cmp	r0, #0
	beq	.L__swrite_1	@cond_branch
	ldr	r0, [r4, #0x54]
	mov	r2, #0xe
	ldsh	r1, [r4, r2]
	mov	r2, #0x0
	mov	r3, #0x2
	bl	_lseek_r
.L__swrite_1:
	ldr	r0, .L__swrite_2 @ 0x0
	ldrh	r1, [r4, #0xc]
	and	r0, r0, r1
	strh	r0, [r4, #0xc]
	ldr	r0, [r4, #0x54]
	mov	r2, #0xe
	ldsh	r1, [r4, r2]
	add	r2, r5, #0
	add	r3, r6, #0
	bl	_write_r
	pop	{r4, r5, r6, pc}
.L__swrite_3:
	.align	2, 0
.L__swrite_2:
	.word	0xffffefff
	thumb_func_end __swrite

	thumb_func_start __sseek
__sseek:
	push	{r4, r5, lr}
	add	r5, r0, #0
	add	r4, r1, #0
	add	r3, r2, #0
	ldr	r0, [r5, #0x54]
	mov	r2, #0xe
	ldsh	r1, [r5, r2]
	add	r2, r4, #0
	bl	_lseek_r
	add	r1, r0, #0
	mov	r0, #0x1
	neg	r0, r0
	cmp	r1, r0
	bne	.L__sseek_1	@cond_branch
	ldr	r0, .L__sseek_3 @ 0x0
	ldrh	r2, [r5, #0xc]
	and	r0, r0, r2
	strh	r0, [r5, #0xc]
	b	.L__sseek_2
.L__sseek_4:
	.align	2, 0
.L__sseek_3:
	.word	0xffffefff
.L__sseek_1:
	mov	r2, #0x80
	lsl	r2, r2, #0x5
	add	r0, r2, #0
	ldrh	r2, [r5, #0xc]
	orr	r0, r0, r2
	strh	r0, [r5, #0xc]
	str	r1, [r5, #0x50]
.L__sseek_2:
	add	r0, r1, #0
	pop	{r4, r5, pc}
	thumb_func_end __sseek

	thumb_func_start __sclose
__sclose:
	push	{lr}
	ldr	r2, [r0, #0x54]
	mov	r3, #0xe
	ldsh	r1, [r0, r3]
	add	r0, r2, #0
	bl	_close_r
	pop	{pc}
	thumb_func_end __sclose

	thumb_func_start strlen
strlen:
	push	{r4, r5, lr}
	add	r1, r0, #0
	add	r5, r1, #0
	mov	r0, #0x3
	and	r0, r0, r1
	cmp	r0, #0
	bne	.Lstrlen_6	@cond_branch
	add	r2, r1, #0
	ldr	r1, [r2]
	ldr	r4, .Lstrlen_3 @ 0x0
	add	r0, r1, r4
	BIC	r0, r1
	ldr	r3, .Lstrlen_3 + 4 @ 0x0
	b	.Lstrlen_2
.Lstrlen_4:
	.align	2, 0
.Lstrlen_3:
	.word	0xfefefeff
	.word	0x80808080
.Lstrlen_5:
	add	r2, r2, #0x4
	ldr	r1, [r2]
	add	r0, r1, r4
	BIC	r0, r1
.Lstrlen_2:
	and	r0, r0, r3
	cmp	r0, #0
	beq	.Lstrlen_5	@cond_branch
	add	r1, r2, #0
	b	.Lstrlen_6
.Lstrlen_7:
	add	r1, r1, #0x1
.Lstrlen_6:
	ldrb	r0, [r1]
	cmp	r0, #0
	bne	.Lstrlen_7	@cond_branch
	sub	r0, r1, r5
	pop	{r4, r5, pc}
	thumb_func_end strlen

	thumb_func_start findslot
findslot:
	add	r3, r0, #0
	mov	r1, #0x0
	ldr	r2, .Lfindslot_2 @ 0x0
	b	.Lfindslot_1
.Lfindslot_3:
	.align	2, 0
.Lfindslot_2:
	.word	0x3002840
.Lfindslot_5:
	add	r2, r2, #0x8
	add	r1, r1, #0x1
	cmp	r1, #0x13
	bgt	.Lfindslot_4	@cond_branch
.Lfindslot_1:
	ldr	r0, [r2]
	cmp	r0, r3
	bne	.Lfindslot_5	@cond_branch
.Lfindslot_4:
	add	r0, r1, #0
	bx	lr
	thumb_func_end findslot

	thumb_func_start remap_handle
remap_handle:
	add	r2, r0, #0
	ldr	r0, .Lremap_handle_3 @ 0x0
	ldr	r1, [r0]
	ldr	r0, [r1, #0x4]
	mov	r3, #0xe
	ldsh	r0, [r0, r3]
	cmp	r2, r0
	bne	.Lremap_handle_1	@cond_branch
	ldr	r0, .Lremap_handle_3 + 4 @ 0x0
	b	.Lremap_handle_6
.Lremap_handle_4:
	.align	2, 0
.Lremap_handle_3:
	.word	0x203f754
	.word	0x3002834
.Lremap_handle_1:
	ldr	r0, [r1, #0x8]
	mov	r3, #0xe
	ldsh	r0, [r0, r3]
	cmp	r2, r0
	bne	.Lremap_handle_5	@cond_branch
	ldr	r0, .Lremap_handle_7 @ 0x0
	b	.Lremap_handle_6
.Lremap_handle_8:
	.align	2, 0
.Lremap_handle_7:
	.word	0x3002838
.Lremap_handle_5:
	ldr	r0, [r1, #0xc]
	mov	r1, #0xe
	ldsh	r0, [r0, r1]
	cmp	r2, r0
	beq	.Lremap_handle_9	@cond_branch
	add	r0, r2, #0
	sub	r0, r0, #0x20
	b	.Lremap_handle_10
.Lremap_handle_9:
	ldr	r0, .Lremap_handle_11 @ 0x0
.Lremap_handle_6:
	ldr	r0, [r0]
.Lremap_handle_10:
	bx	lr
.Lremap_handle_12:
	.align	2, 0
.Lremap_handle_11:
	.word	0x300283c
	thumb_func_end remap_handle

	thumb_func_start initialise_monitor_handles
initialise_monitor_handles:
	push	{r4, r5, lr}
	add	sp, sp, #0xfffffff4
	ldr	r4, .Linitialise_monitor_handles_2 @ Data3+0x1f4
	str	r4, [sp]
	mov	r3, #0x3
	str	r3, [sp, #0x8]
	mov	r0, #0x0
	str	r0, [sp, #0x4]
	mov	r5, #0x1
	add	r0, r5, #0
	mov	r1, sp
	swi	#0xab
	add	r2, r0, #0
	ldr	r5, .Linitialise_monitor_handles_2 + 4 @ 0x0
	str	r2, [r5]
	str	r4, [sp]
	str	r3, [sp, #0x8]
	mov	r0, #0x4
	str	r0, [sp, #0x4]
	ldr	r3, .Linitialise_monitor_handles_2 + 8 @ 0x0
	mov	r4, #0x1
	add	r0, r4, #0
	mov	r1, sp
	swi	#0xab
	add	r2, r0, #0
	ldr	r0, .Linitialise_monitor_handles_2 + 12 @ 0x0
	str	r2, [r0]
	str	r2, [r3]
	ldr	r2, .Linitialise_monitor_handles_2 + 16 @ 0x0
	add	r1, r2, #0
	sub	r4, r4, #0x2
	add	r0, r2, #0
	add	r0, r0, #0x98
.Linitialise_monitor_handles_1:
	str	r4, [r0]
	sub	r0, r0, #0x8
	cmp	r0, r1
	bge	.Linitialise_monitor_handles_1	@cond_branch
	mov	r0, #0x0
	ldr	r1, [r5]
	str	r1, [r2]
	str	r0, [r2, #0x4]
	ldr	r1, [r3]
	str	r1, [r2, #0x8]
	str	r0, [r2, #0xc]
	add	sp, sp, #0xc
	pop	{r4, r5, pc}
.Linitialise_monitor_handles_3:
	.align	2, 0
.Linitialise_monitor_handles_2:
	.word	Data3+0x1f4
	.word	0x3002834
	.word	0x3002838
	.word	0x300283c
	.word	0x3002840
	thumb_func_end initialise_monitor_handles

	thumb_func_start get_errno
get_errno:
	push	{r4, lr}
	mov	r3, #0x13
	mov	r4, #0x0
	add	r0, r3, #0
	add	r1, r4, #0
	swi	#0xab
	add	r2, r0, #0
	add	r0, r2, #0
	pop	{r4, pc}
	thumb_func_end get_errno

	thumb_func_start error
error:
	push	{r4, r5, lr}
	add	r5, r0, #0
	bl	__errno
	add	r4, r0, #0
	bl	get_errno
	str	r0, [r4]
	add	r0, r5, #0
	pop	{r4, r5, pc}
	thumb_func_end error

	thumb_func_start wrap
wrap:
	push	{lr}
	add	r1, r0, #0
	mov	r0, #0x1
	neg	r0, r0
	cmp	r1, r0
	beq	.Lwrap_1	@cond_branch
	add	r0, r1, #0
	b	.Lwrap_2
.Lwrap_1:
	add	r0, r1, #0
	bl	error
.Lwrap_2:
	pop	{pc}
	thumb_func_end wrap

	thumb_func_start _swiread
_swiread:
	push	{r4, r5, lr}
	add	sp, sp, #0xfffffff4
	add	r4, r1, #0
	add	r5, r2, #0
	bl	remap_handle
	str	r0, [sp]
	str	r4, [sp, #0x4]
	str	r5, [sp, #0x8]
	mov	r3, #0x6
	add	r0, r3, #0
	mov	r1, sp
	swi	#0xab
	add	r2, r0, #0
	add	r0, r2, #0
	add	sp, sp, #0xc
	pop	{r4, r5, pc}
	thumb_func_end _swiread

	thumb_func_start _read
_read:
	push	{r4, r5, r6, r7, lr}
	add	r4, r0, #0
	add	r5, r1, #0
	add	r7, r2, #0
	bl	remap_handle
	bl	findslot
	add	r6, r0, #0
	add	r0, r4, #0
	add	r1, r5, #0
	add	r2, r7, #0
	bl	_swiread
	cmp	r0, #0
	bge	.L_read_1	@cond_branch
	mov	r0, #0x1
	neg	r0, r0
	bl	error
	b	.L_read_2
.L_read_1:
	sub	r2, r7, r0
	cmp	r6, #0x14
	beq	.L_read_3	@cond_branch
	ldr	r0, .L_read_4 @ 0x0
	lsl	r1, r6, #0x3
	add	r0, r0, #0x4
	add	r1, r1, r0
	ldr	r0, [r1]
	add	r0, r0, r2
	str	r0, [r1]
.L_read_3:
	add	r0, r2, #0
.L_read_2:
	pop	{r4, r5, r6, r7, pc}
.L_read_5:
	.align	2, 0
.L_read_4:
	.word	0x3002840
	thumb_func_end _read

	thumb_func_start _swilseek
_swilseek:
	push	{r4, r5, r6, r7, lr}
	mov	r7, r8
	push	{r7}
	add	sp, sp, #0xfffffff8
	mov	r8, r0
	add	r5, r1, #0
	add	r4, r2, #0
	bl	remap_handle
	add	r7, r0, #0
	bl	findslot
	add	r6, r0, #0
	cmp	r4, #0x1
	bne	.L_swilseek_1	@cond_branch
	cmp	r6, #0x14
	bne	.L_swilseek_2	@cond_branch
	mov	r0, #0x1
	neg	r0, r0
	b	.L_swilseek_7
.L_swilseek_2:
	ldr	r0, .L_swilseek_8 @ 0x0
	lsl	r1, r6, #0x3
	add	r0, r0, #0x4
	add	r1, r1, r0
	ldr	r0, [r1]
	add	r5, r5, r0
	mov	r4, #0x0
.L_swilseek_1:
	cmp	r4, #0x2
	bne	.L_swilseek_4	@cond_branch
	str	r7, [sp]
	mov	r3, #0xc
	add	r0, r3, #0
	mov	r1, sp
	swi	#0xab
	add	r2, r0, #0
	add	r5, r5, r2
.L_swilseek_4:
	mov	r0, r8
	bl	remap_handle
	str	r0, [sp]
	str	r5, [sp, #0x4]
	mov	r3, #0xa
	add	r0, r3, #0
	mov	r1, sp
	swi	#0xab
	add	r2, r0, #0
	cmp	r6, #0x14
	beq	.L_swilseek_6	@cond_branch
	cmp	r2, #0
	bne	.L_swilseek_6	@cond_branch
	ldr	r0, .L_swilseek_8 @ 0x0
	lsl	r1, r6, #0x3
	add	r0, r0, #0x4
	add	r1, r1, r0
	str	r5, [r1]
.L_swilseek_6:
	mov	r0, #0x1
	neg	r0, r0
	cmp	r2, #0
	bne	.L_swilseek_7	@cond_branch
	add	r0, r5, #0
.L_swilseek_7:
	add	sp, sp, #0x8
	pop	{r3}
	mov	r8, r3
	pop	{r4, r5, r6, r7, pc}
.L_swilseek_9:
	.align	2, 0
.L_swilseek_8:
	.word	0x3002840
	thumb_func_end _swilseek

	thumb_func_start _lseek
_lseek:
	push	{lr}
	bl	_swilseek
	bl	wrap
	pop	{pc}
	thumb_func_end _lseek

	thumb_func_start _swiwrite
_swiwrite:
	push	{r4, r5, lr}
	add	sp, sp, #0xfffffff4
	add	r4, r1, #0
	add	r5, r2, #0
	bl	remap_handle
	str	r0, [sp]
	str	r4, [sp, #0x4]
	str	r5, [sp, #0x8]
	mov	r3, #0x5
	add	r0, r3, #0
	mov	r1, sp
	swi	#0xab
	add	r2, r0, #0
	add	r0, r2, #0
	add	sp, sp, #0xc
	pop	{r4, r5, pc}
	thumb_func_end _swiwrite

	thumb_func_start _write
_write:
	push	{r4, r5, r6, r7, lr}
	add	r4, r0, #0
	add	r5, r1, #0
	add	r6, r2, #0
	bl	remap_handle
	bl	findslot
	add	r7, r0, #0
	add	r0, r4, #0
	add	r1, r5, #0
	add	r2, r6, #0
	bl	_swiwrite
	mov	r1, #0x1
	neg	r1, r1
	cmp	r0, r1
	beq	.L_write_1	@cond_branch
	cmp	r0, r6
	bne	.L_write_2	@cond_branch
.L_write_1:
	add	r0, r1, #0
	bl	error
	b	.L_write_3
.L_write_2:
	sub	r2, r6, r0
	cmp	r7, #0x14
	beq	.L_write_4	@cond_branch
	ldr	r0, .L_write_5 @ 0x0
	lsl	r1, r7, #0x3
	add	r0, r0, #0x4
	add	r1, r1, r0
	ldr	r0, [r1]
	add	r0, r0, r2
	str	r0, [r1]
.L_write_4:
	add	r0, r2, #0
.L_write_3:
	pop	{r4, r5, r6, r7, pc}
.L_write_6:
	.align	2, 0
.L_write_5:
	.word	0x3002840
	thumb_func_end _write

	thumb_func_start _swiopen
_swiopen:
	push	{r4, r5, r6, r7, lr}
	mov	r7, r8
	push	{r7}
	add	sp, sp, #0xfffffff4
	add	r7, r0, #0
	add	r4, r1, #0
	mov	r5, #0x0
	mov	r6, #0x1
	neg	r6, r6
	add	r0, r6, #0
	bl	findslot
	mov	r8, r0
	cmp	r0, #0x14
	bne	.L_swiopen_1	@cond_branch
	add	r0, r6, #0
	b	.L_swiopen_8
.L_swiopen_1:
	mov	r0, #0x2
	and	r0, r0, r4
	cmp	r0, #0
	beq	.L_swiopen_3	@cond_branch
	mov	r5, #0x2
.L_swiopen_3:
	mov	r0, #0x80
	lsl	r0, r0, #0x2
	and	r0, r0, r4
	cmp	r0, #0
	beq	.L_swiopen_4	@cond_branch
	mov	r0, #0x4
	orr	r5, r5, r0
.L_swiopen_4:
	mov	r0, #0x80
	lsl	r0, r0, #0x3
	and	r0, r0, r4
	cmp	r0, #0
	beq	.L_swiopen_5	@cond_branch
	mov	r0, #0x4
	orr	r5, r5, r0
.L_swiopen_5:
	mov	r1, #0x8
	and	r4, r4, r1
	cmp	r4, #0
	beq	.L_swiopen_6	@cond_branch
	mov	r0, #0x5
	neg	r0, r0
	and	r5, r5, r0
	orr	r5, r5, r1
.L_swiopen_6:
	str	r7, [sp]
	add	r0, r7, #0
	bl	strlen
	str	r0, [sp, #0x8]
	str	r5, [sp, #0x4]
	mov	r2, #0x1
	add	r0, r2, #0
	mov	r1, sp
	swi	#0xab
	add	r3, r0, #0
	cmp	r3, #0
	blt	.L_swiopen_7	@cond_branch
	ldr	r0, .L_swiopen_9 @ 0x0
	mov	r1, r8
	lsl	r2, r1, #0x3
	add	r1, r2, r0
	str	r3, [r1]
	add	r0, r0, #0x4
	add	r2, r2, r0
	mov	r0, #0x0
	str	r0, [r2]
	add	r0, r3, #0
	add	r0, r0, #0x20
	b	.L_swiopen_8
.L_swiopen_10:
	.align	2, 0
.L_swiopen_9:
	.word	0x3002840
.L_swiopen_7:
	add	r0, r3, #0
	bl	error
.L_swiopen_8:
	add	sp, sp, #0xc
	pop	{r3}
	mov	r8, r3
	pop	{r4, r5, r6, r7, pc}
	thumb_func_end _swiopen

	thumb_func_start _open
_open:
	push	{r1, r2, r3}
	push	{lr}
	ldr	r1, [sp, #0x4]
	bl	_swiopen
	bl	wrap
	pop	{r3}
	add	sp, sp, #0xc
	bx	r3
	thumb_func_end _open

	thumb_func_start _swiclose
_swiclose:
	push	{lr}
	add	sp, sp, #0xfffffffc
	bl	remap_handle
	str	r0, [sp]
	bl	findslot
	add	r1, r0, #0
	cmp	r1, #0x14
	beq	.L_swiclose_1	@cond_branch
	ldr	r0, .L_swiclose_2 @ 0x0
	lsl	r1, r1, #0x3
	add	r1, r1, r0
	mov	r0, #0x1
	neg	r0, r0
	str	r0, [r1]
.L_swiclose_1:
	mov	r3, #0x2
	add	r0, r3, #0
	mov	r1, sp
	swi	#0xab
	add	r2, r0, #0
	add	r0, r2, #0
	add	sp, sp, #0x4
	pop	{pc}
.L_swiclose_3:
	.align	2, 0
.L_swiclose_2:
	.word	0x3002840
	thumb_func_end _swiclose

	thumb_func_start close
close:
	push	{lr}
	bl	_swiclose
	bl	wrap
	pop	{pc}
	thumb_func_end close

	thumb_func_start _exit
_exit:
	mov	ip, r3
	mov	r3, r8
	push	{r3}
	mov	r3, ip
	mov	r2, #0x18
	ldr	r3, .L_exit_1 @ 0x0
	add	r0, r2, #0
	add	r1, r3, #0
	swi	#0xab
	mov	r8, r0
	pop	{r3}
	mov	r8, r3
	bx	lr
.L_exit_2:
	.align	2, 0
.L_exit_1:
	.word	0x20026
	thumb_func_end _exit

	thumb_func_start _kill
_kill:
	mov	ip, r3
	mov	r3, r8
	push	{r3}
	mov	r3, ip
	mov	r2, #0x18
	ldr	r3, .L_kill_1 @ 0x0
	add	r0, r2, #0
	add	r1, r3, #0
	swi	#0xab
	mov	r8, r0
	pop	{r3}
	mov	r8, r3
	bx	lr
.L_kill_2:
	.align	2, 0
.L_kill_1:
	.word	0x20026
	thumb_func_end _kill

	thumb_func_start _getpid
_getpid:
	mov	r0, #0x1
	bx	lr
	thumb_func_end _getpid

	thumb_func_start _sbrk
_sbrk:
	push	{r4, r5, r6, lr}
	add	r6, r0, #0
	ldr	r4, .L_sbrk_3 @ 0x0
	ldr	r0, [r4]
	cmp	r0, #0
	bne	.L_sbrk_1	@cond_branch
	ldr	r0, .L_sbrk_3 + 4 @ 0x0
	str	r0, [r4]
.L_sbrk_1:
	ldr	r5, [r4]
	add	r0, r5, r6
	cmp	r0, sp
	bls	.L_sbrk_2	@cond_branch
	ldr	r1, .L_sbrk_3 + 8 @ Data3+0x1f8
	mov	r0, #0x1
	mov	r2, #0x20
	bl	_write
	bl	abort
.L_sbrk_2:
	ldr	r0, [r4]
	add	r0, r0, r6
	str	r0, [r4]
	add	r0, r5, #0
	pop	{r4, r5, r6, pc}
.L_sbrk_4:
	.align	2, 0
.L_sbrk_3:
	.word	0x3002830
	.word	0x3007480
	.word	Data3+0x1f8
	thumb_func_end _sbrk

	thumb_func_start _fstat
_fstat:
	mov	r0, #0x80
	lsl	r0, r0, #0x6
	str	r0, [r1, #0x4]
	mov	r0, #0x0
	bx	lr
	thumb_func_end _fstat

	thumb_func_start _unlink
_unlink:
	mov	r0, #0x1
	neg	r0, r0
	bx	lr
	thumb_func_end _unlink

	thumb_func_start _raise
_raise:
	bx	lr
	thumb_func_end _raise

	thumb_func_start _gettimeofday
_gettimeofday:
	push	{r4, r5, lr}
	add	r2, r0, #0
	add	r3, r1, #0
	cmp	r2, #0
	beq	.L_gettimeofday_1	@cond_branch
	mov	r4, #0x11
	mov	r5, #0x0
	add	r0, r4, #0
	add	r1, r5, #0
	swi	#0xab
	add	r5, r0, #0
	add	r4, r5, #0
	str	r4, [r2]
	mov	r0, #0x0
	str	r0, [r2, #0x4]
.L_gettimeofday_1:
	cmp	r3, #0
	beq	.L_gettimeofday_2	@cond_branch
	mov	r0, #0x0
	str	r0, [r3]
	str	r0, [r3, #0x4]
.L_gettimeofday_2:
	mov	r0, #0x0
	pop	{r4, r5, pc}
	thumb_func_end _gettimeofday

	thumb_func_start _times
_times:
	push	{r4, r5, lr}
	add	r2, r0, #0
	mov	r4, #0x10
	mov	r5, #0x0
	add	r0, r4, #0
	add	r1, r5, #0
	swi	#0xab
	add	r3, r0, #0
	cmp	r2, #0
	beq	.L_times_1	@cond_branch
	str	r3, [r2]
	mov	r0, #0x0
	str	r0, [r2, #0x4]
	str	r0, [r2, #0x8]
	str	r0, [r2, #0xc]
.L_times_1:
	add	r0, r3, #0
	pop	{r4, r5, pc}
	thumb_func_end _times

	thumb_func_start _write_r
_write_r:
	push	{r4, r5, lr}
	add	r5, r0, #0
	add	r0, r1, #0
	add	r1, r2, #0
	add	r2, r3, #0
	ldr	r4, .L_write_r_3 @ 0x0
	mov	r3, #0x0
	str	r3, [r4]
	bl	_write
	add	r1, r0, #0
	mov	r0, #0x1
	neg	r0, r0
	cmp	r1, r0
	bne	.L_write_r_2	@cond_branch
	ldr	r0, [r4]
	cmp	r0, #0
	beq	.L_write_r_2	@cond_branch
	str	r0, [r5]
.L_write_r_2:
	add	r0, r1, #0
	pop	{r4, r5, pc}
.L_write_r_4:
	.align	2, 0
.L_write_r_3:
	.word	0x300747c
	thumb_func_end _write_r

	thumb_func_start _calloc_r
_calloc_r:
	push	{r4, lr}
	mul	r1, r1, r2
	bl	_malloc_r
	add	r4, r0, #0
	cmp	r4, #0
	bne	.L_calloc_r_1	@cond_branch
	mov	r0, #0x0
	b	.L_calloc_r_2
.L_calloc_r_1:
	add	r0, r4, #0
	sub	r0, r0, #0x8
	ldr	r0, [r0, #0x4]
	mov	r1, #0x4
	neg	r1, r1
	and	r0, r0, r1
	sub	r2, r0, #4
	cmp	r2, #0x24
	bhi	.L_calloc_r_3	@cond_branch
	add	r1, r4, #0
	cmp	r2, #0x13
	bls	.L_calloc_r_6	@cond_branch
	mov	r0, #0x0
	stmia	r1!, {r0}
	str	r0, [r4, #0x4]
	add	r1, r1, #0x4
	cmp	r2, #0x1b
	bls	.L_calloc_r_6	@cond_branch
	stmia	r1!, {r0}
	stmia	r1!, {r0}
	cmp	r2, #0x23
	bls	.L_calloc_r_6	@cond_branch
	stmia	r1!, {r0}
	stmia	r1!, {r0}
.L_calloc_r_6:
	mov	r0, #0x0
	stmia	r1!, {r0}
	stmia	r1!, {r0}
	str	r0, [r1]
	b	.L_calloc_r_7
.L_calloc_r_3:
	add	r0, r4, #0
	mov	r1, #0x0
	bl	memset
.L_calloc_r_7:
	add	r0, r4, #0
.L_calloc_r_2:
	pop	{r4, pc}
	thumb_func_end _calloc_r

	thumb_func_start _close_r
_close_r:
	push	{r4, r5, lr}
	add	r5, r0, #0
	add	r0, r1, #0
	ldr	r4, .L_close_r_3 @ 0x0
	mov	r1, #0x0
	str	r1, [r4]
	bl	close
	add	r1, r0, #0
	mov	r0, #0x1
	neg	r0, r0
	cmp	r1, r0
	bne	.L_close_r_2	@cond_branch
	ldr	r0, [r4]
	cmp	r0, #0
	beq	.L_close_r_2	@cond_branch
	str	r0, [r5]
.L_close_r_2:
	add	r0, r1, #0
	pop	{r4, r5, pc}
.L_close_r_4:
	.align	2, 0
.L_close_r_3:
	.word	0x300747c
	thumb_func_end _close_r

	thumb_func_start __errno
__errno:
	ldr	r0, .L__errno_1 @ 0x0
	ldr	r0, [r0]
	bx	lr
.L__errno_2:
	.align	2, 0
.L__errno_1:
	.word	0x203f754
	thumb_func_end __errno

	thumb_func_start _fstat_r
_fstat_r:
	push	{r4, r5, lr}
	add	r5, r0, #0
	add	r0, r1, #0
	add	r1, r2, #0
	ldr	r4, .L_fstat_r_3 @ 0x0
	mov	r2, #0x0
	str	r2, [r4]
	bl	_fstat
	add	r1, r0, #0
	mov	r0, #0x1
	neg	r0, r0
	cmp	r1, r0
	bne	.L_fstat_r_2	@cond_branch
	ldr	r0, [r4]
	cmp	r0, #0
	beq	.L_fstat_r_2	@cond_branch
	str	r0, [r5]
.L_fstat_r_2:
	add	r0, r1, #0
	pop	{r4, r5, pc}
.L_fstat_r_4:
	.align	2, 0
.L_fstat_r_3:
	.word	0x300747c
	thumb_func_end _fstat_r

	thumb_func_start abort
abort:
	mov	ip, r3
	mov	r3, r8
	push	{r3}
	mov	r3, ip
	mov	r2, #0x18
	ldr	r3, .Labort_1 @ 0x0
	add	r0, r2, #0
	add	r1, r3, #0
	swi	#0xab
	mov	r8, r0
	pop	{r3}
	mov	r8, r3
	bx	lr
.Labort_2:
	.align	2, 0
.Labort_1:
	.word	0x20022
	thumb_func_end abort

	thumb_func_start isatty
isatty:
	mov	r0, #0x1
	bx	lr
	thumb_func_end isatty

	thumb_func_start alarm
alarm:
	bx	lr
	thumb_func_end alarm

	thumb_func_start _lseek_r
_lseek_r:
	push	{r4, r5, lr}
	add	r5, r0, #0
	add	r0, r1, #0
	add	r1, r2, #0
	add	r2, r3, #0
	ldr	r4, .L_lseek_r_3 @ 0x0
	mov	r3, #0x0
	str	r3, [r4]
	bl	_lseek
	add	r1, r0, #0
	mov	r0, #0x1
	neg	r0, r0
	cmp	r1, r0
	bne	.L_lseek_r_2	@cond_branch
	ldr	r0, [r4]
	cmp	r0, #0
	beq	.L_lseek_r_2	@cond_branch
	str	r0, [r5]
.L_lseek_r_2:
	add	r0, r1, #0
	pop	{r4, r5, pc}
.L_lseek_r_4:
	.align	2, 0
.L_lseek_r_3:
	.word	0x300747c
	thumb_func_end _lseek_r

	thumb_func_start _read_r
_read_r:
	push	{r4, r5, lr}
	add	r5, r0, #0
	add	r0, r1, #0
	add	r1, r2, #0
	add	r2, r3, #0
	ldr	r4, .L_read_r_3 @ 0x0
	mov	r3, #0x0
	str	r3, [r4]
	bl	_read
	add	r1, r0, #0
	mov	r0, #0x1
	neg	r0, r0
	cmp	r1, r0
	bne	.L_read_r_2	@cond_branch
	ldr	r0, [r4]
	cmp	r0, #0
	beq	.L_read_r_2	@cond_branch
	str	r0, [r5]
.L_read_r_2:
	add	r0, r1, #0
	pop	{r4, r5, pc}
.L_read_r_4:
	.align	2, 0
.L_read_r_3:
	.word	0x300747c
	thumb_func_end _read_r
