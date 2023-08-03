#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: 0 based index of the bit to be set
 * @n: pointer number of i
 * Return: 1 if successful, or -1 if an error occures
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
