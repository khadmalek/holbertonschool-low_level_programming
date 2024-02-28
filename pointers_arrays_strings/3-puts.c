#include "main.h"

/*
 * _puts - Prints a string followed by a new line
 *
 * Description: This function prints the string
 *
 * @str: the string to be printed
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
