#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char of array
 * Return: NULL if fails, array if success
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
