#include"main.h"

/**
 * puts_half - prints the second half of a string
 * @str : string to be used for printing
 * Return: void (NOTHING)
 */

void puts_half(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 0)
		c = c / 2;
	else
		c = ((c - 1) / 2) + 1;
	while (str[c] != '\0')
	{
		_putchar(str[c++]);
	}
	_putchar('\n');
}
