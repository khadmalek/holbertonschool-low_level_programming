#include "main.h"

/**
*_isalpha - function to check for alphabetic character
*
*@c: used for the argument of the function
*
*Return: 1 if c is letter, 0 if otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') | (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
