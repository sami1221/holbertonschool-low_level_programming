#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @n: numbers of integers
 * Return: numbers and separator in between
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int num = 0;
	va_list args;

	va_start(args, n);
	
	if(!separator)
	{
		separator = "";
	}
	for (; i < n; i++)
	{
		num = va_arg(args, int);
		if (i == n - 1)
		{
			printf("%d", num);
		}
		else
			printf("%d%s", num, separator);
	}
	printf("\n");
	va_end(args);
}
