#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - Checks if an int is prime
 * @n: integer
 * Return: int (1 if n is a prime number, 0 otherwise)
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime  - recursive function
 * @n: integer
 * @i: integer
 * Return: int (1 if n is a prime number, 0 otherwise)
 */

int _prime(int n, int i)
{
	if (i >= n && n >= 2)
		return (1);
	else if (n % i == 0 || n < 2)
		return (0);
	else
		return (_prime(n, i + 1));
}
