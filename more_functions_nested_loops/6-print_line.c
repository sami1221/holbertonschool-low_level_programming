#include "main.h"
/**
 * print_line - draws a line
 *@n: number of times characters
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
