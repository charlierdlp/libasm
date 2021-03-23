section .text
		global _ft_strcpy

_ft_strcpy:
	mov rax, rdi

_while:
	cmp byte[rsi], 0
	jz _exit
	movsb
	jmp _while

_exit:
	mov	byte [rdi], 0
	ret