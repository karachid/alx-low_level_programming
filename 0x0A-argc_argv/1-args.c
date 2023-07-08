#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument's number
 * @argv: arguments values
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
