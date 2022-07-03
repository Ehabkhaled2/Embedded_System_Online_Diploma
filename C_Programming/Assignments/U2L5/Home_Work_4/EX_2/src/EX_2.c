/*
 ============================================================================
 Name        : EX_2.c
 Author      : Ehab Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
	if(num!=1)
		num*=factorial(num-1);

	return num;
}

int main(void) {
	int num,fact;
	printf("Enter an positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	fact=factorial(num);
	printf("Factorial of %d is: %d",num,fact);
}
