#include "main.h"

/**
* _strncat - Concatenate two strings
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to append from src
 *
 * Description:
 * This function appends at most n characters from the src string to the end
 * of the dest string, overwriting the null byte at the end of dest, and then
 * adds a terminating null byte. The strings should not overlap, and src does
 * not need to be null-terminated if it contains n or more bytes.
 *
 * Return:
 * This function returns a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	*dest = '\0';

	return (dest_start);
}
