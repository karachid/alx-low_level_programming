#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: argument's number
 * @argv: arguments values
 *
 * Return: Always 0 (SUCCESS)
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
