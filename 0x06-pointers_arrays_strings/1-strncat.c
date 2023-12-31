#include"main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first argument
 * @src: second argument
 * @n: third param
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		if (n)
		{
			dest[i] = src[j];
			i++;
			j++;
			n--;
		}
		else
			break;
	}
	dest[i] = '\0';
	return (dest);
}
