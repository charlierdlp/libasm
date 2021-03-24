section .text
	extern _malloc
    extern ___error
	extern _ft_strlen
	extern _ft_strcpy
    global _ft_strdup

_ft_strdup:
    push rdi
    call _ft_strlen
    mov rdi, rax
    call _malloc
    cmp rax, 0
    jz  _errno
    mov rdi, rax
    pop rsi
    call _ft_strcpy
    ret

_errno:
    mov r12, 12
    call ___error
    mov [rax], r12
    ret
