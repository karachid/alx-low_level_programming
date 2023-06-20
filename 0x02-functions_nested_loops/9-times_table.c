#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void (NOTHING)
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			p = j * i;
			if (j == 0)
				_putchar(p + '0');
			if (p < 10 && !j == 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
