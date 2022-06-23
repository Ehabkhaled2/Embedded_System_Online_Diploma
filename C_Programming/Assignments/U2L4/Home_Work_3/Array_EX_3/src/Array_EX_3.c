/*
 ============================================================================
 Name        : Array_EX_3.c
 Author      : Ehab Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100][100],b[100][100];
	int r,c;
	puts("Enter row and column of the matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&r,&c);
	puts("Enter elements of matrix:");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter elements a%d%d: ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix you entered is :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("The transpose is: \n");

	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
