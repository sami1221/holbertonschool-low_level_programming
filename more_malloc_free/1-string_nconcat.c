#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: string
 * @s2: second string
 * @n: bytes of second string
 * Return: NULL if fails, ptr if success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int j;
	int i;
	int l;
	unsigned int k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l = 0; s1[l] != '\0'; l++)
		;
	for (j = 0; s2[j] != '\0' && j < n; j++)
		;
	ptr = malloc(((l + j) + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (k = 0; s2[k] != '\0' && k < n; k++)
	{
		ptr[i] = s2[k];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
