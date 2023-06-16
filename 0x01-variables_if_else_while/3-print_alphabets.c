#include <stdio.h>

/**
 * main - Entry point of the prog
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}
	for (c = 65; c < 91; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
