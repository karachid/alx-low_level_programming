#include <stdio.h>

/**
 * main - Entry point of the prog
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
