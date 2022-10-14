#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destiny
 * @src: source
 * @n: bytes
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n);
int x, y;
{
	for (x = 0; dest[x] != '\0'; x++)
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
