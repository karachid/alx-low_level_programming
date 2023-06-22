#include "main.h"
/**
 * print_number - prints a number
 * @n: an interger parameter
 * Return: Always 0 (SUCCESS)
 */
void print_number(int n)
{
	unsigned int  c;

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
	}
	else if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		print_number(n);
	}
	else if (n < 10)
	{
		c = n + 48;
		_putchar(c);
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
