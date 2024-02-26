#include "main.h"

/*
 * more_numbers - Prints numbers 0 to 14 ten times
 */

void more_numbers(void)
{
	int line, digit;

	for (line = 0; line <= 9; line++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit >= 10)
				_putchar((digit / 10) + '0');
			_putchar((digit % 10) + '0');
		}
		_putchar('\n');
	}
}
