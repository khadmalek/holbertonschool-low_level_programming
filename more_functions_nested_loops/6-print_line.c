#include "main.h"

/*
* _putchar - Writes a character to the standard output
* @c: The character to be written
*
* Description:
*     Writes the character @c to the standard output.
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
