#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: amount of bytes to allocate
 * Return: a pointer to the allocated memory or 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
