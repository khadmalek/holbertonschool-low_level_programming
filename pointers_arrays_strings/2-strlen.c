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
