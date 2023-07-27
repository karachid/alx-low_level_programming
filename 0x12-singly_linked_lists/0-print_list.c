#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints a list
 * @h: header of a list
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("%s", "[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}
	return (s);
}
