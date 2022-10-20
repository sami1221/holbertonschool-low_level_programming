#include <stdio.h>
/**
 * main - print number of arg
 * Return: 0
 * @argc: num of arguments
 * @argv: pointer to arg
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)**argv;
	return (0);
}
