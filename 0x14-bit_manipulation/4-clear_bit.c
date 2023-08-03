#include "main.h"

/**
 * clear_bit - clear the value of a bit a given index.
 * @n: num  of i
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it successful, or -1 if an error occures
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
