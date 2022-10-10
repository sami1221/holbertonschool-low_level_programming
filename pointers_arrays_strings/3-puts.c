#include "main.h"

/**
 *_puts - function that prints a string, followed by a new line, to stdout.
 *@str: string
 *Return : @str
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[1] != '\0'; i++)
	{
		_putchar(str[1]);
	}
	_putchar('\n');
}
