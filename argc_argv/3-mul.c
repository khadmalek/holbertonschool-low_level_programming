#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the result of a multiplication
 * @argc: parameter for the number of arguments
 * @argv: parameter for the list of arguments
 * Return: 0
 */

int main(int argc,char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		return (1);
	}

	res = num1 * num2;

	printf("%d\n", res);
	return (0);
	
}
