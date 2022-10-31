#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: char
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
