#include <stdio.h>

/**
*main - Write a program that prints the alphabet in lowercase
*
*Return: 0
*/

int main (void)
{
	char character = 'a';

	for(character = 'a'; character <= 'z'; character++) 
	{	
		putchar(character);
	}
	putchar('\n');

	return (0);
}
