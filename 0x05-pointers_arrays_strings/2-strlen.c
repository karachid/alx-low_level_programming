#include"main.h"

/**
 * _strlen - counts how many chars a string contains
 *
 * @s : string to be used for counting the number of chars
 *
 * Return : int (NUMBER OF CHARS)
 */
int _strlen(char *s)
{
        int count = 0;

        while(*s != '\0')
        {
                count++;
                s++;
        }
	return (count);
}
