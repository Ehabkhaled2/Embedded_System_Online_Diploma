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

int main(void) {

	float a[2][2],b[2][2];
	puts("Enter the elements of 1st matrix");
	for(int i=0;i<2;i++)
	{
		for( int j=0; j<2;j++)
		{
			printf("enter a%d%d: ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[i][j]);
		}

	}
	for(int i=0;i<2;i++)
		{
			for( int j=0; j<2;j++)
			{
				printf("enter b%d%d: ",i,j);
				fflush(stdin); fflush(stdout);
				scanf("%f",&b[i][j]);
			}

		}
	printf("Sum Of Matrix:\n");
	for(int i=0;i<2;i++)
		{
			for( int j=0; j<2;j++)
			{
				printf(" %f\t",a[i][j]+b[i][j]);
			}
			printf("\n");
		}
}
