#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head of the list
 * @n: new item to add
 * Return: new head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (*head);
}
