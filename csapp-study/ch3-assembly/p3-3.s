movb $0xF, (%bl) # 地址错误
movl %rax, (%rsp) # expect movq
movw (%rax), 4(%rsp) # mem->mem is not allowed
movb %al, %sl # register name not correct
movq %rax, $0x123 # imm cant be dest
movl %eax, %rdx # expect %edx
movb %si,8(%rbp) # expect movw