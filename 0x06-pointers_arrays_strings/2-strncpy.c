#include"main.h"

/**
 * _strncpy - copies n chars of src into dest
 * @dest: first argument
 * @src: second argument
 * @n: third param
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
