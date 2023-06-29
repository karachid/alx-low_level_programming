#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: int array
 * @n: size of the array
 */

void reverse_array(int *a, int n)
{
	int i, swap;

	for (i = 0 ; i < n / 2 ; i++)
	{
		swap = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = swap;
	}
}
