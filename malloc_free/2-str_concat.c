#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: NULL if fails, pointer if success
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, p, d;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	s3 = malloc(sizeof(char) * ((a + b) + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}

	for (p = 0; p < a; p++)
	{
		s3[p] = s1[p];
	}

	for (d = 0; (p + d) < (a + b); d++)
	{
		s3[p + d] = s2[d];
	}

	return (s3);
}
