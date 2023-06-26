#include"main.h"

/**
 * print_rev - prints a string in reverse
 * @s : string to be printed
 * Return: void (NOTHING)
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i > 0)
		_putchar(str[i--]);

	_putchar('\n');
}
