#include "main.h"

/**
 * print_numbers - prints digits 0, 9 except 2, 4
 * @n : variable and exception
 * Return: 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)

	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
	}
	}
	_putchar ('\n');

}
