#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
*/

int main(void)
{
	int l, r;

	for (l = 0; l <= 98; l++)
	{
		for (r = l + 1; r <= 99; r++)
		{
			putchar((l / 10) + '0');
			putchar((l % 10) + '0');
			putchar(' ');
			putchar((r / 10) + '0');
			putchar((r % 10) + '0');

			if (l == 98 && r == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
