/*
 ============================================================================
 Name        : EX_7.c
 Author      : Ehab Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int A,B;
	printf("Enter the first number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&A);
	printf("Enter the Second number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&B);
	printf("After Swapping the first number = %d\n",A*B/A);
	printf("After Swapping the second number = %d",A*B/B);
	return EXIT_SUCCESS;
}
