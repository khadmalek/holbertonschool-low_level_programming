#include <stdio.h>

/**
* main - Entry point
*
* Description: program prints all possible combinations of single-digit numbers
*
* Return: 0
*/

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar(',');
	putchar(' ');
	putchar('\n');

	return (0);
}
