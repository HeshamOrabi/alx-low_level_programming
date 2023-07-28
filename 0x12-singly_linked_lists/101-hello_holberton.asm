section .text
	global _start
	extern printf
_start:
	mov edi, msg
	xor eax, eax
	call printf
	mov eax, 0
	ret

section .data
	msg: db `Hello, Holberton\n`,0
