#include "main.h"
#include <string.h>
#include <stdlib.h>

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
	unsigned int i;
	size_t length;

	length = _strlen(str);

	if (str == NULL)
		return (NULL);

	dup_str = (char *)malloc((length + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		dup_str[i] = str[i];
	}

	dup_str[length] = '\0';
		return (dup_str);

	free(dup_str);
}
