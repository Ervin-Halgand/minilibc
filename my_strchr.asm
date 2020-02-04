BITS 64
SECTION .text
    GLOBAL strchr:function

strchr:
    JMP loop

finish: 
    MOV rax, rdi
    RET

incre:
    INC rdi
    JMP loop

not_found:
    MOV rax, 0
    RET
loop:
    CMP byte [rdi], sil
    JE finish
    CMP byte [rdi], 0
    JNE incre
    JE not_found
    JMP loop
    
