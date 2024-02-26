#include "main.h"

/**
 * print_numbers - write a function that prints the numbers, from 0 to 9, followed by a new line
 * @n: print numbers 0-9
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 9; n++)

	{
		_putchar(n);
		n++;

	}
	_putchar ('\n');


}
