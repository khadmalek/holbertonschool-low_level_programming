#include <stdio.h>

/**
*main - Entry point
*
*Descritpion: function that prints the alphabet in lowercase
*
*return: 0
*/

void print_alphabet(void);

int main(void);
{
	print_alphabet;
	putchar('\n);
	return 0;
}

void print_alphabet(void)
{
	char letter = 'a';
	while(letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
}
