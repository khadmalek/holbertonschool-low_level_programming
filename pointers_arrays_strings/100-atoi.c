#include "main.h"
#include <limits.h>

/**
*_atoi - convert a string.
*
*@s: pointer
*
*Desccription: function that converter a srting to an integer.
*/

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
		s++;

	if (*s == '-' || *s == '+') 
	{
		if (*s == '-')
		sign = -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && (*s - '0') > (INT_MAX % 10)))
		{
            		return (sign == 1) ? INT_MAX : INT_MIN;
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return sign * result;
}
