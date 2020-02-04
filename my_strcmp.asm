BITS 64
SECTION .text
    GLOBAL strcmp:function

strcmp:
    MOV RCX, 0
loop:   
    MOV al, byte [rdi + rcx]
    MOV r8b, byte [rsi + rcx]
    CMP al, 0
    JE end
    CMP r8b, 0
    JE end
    CMP al, r8b
    JNE end
    INC rcx
    JMP loop
end:
    sub al, r8b
    MOVSX rax, al
    RET
