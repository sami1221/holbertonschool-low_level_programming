#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char chars;

	for (chars = 97; chars <= 122; chars++)
		putchar(chars);
	for (chars = 65; chars <= 90; chars++)
		putchar(chars);
	putchar('\n');

	return (0);
}
