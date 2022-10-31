#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size:  size of array
 * @array: array of integers
 * @cmp: pointer
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp)
	{
		if (array)
		{
			if (size <= 0)
			{
				return (-1);
			}
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
