#include "main.h"

/*
* more_numbers - function that prints 10 times the numbers from to 0 to 14
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
