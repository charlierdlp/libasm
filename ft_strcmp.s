section .text
        global _ft_strcmp

_ft_strcmp:
    movzx rax, BYTE[rdi]
    movzx rbx, BYTE[rsi]
    cmp rax, 0
    jz _exit
    cmp rbx, 0
    jz _exit


_while:
    cmp rax, rbx
    jne _exit
    inc rdi
    inc rsi
    movzx rax, BYTE[rdi]
    movzx rbx, BYTE[rsi]
    cmp rax, rbx
    jne _exit
    jmp _while 

_exit:
    sub rax, rbx
    ret



                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         