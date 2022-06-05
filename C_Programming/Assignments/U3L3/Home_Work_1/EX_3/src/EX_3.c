/*
 ============================================================================
 Name        : EX_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
		int x,y,sum=0;
		printf("Enter two integers: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%d%d",&x,&y);
		sum=x+y;
		printf("sum: %d",sum);
}
