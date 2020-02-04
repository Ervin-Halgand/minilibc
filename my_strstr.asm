BITS 64
SECTION .text
    GLOBAL strstr:function

strstr:
    MOV rcx, 0
    MOV r11, 0
    JMP loop

second:
    CMP r11, 0
    JE  finish
    DEC r11
    DEC rdi
    JMP second
    
final:
    CMP rcx, 0
    JE  second
    DEC rcx
    INC rdi
    JMP final
finish:
    MOV rax, rdi
    RET

reset:
    MOV rsi, rax
    JMP loop
not_found:
    MOV rax, 0
    RET

check_found:
    INC r11
    INC rcx
    JMP loop
    
loop:
    MOV al, byte [rdi + rcx]
    MOV r8b, byte [rsi + r11]
    CMP r8b, 0
    JE final
    CMP al, 0
    JE not_found
    CMP al, r8b
    JE check_found
    INC rcx
    MOV r11, 0
    JMP loop
