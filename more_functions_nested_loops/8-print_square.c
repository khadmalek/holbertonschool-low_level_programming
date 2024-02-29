#include "main.h"

/*
 * print_square - Print a square of '#' characters
 * @size: Size of the square
 *
 * This function prints a square made of '#' characters,
 * with each side being of the specified size. If size
 * is 0 or less, it prints only a new line.
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
