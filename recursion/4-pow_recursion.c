#include "main.h"

/**
 * _pow_recursion - Calculates the power of a number recursively
 * @x: The base number
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y == 1)
		return (x);

	else
		return (x * _pow_recursion(x, y - 1));
}
