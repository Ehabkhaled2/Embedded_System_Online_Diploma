/*
 ============================================================================
 Name        : Array_EX_4.c
 Author      : Ehab Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

int main() {

	int arr[50], new, num, i, LOC;

	printf("Enter no of elements: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);

	fflush(stdin); fflush(stdout);
	printf("Enter the %d elements: \n",num);

	for (i = 0; i < num; i++)
		{
			scanf("%d", &arr[i]);
		}


	printf("\nEnter the element to be inserted :");
	fflush(stdin); fflush(stdout);
	scanf("%d", &new);

	printf("\nEnter the Location");
	fflush(stdin); fflush(stdout);
	scanf("%d", &LOC);

	for (i = num; i >= LOC; i--)
		{
			arr[i] = arr[i - 1];

		}

	++num;
	arr[LOC - 1] = new;


	for(int i=0;i<num;i++)
		{
			printf("%d ",arr[i]);
		}
}
