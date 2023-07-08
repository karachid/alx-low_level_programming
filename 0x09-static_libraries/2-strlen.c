#include"main.h"

/**
 * _strlen - counts number of chars
 * @s : string to be used for counting
 * Return: count (NUMBER OF CHARS)
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
