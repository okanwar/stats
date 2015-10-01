# TODO: update the following lines with your info
# 		and delete these "to do" lines
# Author: A. Student
# Email: astudent@sandiego.edu

.text	# indicates that what follows is code, not data
.globl _rotate  # declare global name called "_rotate"
				# C requires that all functions have a leading understore
				# added to them by the assembler, hence "_rotate" instead of
				# just "rotate" for the name of our function.

_rotate:
	# The following lines set up the stack
	# Do NOT modify them.
	pushq	%rbp                
	movq	%rsp, %rbp

	# ADD YOUR CODE IN HERE.

	# Do NOT modify anything below here
	popq	%rbp
	retq
