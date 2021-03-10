section .text
		global _ft_strcpy

_ft_strcpy:

	mov rax, rdi
_check:
	cmp rsi, 0
	jz _exit
	cmp rdi, 0
	jz _exit

_while:
	movsb
	cmp byte[rsi], 0
	jz _end
	jmp _while

_exit:
	ret

_end:
	ret