#include"main.h"
#include<stddef.h>

/**
 * _strspn - locates a char in a string
 * @s: input string
 * @accept: accept argument
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int len, i, j;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (len);
		}
	}
	return (len);
}
