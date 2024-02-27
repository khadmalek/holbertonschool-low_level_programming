#include "main.h"
/*
 *  _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Description: This function returns the length of the string
 *
 * Returns: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
