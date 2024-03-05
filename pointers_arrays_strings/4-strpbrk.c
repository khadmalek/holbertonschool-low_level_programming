#include "main.h"

/**
 * _strpbrk - Locates a character in a string
 * @s: The string to be searched
 * @accept: The string to be compare
 * Return: A pointer to the byte in s
 * NULL if the character is not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
