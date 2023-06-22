#include <stdio.h>

/**
 * main - Entry point that prints largest prime factor of 612852475143
 * Return: Always 0  (SUCCESS)
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i = 2;
	unsigned long largest_prime_factor = 0;

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			n /= i;
			largest_prime_factor = i;
		} else
		{
			i++;
		}
	}
	if (n > largest_prime_factor)
		largest_prime_factor = n;
	printf("%ld\n", largest_prime_factor);
	return (0);
}
