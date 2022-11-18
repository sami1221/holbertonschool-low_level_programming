#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destiny
 * @src: source
 * @n: bytes
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p = 0;
	int i = 0;

	for (; dest[i] != '\0' ; i++)
		;
	for (; p < n && src[p] != '\0' ; p++)
	{
		dest[i] = src[p];
		i++;
	}
	return (dest);
}
