#include <stdio.h>

/**
*main - program that prints all single digit numbers of base 10 starting from 0
*
*Return:0
*/

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
