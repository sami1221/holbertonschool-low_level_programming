#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum parameters of function
 * @n: number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int c;

	va_list(args);

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (c = 0; c < n; c++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);

}
