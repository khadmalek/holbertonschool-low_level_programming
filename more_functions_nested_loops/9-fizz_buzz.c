#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * This function is the entry point of the program.
 * It iterates through numbers from 1 to 100,
 * replacing multiples of 3 with "Fizz", multiples of 5 with "Buzz",
 * and multiples of both 3 and 5 with "FizzBuzz".
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
