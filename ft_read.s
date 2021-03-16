section .text
    extern ___error
    global _ft_write

_ft_write:
    mov rax, 0x2000003
    syscall             ; pone en rax errno
    jc _check_error
    ret
    
_check_error:
    sub rsp, 8
    mov r12, rax
    call ___error ; en rax la direccion de errno
    mov [rax], r12
    mov rax, -1
    add rsp, 8
    ret