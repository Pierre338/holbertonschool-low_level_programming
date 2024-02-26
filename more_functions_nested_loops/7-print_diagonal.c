#include "main.h"

/**
 * print_diagonal - print diagonal
 *@n : variable
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
