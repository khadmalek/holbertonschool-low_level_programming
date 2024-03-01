#include "main.h"

/**
 * puts2 - Print every other character of a string
 *
 * @str: The string to print characters from
 *
 * Description:
 * This function prints every other character of the given string, starting
 * from the first character, followed by a newline character.
 *
 * Parameters:
 * @str: A pointer to the string to print characters from.
 *
 * Return:
 * This function does not return a value.
 */

void puts2(char *str)
{
	int i;

	if (str == NULL)
	return;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
