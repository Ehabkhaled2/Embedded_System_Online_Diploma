/*
 ============================================================================
 Name        : EX_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,temp;
	puts("enter value of a: \n");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&a);
	puts("enter value of b: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);

	return EXIT_SUCCESS;
}
