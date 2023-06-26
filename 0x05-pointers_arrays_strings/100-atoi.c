#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @str: input string
 * Return: int (RESULT OF CONVERSION)
 */

int _atoi(char *str)
{
	int sign, i;
	unsigned int res;

	res = i = 0;
	sign = 1;
	while (!(str[i] <= '9' && str[i] >= '0') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
