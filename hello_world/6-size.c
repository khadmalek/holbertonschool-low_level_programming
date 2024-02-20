#include <stdio.h>

/**
* main - entry
*
* Description'prints the size various types compiled and run on'
*
* Return: Always 0
*/

int main(void)
{
	printf("Size of int:%lu byte(s)\n", sizeof(int));
	printf("Size of short:%lu byte(s)\n", sizeof(short));
	printf("Size of long:%lu byte(s)\n", sizeof(long));
	printf("Size of long long:%lu byte(s)\n", sizeof(long long));
	printf("Size of float:%lu byte(s)\n", sizeof(float));
	Return(0);
}
