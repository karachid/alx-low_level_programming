#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c : an integer param
 *
 * Return: returns 1 if a character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
