#include "main.h"
int _sqrt(int n, int i);

/**
 * _sqrt_recursion - counts the square root
 * @n: integer
 * Return: int (SQRT)
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - main recursive function
 * @n: integer
 * @i: integer
 * Return: int (SQRT)
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_sqrt(n, i + 1));
	else
		return (-1);
}
