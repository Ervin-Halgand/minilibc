BITS 64 ; 64-bit mode

SECTION .text ; Code section
    GLOBAL strlen ; Export 'main'

strlen:  
    MOV rax, 0
    JMP if

increm:
    INC rax
    INC rdi

if:
    CMP byte [rdi], 0
    JNE increm
    RET
