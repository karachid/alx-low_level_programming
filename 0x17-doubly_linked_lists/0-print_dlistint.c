#include "lists.h"

/**
 * print_dlistint - prints a list
 * @h: head of the list
 * Return: size_t (size of the list)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
