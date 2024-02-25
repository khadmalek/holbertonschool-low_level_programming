#include "main.h"

/**
 *_abs - the absolute value of an integer
 *
 * @c: is the int that will be used for the function's argument
 *
 * Return: c or (c * -1)
 */

int _abs(int c)

{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}

