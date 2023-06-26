#include"main.h"
#include<stdio.h>

/**
 * print_array - prints the array of size n
 * @a : int array
 * @n : size of the array
 * Return: void (NOTHING)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
