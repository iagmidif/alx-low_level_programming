section .text
	default rel		; a nasm assembly directive
					; tells nasm to use rip relative adressing
	extern printf		; external symbol
	global main		; needed for gcc and it's entrypoint for libc
main:
	push rbp		; create a stack-fram

	mov rdi, format
	mov rsi, msg
	mov rax, 0

	call printf wrt ..plt	; load printf from libs shared library
				; call printf with relation to procedure linkage table

	pop rbp			; pop stack

	mov rax, 0		; exit code 0
	ret			; return
section .data
	msg:	db	"Hello, Holberton", 0
	format:	db	"%s", 10, 0
