#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _strlen - Returns thr length of a string.
*
* @s: pointer to the string.
*
* Description: This function returns the length of thr string.
*
* Return: Length of the string.
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

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: Pointer to the newly allocated concatenated string, or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	concatenated = malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concatenated[i + j] = s2[j];
	}
	concatenated[i + j] = '\0';
	return (concatenated);
	free(concatenated);
}
