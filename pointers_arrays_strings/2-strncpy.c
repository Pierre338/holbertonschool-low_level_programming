#include "main.h"

/**
 * _strncpy - cop
 *
 * @dest: a
 *
 * @src: b
 *
 * @n: n
 *
 * Return: nada
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)

	dest[i] = '\0';


	return (dest);
}
