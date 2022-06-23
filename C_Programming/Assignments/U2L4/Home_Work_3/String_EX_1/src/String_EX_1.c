/*
 ============================================================================
 Name        : String_EX_1.c
 Author      : Ehab Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main(void) {
	char text[100],search;
	int length,freq=0;

	puts("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(text);

	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&search);

	length=strlen(text);
	for(int i=0;i<length;i++)
	{
		if(text[i]==search)
		{
			freq++;
		}
	}

	printf("Frequency of %c = %d",search,freq);
}
