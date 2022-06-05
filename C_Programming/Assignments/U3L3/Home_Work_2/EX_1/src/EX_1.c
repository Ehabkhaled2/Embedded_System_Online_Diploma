/*
 ============================================================================
 Name        : EX_1.c
 Author      : Ehab
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int A;
	printf("Enter a number to check: \n");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&A);
	if(A%2==0) printf("Even number");
	else printf("Odd number");
}
