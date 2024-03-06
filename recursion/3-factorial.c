#include "main.h"

/**
 * factorial - Computes the factorial of a number
 * @n: The number to compute the factorial of
 *
 * Return: The factorial of n, or -1 if n is negative
 *         If n is 0 or 1, returns 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);

	else
		return (n * factorial(n - 1));
}
