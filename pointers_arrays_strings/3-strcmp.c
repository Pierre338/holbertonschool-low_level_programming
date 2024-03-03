#include "main.h"
/**
 * _strcmp - 2 string
 *
 * @s1: in
 * @s2: in
 *
 * Return: 0 or minus
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
