/*
 ============================================================================
 Name        : EX_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	puts("enter a character ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&x);
	printf("ASCII code of %c = %i",x,x);
	return EXIT_SUCCESS;
}
