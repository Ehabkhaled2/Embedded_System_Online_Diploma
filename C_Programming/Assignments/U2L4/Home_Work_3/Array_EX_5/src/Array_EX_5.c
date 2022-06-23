/*
 ============================================================================
 Name        : Array_EX_5.c
 Author      : Ehab Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
		int arr[50], num, i,search,loc=0;

		printf("Enter no of elements: \n");
		fflush(stdin); fflush(stdout);
		scanf("%d", &num);

		//fflush(stdin); fflush(stdout);
		printf("Enter the %d elements: \n",num);
		fflush(stdin); fflush(stdout);

		for (i = 0; i < num; i++)
			{
				scanf("%d",&arr[i]);
				printf("/t");
			}

		printf("Enter the element to search for: \n");
		fflush(stdin); fflush(stdout);
		scanf("%d", &search);

		for(i=0;i<num;i++)
			{
				if(arr[i]==search)
				{
					loc=i+1;
					break;
				}
			}
		if(loc==0)
		{
			printf("Not found");
		}
		else
		{
			printf("Number found at the location= %d",loc);
		}

}
