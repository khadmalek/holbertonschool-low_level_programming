#include "main.h"

/**
*puts_half - prints half of a string
*
*@str: a pointer
*
*Description: function that prints half of a string
*/

void puts_half(char *str)
{
	int length = 0;
	int is_even_length;
	int start_index;
	int i;

	if (str == NULL || *str == '\0')
	{
		return;
	}

	while (str[length] != '\0')
	{
		length++;
	}

	is_even_length = length % 2 == 0;

	if (is_even_length)
	{
		start_index = length / 2;
	}

	else
	{

		start_index = (length + 1) / 2;
	}

	for (i = start_index; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
