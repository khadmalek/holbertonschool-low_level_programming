#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes (\) in the terminal
 * @n: The number of times the character '\' should be printed
 *
 * Description: This function prints a diagonal line of backslashes
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
