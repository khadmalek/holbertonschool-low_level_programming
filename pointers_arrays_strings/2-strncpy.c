#include "main.h"

/**
 * _strncpy - Copy a source string to a destination string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy from src
 *
 * Description:
 * This function copies at most n characters from the source string src to the
 * destination string dest. If the length of src is less than n, the remaining
 * characters in dest will be filled with '\0'. If the length of src is greater
 * than or equal to n, the dest string will not be null-terminated.
 *
 * Return:
 * This function returns a pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != 0; a++)
	{
		dest[a]  = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = 0;
	}
	return (dest);
}
