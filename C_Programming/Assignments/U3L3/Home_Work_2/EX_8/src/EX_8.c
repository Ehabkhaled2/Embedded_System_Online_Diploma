/*
 ============================================================================
 Name        : EX_8.c
 Author      : Ehab
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float A,B;
	char OP;
	printf("Enter either + OR - OR * OR / : \n");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&OP);
	puts("Enter two numbers: \n");
	fflush(stdin);	fflush(stdout);
	scanf("%f%f",&A,&B);

	switch(OP)
	{
		case'+':
			printf("%f + %f = %f",A,B,A+B);
			break;
		case'-':
			printf("%f - %f = %f",A,B,A-B);
			break;
		case'*':
			printf("%f * %f = %f",A,B,A*B);
			break;
		case'/':
			printf("%f / %f = %f",A,B,A/B);
			break;


	}
}
