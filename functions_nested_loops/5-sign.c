#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: argument is a sign that recive
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
