#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name to be printed
 * @f: pointer to the name to be printed
 * Return: void (NOTHING)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
