#include "search_algos.h"

/**
 * advanced_binary_recursive - Implements advanced binary recursive
 * @array: Input array
 * @left: The starting index
 * @right: The ending index
 * @value: The value to search for.
 * Return: Index of value if it exists, -1 otherwise
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Implements advanced search
 * @array: Input array
 * @size: Size of the input array
 * @value: The value to search for
 * Return: Index of value if it exists,-1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
