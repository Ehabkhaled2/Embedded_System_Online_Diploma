/*
 ============================================================================
 Name        : Array_EX_2.c
 Author      : Ehab Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr[100],sum=0,avrg=0;
	int n;
	a:puts("Enter the number of the items: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	if(n<0 || n>100)
	{
		puts("Kindly enter an number between 0 and 100");
		goto a;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d.Enter number: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	avrg=sum/n;
	printf("Average = %f",avrg);
}
