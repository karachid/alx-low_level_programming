#include"main.h"
#include<stddef.h>

/**
 * _strchr - locates a char in a string
 * @s: string to use for searching
 * @c: a char to search for
 * Return: pointer to char if found, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
