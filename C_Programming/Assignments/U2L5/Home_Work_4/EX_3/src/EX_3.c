/*
 ============================================================================
 Name        : EX_3.c
 Author      : Ehab Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(void)
{
	char word;
	scanf("%c",&word);
	if(word!='\n')
	{
		reverse();
		printf("%c",word);
	}
}

int main(void) {
	printf("Enter a Sentence: ");
	fflush(stdin); fflush(stdout);
	reverse();
}
