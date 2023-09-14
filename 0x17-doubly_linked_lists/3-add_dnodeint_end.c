#include "lists.h"

/**
 * add_dnodeint_end - adds an item at the end
 * @head: head of the list
 * @n: new item to be added at the end
 * Return: dlistint_t (adresse of the new item)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node = NULL, *c = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	while (c->next)
		c = c->next;

	c->next = new_node;
	new_node->prev = c;

	return (new_node);
}
