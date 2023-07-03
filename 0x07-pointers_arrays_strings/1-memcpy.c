#include"main.h"

/**
 * _memcpy - copies n bytes from src into dest
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: represents how many bytes should be copied
 * Return: pointer to the string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
