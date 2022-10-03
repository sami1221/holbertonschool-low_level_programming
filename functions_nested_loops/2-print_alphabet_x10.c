#include "main.h"
/**
 * print _alphabet_x10 - print 10 times alphabet
 */
void print_alphabet_x10(void)
{
	int alph, time = 0;

	while (time < 10)
	{
		for (alph = 97; alph <= 122; alph++)
		{
			_putchar(alph);
		}
		time++;
		_putchar(10);
	}
}
