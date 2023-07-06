#include "main.h"

/**
 * _strlen_recursion - counts length of a string
 * @s : pointer to the string
 * Return: int (NUMBER OF CHARS)
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
