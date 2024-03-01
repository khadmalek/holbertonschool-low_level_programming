#include "main.h"

/**
*print_line - Prints a straight line made up of underscores
*@n: The number of underscores in the line
*
*Description: This function prints a straight line made up of underscores
*
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
