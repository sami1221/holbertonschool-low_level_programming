#include <stdlib.h>
/**
 *_strdup - returns a pointer to new string which is a copy of str
 *@str: initial string
 *Return: NULL if fails, pointer if success
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *punt;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	punt = malloc(sizeof(char) * (j + 1));

	if (punt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		punt[i] = str[i];
	}
	return (punt);
}
