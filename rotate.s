# Author: A. Om Kanwar
# Email: okanwar@sandiego.edu

.text	# indicates that what follows is code, not data
.globl rotate  # declare global name called "rotate"

rotate:
	# The following lines set up the stack
	# Do NOT modify them.
	pushq	%rbp                
	movq	%rsp, %rbp

	# My code
	movq	(%rdi), %rcx # stores value in *x to rdi
	movq	(%rsi), %r8 # stores value in *y to rsi
	movq	(%rdx), %r9 # stores the value in *z to rdx
	movq	%r8, (%rdx) # Moves the value in y to z
	movq	%rcx, (%rsi) # Moves the value in x to y
	movq	%r9, (%rdi) # Move the value in z to x


	# Do NOT modify anything below here
	popq	%rbp
	retq
