#include"main.h"

/**
 * rev_string - reverses a string
 * @s : string to be reversed
 * Return: void (NOTHING)
 */

void rev_string(char *s)
{
	int l = 0, r = 0;
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
