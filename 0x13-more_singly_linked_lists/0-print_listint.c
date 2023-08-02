#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the items of a list
 * @h: head of linkedlist node
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
