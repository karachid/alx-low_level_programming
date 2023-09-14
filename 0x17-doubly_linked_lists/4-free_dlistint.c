#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the list
 * Return: void (NOTHING)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *c = head;

	while (head)
	{
		c = head;
		head = head->next;
		free(c);
	}
}
