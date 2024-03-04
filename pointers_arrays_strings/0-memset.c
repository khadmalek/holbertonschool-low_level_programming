#include "main.h"

/**
* _memset - function fills the first n bytes of the memory area pointed
*
* @s: a pointer
* @b: constant byte
* @n: number of bytes to fill
*
* return: A pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
