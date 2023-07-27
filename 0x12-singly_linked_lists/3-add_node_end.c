#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: header of a list
 * @str: string to be duplicated
 * Return: new header
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tmp;

	if (str == NULL)
		return (NULL);

	newNode = (list_t *) malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = newNode;
	return (newNode);
}
