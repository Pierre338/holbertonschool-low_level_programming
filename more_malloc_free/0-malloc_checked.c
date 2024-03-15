#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a m
 * @b: u i
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
