#include "main.h"
#include <string.h>

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

	dup_str = (char *)malloc((length) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	strcpy(dup_str, str);
		return (dup_str);
}
