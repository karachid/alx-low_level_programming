#include "lists.h"

/**
 * sum_dlistint - calculates the sum of items in a list
 * @head: head of the list
 * Return: int (sum)
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		head = head->next;
		s += head->next;
	}
	return (s);
}
