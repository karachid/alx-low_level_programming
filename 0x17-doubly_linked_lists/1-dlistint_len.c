#include "lists.h"

/**
 * dlistint_len - calculates the list's size
 * @h: head of the list
 * Return: size_t (size of the list)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
