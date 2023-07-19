#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to execute func on
 * @size: is the size of the array
 * @cmp:  is a pointer to the function for comparison
 * Return: int which is an index to the item
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
