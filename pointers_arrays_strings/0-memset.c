#include "main.h"
/**
 * _memset - f
 *@s: one
 *@b: two
 *@n: three
 *
 * Return: c
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
