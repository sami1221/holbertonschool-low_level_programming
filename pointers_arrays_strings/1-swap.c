#include "main.h"
/**
 *swap_int - swaps the values of two integers
 *@a: pointer with adress of a
 *@b: pointer with adress of b
 */
void swap_int(int *a, int *b)
{
	int num = *a;

	*a = *b;
	*b = num;
}
