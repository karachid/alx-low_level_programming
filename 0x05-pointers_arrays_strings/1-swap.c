#include"main.h"

/**
 * swap_int - swapss two ints
 *
 * @a : first int
 * @b : second int
 *
 * Return : void (NOTHING)
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
