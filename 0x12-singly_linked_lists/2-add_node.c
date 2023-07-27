#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - adds a node at the beginning of the list
 * @head: header of a list
 * @str: string to be duplicated
 * Return: new header
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = (list_t *) malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
