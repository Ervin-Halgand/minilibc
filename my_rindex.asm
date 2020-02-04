BITS 64
SECTION .text
    GLOBAL my_rindex:function

my_rindex:
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
down:
    CMP byte [rdi], sil
    JE finish
    CMP byte [rdi], 0
    JE not_found
    DEC rdi
    JMP down
loop:
    CMP byte [rdi], 0
    JNE incre
    JE down
    JMP loop
    
