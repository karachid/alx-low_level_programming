#include "main.h"

/**
 * factorial - counts length of a string
 * @n : input integer
 * Return: int (n!)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
