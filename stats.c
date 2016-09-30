/* 
 * TODO: add top-level comment
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "readfile.h"

/* TODO: Add other function prototypes here */
double *getValues(int *size, int *capacity, char *filename);

int main(int argc, char *argv[]) {
	if(argc != 2) {
		printf ("usage: ./stats filename\n");
		exit(1);
	}

	// argv[1] contains filename string (pass argv[1] as the
	// third argument to getValues)
	printf("A DEBUG MESSAGE: REMOVE THIS!!!! filename %s\n", argv[1]);

	return 0;
}

/** 
 * TODO: Add your properly-formatted comment here.
 */
double *getValues(int *size, int *capacity, char *filename) {

	/*
	 * TODO: Implement this function
	 * Use the readfile library to read from the file.
	 */
	return NULL;
}
