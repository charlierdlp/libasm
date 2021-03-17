section .text
        global _ft_strcmp

_ft_strcmp:
    movzx rax, BYTE[rdi]
    movzx rcx, BYTE[rsi]
    cmp rax, 0
    jz _exit
    cmp rcx, 0
    jz _exit


_while:
    cmp rax, rcx
    jne _exit
    cmp rax, 0
    jz _exit
    cmp rcx, 0
    jz _exit
    inc rdi
    inc rsi
    movzx rax, BYTE[rdi]
    movzx rcx, BYTE[rsi]
    cmp rax, rcx
    jne _exit
    jmp _while 

_exit:
    sub rax, rcx
    ret



                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         