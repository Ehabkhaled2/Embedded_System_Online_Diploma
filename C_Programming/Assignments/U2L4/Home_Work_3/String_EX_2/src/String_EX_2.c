/*
 ============================================================================
 Name        : String_EX_2.c
 Author      : Ehab Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char text[100];
	int length=0,i=0;

	puts("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(text);

	while(text[i]!='\0')
	{
		length++;
		i++;
	}
	printf("the length of the string = %d",length);
}
