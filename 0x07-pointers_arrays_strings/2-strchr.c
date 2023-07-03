#include"main.h"

/**
 * _strchr - locates a char in a string
 * @s: string to use for searching
 * @c: a char to search for
 * Return: pointer to char if found, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == '\0')
		return (NULL);
	return (s[i]);
}
