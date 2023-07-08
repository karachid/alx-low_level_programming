#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument's number
 * @argv: arguments values
 *
 * Return: Always 0 (SUCCESS)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
