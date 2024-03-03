#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: Pointer to the string to be converted.
 *
 * Return: Pointer to the converted string.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*ptr != '\0')
	{
		if (islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}

	return (str);
}
