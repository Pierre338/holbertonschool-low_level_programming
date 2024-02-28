#include "main.h"

/**
 * _strlen - return length
 * b stand for string lengh
 *@i : string
 * Return: Always 0.
 */

int _strlen(char *s)

{
	int b = 0;

	while (*s != '\0')

	{
		b++;
		s++;
	}

	return (b);
}
