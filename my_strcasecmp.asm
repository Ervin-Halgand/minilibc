BITS 64
SECTION .text
    GLOBAL strcasecmp:function

strcasecmp:
    MOV RCX, 0
loop:   
    MOV al, byte [rdi + rcx]
    MOV r8b, byte [rsi + rcx]
    CMP al, 0
    JE end
    CMP r8b, 0
    JE end
    CMP al, r8b
    JNE check1
    INC rcx
    JMP loop
check2:
    SUB r8b, 64
    CMP al, r8b
    JNE end
    INC rcx
    JMP loop
check1:
    ADD r8b, 32
    CMP al, r8b
    JNE check2
    INC rcx
    JMP loop
end:
    SUB al, r8b
    MOVSX rax, al
    RET
