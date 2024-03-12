#include "main.h"
#include <string.h>

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
 * _strdup - Duplique une chaîne de caractères.
 * @str: La chaîne de caractères à dupliquer.
 *
 * Description: La fonction _strdup alloue de la mémoire pour une nouvelle
 * chaîne de caractères, qui est une copie de la chaîne str. La mémoire
 * allouée doit être libérée par lappelant à l'aide de la fonction free().
 *
 * Return: Un pointeur vers la nouvelle chaîne de caractères, ou NULL si
 * str est NULL ou si l'allocation de mémoire a échoué.
 */

char *_strdup(char *str)
{
	char *dup_str;
	size_t length;

	if (str == NULL)
		return (NULL);

	length = strlen(str);

	dup_str = (char *)malloc((length + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	strcpy(dup_str, str);
		return (dup_str);
}
