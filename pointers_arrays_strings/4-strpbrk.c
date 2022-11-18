#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: a pointer or NULL if no byte found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
