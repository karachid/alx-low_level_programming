#include "main.h"
/**
 * _isalpha - checks if a param is an alphabet
 * @c: - parameter to check
 * Return: 1 if the param is alpha, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
