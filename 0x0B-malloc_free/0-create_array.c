#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and array and intializes it
 * @size: size of the array to be created
 * @c: character to use for initializing the array
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
