#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input pointing to a string of 0 and 1 char
 * Return: unsigned int that represent the result of conversion, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res;

	res = 0;
	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		res <<= 1;
		if (b[i] == '1')
			res += 1;
	}

	return (res);
}
