#include "main.h"

/**
 * str_checker - checks if two given strings are identical
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @i: left index
 * @j: helper index
 * Return: int (1 if s is palindrome, 0 otherwise)
 */

int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - check if strings could be considered identical
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: int (1 if are considered identical)
 */

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
