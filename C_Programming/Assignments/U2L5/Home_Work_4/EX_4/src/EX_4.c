/*
 ============================================================================
 Name        : EX_4.c
 Author      : Ehab Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int powerr(int num,int pow)
{
	if(pow!=1)
	{
		num*=powerr(num,pow-1);
		//pow--;
	}
	return num;
}

int main(void)
{
	int number,power,result;
	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("Enter power number(Positive): \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&power);
	result=powerr(number,power);
	printf("%d^%d= %d",number,power,result);
}
