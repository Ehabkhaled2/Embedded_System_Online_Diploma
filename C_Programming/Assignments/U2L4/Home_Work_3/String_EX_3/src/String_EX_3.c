/*
 ============================================================================
 Name        : String_EX_3.c
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
	char text[100],rev[100];
	int length,j=0;

	puts("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(text);

	length=strlen(text);

	for(int i=length-1;i>=0;i--)
	{
		rev[j]=text[i];
		j++;
	}
	rev[length]='\0';

	printf("?Reverse String is: ");
	puts(rev);

	/*
	for(int i=0;i<length;i++)
	{
		printf("?%c",rev[i]);
	}*/

}
