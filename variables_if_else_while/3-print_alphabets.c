#include <stdio.h>

/**
*main - a program that prints the alphabet in lowercase, and uppercas
*
*Return: 0
*/

int main(void)
{
	int i;
	char lowercase = 'a';
	char uppercase = 'A';

	for (i = 0; i < 26; i++)
	{
		putchar(lowercase);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(uppercase);
	}
	putchar('\n');

	return (0);
}
