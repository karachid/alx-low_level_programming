#include"main.h"

/**
 * print_rev - prints a string in reverse
 * @s : string to be printed
 * Return: void (NOTHING)
 */

void rev_string(char *s)
{
	int l = 0,r = 0;
	char c;

	while (s[r] != '\0')
	{
		r++;
	}
	r--;
	while (l < r)
	{
		c = s[l];
		s[l] = s[r];
		s[r] = c;
		l++;
		r--;	
	}
}
