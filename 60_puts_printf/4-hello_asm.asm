; ----------------------------------------------------------------------------------------
; Writes "Hello, asm" to the console using only system calls.
; To assemble and run:
;
;    nasm -f elf 4-hello_asm.asm && gcc -m32 4-hello_asm.o && ./a.out
; ----------------------------------------------------------------------------------------

global main
extern puts

section .text

main:

mov rdi, message
call puts
ret

message:
db "Hello, asm", 0
