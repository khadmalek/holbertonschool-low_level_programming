#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers.
 * @n: resepresents the number of arguments
 * @separator: resepresents the seperator b/w the numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
		va_list args;
		unsigned int i;

		va_start(args, n);

		for (i = 0; i < n; i++) 
		{
				printf("%d", va_arg(args, int));

				if (separator != NULL && i != n - 1)
				{
						printf("%s", separator);
				}
		}

		va_end(args);

		printf("\n");
}
