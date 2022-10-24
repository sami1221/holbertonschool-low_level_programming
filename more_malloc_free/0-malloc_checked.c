#include "main.h"
/**
 *malloc_checked - allocates memory using malloc
 *@b: length
 *Return: pointer if success, 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	if (b < 1)
	{
		exit(98);
	}
	pointer = malloc(b);
	
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
