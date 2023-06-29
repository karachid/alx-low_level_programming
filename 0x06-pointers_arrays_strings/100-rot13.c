#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: input string
 * Return: output encoded string
 */

char *rot13(char *c)
{
	if ((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M'))
		*c += 13;
	else if ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z'))
		*c -= 13;
	return (c);
}
