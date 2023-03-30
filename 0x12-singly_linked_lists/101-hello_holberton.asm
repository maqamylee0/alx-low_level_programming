section .data
    hello db 'Hello, Holberton', 0Ah   ; string to be printed

section .text
    global _start

_start:
    ; write hello string to stdout
    mov eax, 4       ; system call for write
    mov ebx, 1       ; file descriptor for stdout
    mov ecx, hello   ; address of hello string
    mov edx, 16      ; length of hello string
    int 80h          ; call kernel

    ; exit program with status 0
    mov eax, 1       ; system call for exit
    xor ebx, ebx     ; exit status 0
    int 80h          ; call kernel
