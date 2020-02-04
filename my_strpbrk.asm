BITS 64
SECTION .text
    GLOBAL strpbrk:function

strpbrk:
    MOV rcx, 0
    MOV r11, 0
    JMP loop

reset:
    MOV r11, 0
    INC rcx
    JMP loop
check_all:
    MOV r8b, byte [rsi + r11]
    CMP al, r8b
    JE  final
    CMP r8b, 0
    JE  reset
    INC r11
    JMP check_all
loop:   
    MOV al, byte [rdi + rcx]
    MOV r8b, byte [rsi + r11]
    CMP al, 0
    JE not_found
    CMP al, r8b
    JNE check_all
    JE final
    JMP loop
    
final:
    CMP rcx, 0
    JE  end
    DEC rcx
    INC rdi
    JMP final
    
    
not_found:
    MOV rax, 0
    RET
end:
    MOV rax, rdi
    RET
