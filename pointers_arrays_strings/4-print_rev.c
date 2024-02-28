#include "main.h"

/*
 * print_rev - Prints a string in reverse followed by a new line
 *
 * Description: function takes string @s as input and prints it in reverse
 *
 * @s: the string to be printed in reverse
 */

void print_rev(char *s)
{
	char *end;

	if (s == NULL)
	return;

	end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (end >= s)
	{
		_putchar(*end);
		end--;
	}

	_putchar('\n');
}
