#include "main.h"
/**
 * _memcpy - m
 * @dest: s
 * @src: s
 * @n: l
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
