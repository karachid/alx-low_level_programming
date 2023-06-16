#include <stdio.h>

/**
 * main - Entry point of the prog
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int c;

	for (c = 122; c >= 97; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
