#include "main.h"

/**
 * times_table - Prints the multiplication table from 0 to 9.
 *
 * No parameters.
 *
 * Return: No return value.
 */

void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int result = row * column;

			if (result > 9)
			{
				_putchar(result / 10 + '0');
			}
			else if (result <= 9 && column != 0)
			{
				_putchar(' ');
			}
			_putchar(result % 10 + '0');
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

