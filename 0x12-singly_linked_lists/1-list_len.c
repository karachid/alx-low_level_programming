#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns a list of nodes
 * @h: header of a list
 * Return: returns number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
