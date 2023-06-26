section .data
	ubutu db "Hello, Holberton", 0Ah

section .text
	grobal _start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, ubutu
	mov rdz, 16
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall
