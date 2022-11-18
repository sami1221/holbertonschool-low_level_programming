#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @i: pointer
 * Return: i
 */
char *string_toupper(char *i)
{
	int p;

	for (p = 0; i[p] != '\0'; p++)
	{
		if (i[p] <= 'z' && i[p] >= 'a')
		{
			i[p] = i[p] - 32;
		}
	}
	return (i);
}
