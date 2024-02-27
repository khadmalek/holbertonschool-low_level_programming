#include "main.h"

/**
*swap_int - Swaps the values of two integers.
*@a: Pointer to the first integer.
*@b: Pointer to the second integer.
*
*Description:  This function swaps the values of two integers pointed
*It does not return anything.
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
