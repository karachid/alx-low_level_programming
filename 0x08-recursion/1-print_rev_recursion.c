#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s : pointer to the string to print
 * Return: void (NOTHING)
 */

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
