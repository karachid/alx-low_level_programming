#include "main.h"

/**
 * *_strcpy - copies src into dest
 * @dest: destination string
 * @src: source string
 * Return: array of char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
