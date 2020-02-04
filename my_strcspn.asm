BITS 64
SECTION .text
    GLOBAL strcspn:function

strcspn:
    MOV rcx, 0
    MOV r11, 0
    MOV r12, 0
    JMP loop

reset:
    MOV r11, 0
    INC rcx
    INC r12
    JMP loop
check_all:
    CMP r8b, 0
    JE  reset
    MOV r8b, byte [rsi + r11]
    CMP al, r8b
    JE  end
    INC r11
    JMP check_all
loop:   
    MOV al, byte [rdi + rcx]
    MOV r8b, byte [rsi + r11]
    CMP al, 0
    JE end
    CMP al, r8b
    JE  end
    JNE check_all
    JMP loop
    
end:
    MOV rax, r12
    RET
