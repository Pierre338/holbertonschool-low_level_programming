#include "main.h"
/**
 * _strchr - loc c
 *
 * @s: s
 * @c: c
 *
 * Return: a pointer
 * @s. n
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
