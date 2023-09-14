#include "lists.h"

/**
 * sum_dlistint - calculates the sum of items in a list
 * @head: head of the list
 * Return: int (sum)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *c = head;
	int s = 0;

	while (c)
	{
		c = c->next;
		s = s + c->n;
	}
	return (s);
}
