section .text
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_strcpy

_ft_strdup:
	cmp byte[rdi], 0 
	jz _error
	call _ft_strlen
	mov rdi, rax
	mov rax, 0
	call _malloc
	mov rdi, 0
	mov rsi, rax
	call _ft_strcpy
	jmp _exit

_error:
	mov rax, 0
	ret

_exit: 
	ret

