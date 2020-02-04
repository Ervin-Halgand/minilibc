BITS 64
SECTION .text
    GLOBAL memset:function

memset:
    MOV rcx, 0
    MOV rax, rdi

loop:
    CMP rdx, rcx
    JE  end
    MOV [rax], sil
    INC rax
    INC rcx
    INC rdi
    JMP loop

end:
    RET
