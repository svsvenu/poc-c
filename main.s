	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$128, %rsp
	movl	$30, %edi
	movq	_print_message@GOTPCREL(%rip), %rax
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, -8(%rbp)
	movq	%rax, -88(%rbp)
	callq	*-88(%rbp)
	leaq	L_.str(%rip), %rdi
	leaq	-104(%rbp), %rax
	movl	$10, -100(%rbp)
	movl	$2, -72(%rbp)
	movl	$1, -40(%rbp)
	movl	$10, -104(%rbp)
	movq	%rax, -112(%rbp)
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	movq	-112(%rbp), %rcx
	movl	(%rcx), %esi
	movl	%eax, -116(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.2(%rip), %rdi
	movl	-72(%rbp), %esi
	movl	%eax, -120(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movl	$10, %edi
	movl	%eax, -124(%rbp)        ## 4-byte Spill
	callq	_print_message
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	cmpq	-8(%rbp), %rcx
	jne	LBB0_2
## BB#1:
	xorl	%eax, %eax
	addq	$128, %rsp
	popq	%rbp
	retq
LBB0_2:
	callq	___stack_chk_fail
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Hello World\n"

L_.str.1:                               ## @.str.1
	.asciz	"Pointer is %d\n"

L_.str.2:                               ## @.str.2
	.asciz	"Student record id %d\n"


.subsections_via_symbols
