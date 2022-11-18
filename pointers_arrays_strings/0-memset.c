#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @b: variable
 * @s: pointer
 * @n: unsigned variable
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
