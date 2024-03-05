#include "main.h"

/**
 * _strlen_recursion - l
 * @s: s
 * Return: On success 1.
 * Error -1
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
