#include"main.h"

/**
 * _puts - prints a string
 * @str : string to be printed
 * Return: void (NOTHING)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		putchar(str[i++]);

	putchar('\n');
}
