#include "main.h"

/**
* _strcmp - function compare that compare two strings.
* @s1: parameter for string 1
* @s2: parameter for string 2
* Return: Always 0.
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	a++;
	}
	return (0);
}
