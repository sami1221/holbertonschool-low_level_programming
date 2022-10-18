#include "main.h"
/**
 * _sqrt_recursion- calculate natural square root of n
 * @n: number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return _sqrt_recursion2(n, 0);
}
/**
 * _sqrt_recursion2- aux function
 * @n: number
 * @i: square root of n
 */
int _sqrt_recursion2(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_recursion2(n, i + 1));
	if (i * i > n)
	{
		return (-1);
	}
}
