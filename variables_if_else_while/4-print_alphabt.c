#include <stdio.h>

/**
*main - Write a program that prints the alphabet in lowercase except e q
*
*Return: 0
*/

int main(void)
{	 char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		if (character == 'q' || character == 'e')
		{
			character++;
		}
		putchar(character);
	}
	putchar('\n');

	return (0);
}

