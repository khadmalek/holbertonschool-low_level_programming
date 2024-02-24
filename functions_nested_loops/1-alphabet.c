#include "main.h"

/**
*main - Entry point
*
*Descritpion: function that prints the alphabet in lowercase
*
*return: 0
*/

void print_alphabet(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
