#include "search_algos.h"

/**
 * print_array - displays an array
 * @array: input array
 * @l: left index
 * @r: right index
 * Return: void (NOTHING)
 */
void print_array(int *array, int l, int r)
{
	int i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - implements binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: input value to search for
 * Return: int (index of the item, -1 otherwise)
 */
int binary_search(int *array, size_t size, int value)
{
	int m, l = 0, r = size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		if (value > array[m])
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
