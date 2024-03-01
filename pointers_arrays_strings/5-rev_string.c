#include "main.h"
#include <string.h>

/**
*rev_string - Reverse a string
*
*@s: thr string to be reversed
*
* Description: function reverses the order of characters in the given string.
* It takes a string as input and modifies it in place to reverse thr order
*/

void rev_string(char *s)
{
	int length = 0;
	int i, j;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
