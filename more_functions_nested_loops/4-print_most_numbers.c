#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Description: This function prints numbers from 0 to 9, excluding 2 and 4.
 * It uses the _putchar function to output the characters.
 */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		{
		if (c != '2' && c != '4')
			_putchar(c);
		}
	_putchar('\n');
}
