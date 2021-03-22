section .text
	extern _malloc
    extern ___error
	extern _ft_strlen
	extern _ft_strcpy
    global _ft_strdup

_ft_strdup:
    ;cmp byte[rdi], 0 
	;jz _error
    push rdi
    call _ft_strlen
    mov rdi, rax
    call _malloc
    mov rdi, rax
    pop rsi
    call _ft_strcpy
    ret

_error:
	mov rax, rdi
	ret
