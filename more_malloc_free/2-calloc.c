#include <stdlib.h>
#include <string.h>
#include "main.h"

#include "main.h"

/**
* _memset - function fills the first n bytes of the memory area pointed
*
* @s: a pointer
* @b: constant byte
* @n: number of bytes to fill
*
* Return: A pointer to the memory area s
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

/**
 * _calloc - Allocates memory for an array and initializes it with zero.
 * @nmemb: Number of elements to allocate.
 * @size: Size in bytes of each element.
 *
 * Return: A pointer to the allocated memory initialized to zero,
 *         or NULL if failed or if nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	return (NULL);

	_memset(ptr, 0, total_size);

	return (ptr);
}
