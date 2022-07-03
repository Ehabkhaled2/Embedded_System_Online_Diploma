/*
 ============================================================================
 Name        : EX_1.c
 Author      : Ehab Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime(int start,int end)
{
	for(int i=start;i<=end;i++)
	{
		if(i%2==0||i%3==0||i%5==0)
			continue;
		else
			printf("%d ",i);
	}
}

int main(void) {
	int s,e;
	printf("Enter two numbers(Intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&s,&e);
	printf("Prime numbers between %d and %d is: ",s,e);
	prime(s,e);
}
