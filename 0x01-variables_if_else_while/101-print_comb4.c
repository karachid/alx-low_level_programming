#include <stdio.h>

/**
 * main - Entry point of the prog
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int l, r, k;

	for (l = 48; l < 56; l++)
	{
		for (r = l + 1; r < 57; r++)
		{
			for (k = r + 1; k < 58; k++)
			{
				putchar(l);
				putchar(r);
				putchar(k);
				if (l == 55 && r == 56 && k == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
