#include "main.h"
/**
 * *_strcpy - copies string pointed to by src to buffer pointed to by dest
 * @dest: the pointer to a string
 * @src: the pointer to a buffer
 * Return: the value of the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
