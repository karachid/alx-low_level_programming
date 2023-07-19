#include "function_pointers.h"

/**
 * array_iterator - prints a name
 * @name: pointer to name to be printed
 * @f: pointer to the name to be printed
 * Return: void (NOTHING)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for(i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
