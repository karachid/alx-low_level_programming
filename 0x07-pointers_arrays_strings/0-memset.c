#include"main.h"

/**
 * _memset - sets n bytes of s by b
 * @s : pointer to the string
 * @b : byte to be set
 * @n : represents how many bytes should be set
 * Return: pointer to the string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
