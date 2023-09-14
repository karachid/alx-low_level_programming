#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at some index
 * @head: head of the list
 * @index: index of the item to retrieve
 * Return: item at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}
