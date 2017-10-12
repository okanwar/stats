/* 
* stats.c
*
* This program contains code to take a single command line argument and computes
* and prints out a set of statistics about the data values from the file.
*
*
* This file is part of COMP 280, Project 3
*
* Author: 1. Om Kanwar
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "readfile.h"

//Function prototypes here//
double *getValues(int *size, int *capacity, char *filename);
double mean(double *p, int *size);
double median(double *p, int *size);
double stdev(double *p, int size *size);
void sort(double *p, int *size, double ave);

/**
 * This function takes in the file name from the command line and prints out
 * some statistics about the data set
 *
 * @param argv[] name of text file containing data
 * @return Returns -1 if file isn't found  and 0 if code runs smoothly
 */
int main(int argc, char *argv[]) {
	if(argc != 2) {
		printf ("usage: ./stats filename\n");
		exit(1);
	}

	// argv[1] contains filename string (pass argv[1] as the
	// third argument to getValues)
	printf("Statistics:\n");
	printf("-----------\n");

	int capacity = 20;
	int size = 0;
	double *array = getValues(&size, &capacity, argv[1]);

	if(array == NULL)
			printf("ARRAY NOT INITITALIZED\n");

	size += 0;
	capacity += 0;

	printf("num values:\t%d\n",size);
	printf("mean:\t\t%.3f\n",mean(array, &size));
	printf("median:\t\t%.3f\n",median(array, &size));
	printf("std dev:\t%.3f\n",stdev(array, &size, mean(array, &size))); 
	printf("\nUnused array slots: %i\n",(capacity - size));
			
	free(arr);
	return 0;
}

/** 
 * Function creates an array of doubles read in from the file
 *
 * @param size is the number of array slots that are occupied
 * @param capacity is the size of the array
 * @param filename is the name of the file to be read in
 * @return references the array created by malloc
 */
double *getValues(int *size, int *capacity, char *filename) {

	int ret = openFile(filename);
	       if (ret == -1) {
                printf("error: can't open %s\n",filename);
				exit(1);
			}
	double *p = malloc(*capacity * sizeof(double));
		double number = 0.0;
	int i = 0;
		while (ret != -1) {
			if(i == *capacity){
							*capacity = *capacity * 2;
							double *new_array = malloc(*capacity * sizeof(double));
							int q;
							for(q = 0; q < i; q++) {
								new_array[q] = p[q];
						}
			free(p);
			p = new_array;
		}
			ret = readDouble(&number); // begin reading first line of values from file
		if(ret != -1) {
					p[i] = number;
			*size += 1;
		}
		
		i++;
		
		}

	closeFile();
	return p;

/**
 *This function returns the median of the elements in the array
 *
 *@param p is the array to analyze
 *@param size is the number of elements filled in the array
 *@return gives the median of the array elements
 */
double median(double *p, int *size){
	sort(p,size);

	if(*size % 2 == 0){
		int index = *size /2;
		return p[index];
	}
	else {
			int index = (*size / 2);
			return p[index];
	}
}

/**
 * Sorts the array for the median function
 *
 *@param p is the array to analyze
 *@param size is the number of elements filled in the array
 *@return does not return anything
 */
sort(double *p, int *size){
	int i;
	for(i = 0; i < *size; i++) {
		int minimum = i;
		int k;
		for(k = i; k < *size; k++) {
			if(p[minimum] > p[k])
				minimum = k;
		}

	double temp = p[i];
	p[i] = p[minimum];
	p[minimum] = temp;

	}
}









