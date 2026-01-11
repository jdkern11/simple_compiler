.global _start

_start:
    mov $1,%rax
    push %rax
    mov $2,%rax
    push %rax
    mov $3,%rax
    pop %rbx
    imul %rbx,%rax
    push %rax
    mov $4,%rax
    pop %rbx
    idiv %rbx
    pop %rbx
    add %rbx,%rax
    push %rax
    mov $5,%rax
    pop %rbx
    add %rbx,%rax

    mov %rax, %rdi
    # Exit with the result
    mov $60, %rax  # sys_exit
    syscall
