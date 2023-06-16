#include <stdio.h>

/**
 * main - Entry point of the prog
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int l, r;

	for (l = 48; l < 57; l++)
	{
		for (r = l + 1; r < 58; r++)
		{
			putchar(l);
			putchar(r);
			if (l == 56 && r == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
