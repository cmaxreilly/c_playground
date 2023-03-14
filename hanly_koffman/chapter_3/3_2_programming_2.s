	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 13, 0	sdk_version 13, 1
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3                               ## -- Begin function main
LCPI0_0:
	.quad	0x4000000000000000              ## double 2
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movl	$0, -4(%rbp)
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-16(%rbp), %rsi
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-32(%rbp), %rsi
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.3(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-24(%rbp), %rsi
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-40(%rbp), %rsi
	movb	$0, %al
	callq	_scanf
	movsd	-16(%rbp), %xmm0                ## xmm0 = mem[0],zero
	subsd	-24(%rbp), %xmm0
	movsd	LCPI0_0(%rip), %xmm1            ## xmm1 = mem[0],zero
	callq	_pow
	movsd	%xmm0, -56(%rbp)                ## 8-byte Spill
	movsd	-32(%rbp), %xmm0                ## xmm0 = mem[0],zero
	subsd	-40(%rbp), %xmm0
	movsd	LCPI0_0(%rip), %xmm1            ## xmm1 = mem[0],zero
	callq	_pow
	movaps	%xmm0, %xmm1
	movsd	-56(%rbp), %xmm0                ## 8-byte Reload
                                        ## xmm0 = mem[0],zero
	addsd	%xmm1, %xmm0
	sqrtsd	%xmm0, %xmm0
	movsd	%xmm0, -48(%rbp)
	movsd	-48(%rbp), %xmm0                ## xmm0 = mem[0],zero
	leaq	L_.str.4(%rip), %rdi
	movb	$1, %al
	callq	_printf
	xorl	%eax, %eax
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Enter the x coordinate for the first point >>"

L_.str.1:                               ## @.str.1
	.asciz	"%lf"

L_.str.2:                               ## @.str.2
	.asciz	"y coordinate >>"

L_.str.3:                               ## @.str.3
	.asciz	"Enter the x coordinate for the second point >>"

L_.str.4:                               ## @.str.4
	.asciz	"The distance between the two points is %.2f.\n"

.subsections_via_symbols
