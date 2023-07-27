#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list -  frees a list
 * @head: header of a list
 * Return: void (NOTHING)
 */

void free_list(list_t *head)
{
	list_t *c;

	while (head != NULL)
	{
		c = head;
		head = head->next;
		free(c->str);
		free(c);
	}
}
