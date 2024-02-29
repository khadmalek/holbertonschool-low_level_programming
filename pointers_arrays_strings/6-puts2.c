#include "main.h"

/*
 * puts2 - Print every other character of a string
 * @str: The string to print characters from
 *
 * function prints every other character of the given string, starting
 * the first character, followed by a newline character.
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
			putchar(str[i]);
		}
	}
}
