#include "main.h"
#include <stdlib.h>

/**
 * strdup - returns a pointer to a newly allocated space in memory
 * @str: string input to duplicate
 * Return: pointer to the array or NULL
 */

char *_strdup(char *str)
{
	int size = 0, j;
	char *s;

	if (str == NULL)
		return (NULL);

	while(str[size] != '\0')
		size++;

	s = (char *)malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		s[j] = str[j];
	}
	s[size] = '\0';
	return (s);
}
