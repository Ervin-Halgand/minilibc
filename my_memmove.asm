BITS 64
SECTION .text
    GLOBAL memmove:function

memmove:
    MOV rcx, 0

loop:
    CMP rdx, rcx
    JE  end
    MOV r11b, [rsi + rcx]
    MOV [rdi + rcx], r11b
    INC rcx
    JMP loop

end:
    MOV rax, rdi
    RET
