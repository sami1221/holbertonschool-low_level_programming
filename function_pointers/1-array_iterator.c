#include "function_pointers.h"
/**
 * array_iterator - function
 * @array: array of integers
 * @size: size of array
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action)
	{
		(action)(*array);
	}
	for (i = 0; i < size; i++)
	{
		(action)(*array);
		array++;
	}
}
