#include "main.h"

/**
 * print_numbers - prints digits 0 9
 * @n: n est la variable digit
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)

	{
		_putchar(n + '0');

	}
	_putchar ('\n');

}
