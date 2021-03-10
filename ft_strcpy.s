section .text
		global _ft_strcpy

_ft_strcpy:
	mov rcx, 0

_check:
	cmp rsi, 0
	je _exit

_while:
	mov dl, BYTE[rsi + rcx]
	mov BYTE[rdi + rcx], dl
	cmp dl, 0
	je _end
	inc rcx
	jmp _while

_exit:
	ret

_end:
	mov rax, rdi
	ret