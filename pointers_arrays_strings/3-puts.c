#include "main.h"

/**
 * _puts - string fllw line to stoudt
 * @str
 * Return: Always 0.
 */

void _puts(char *str)

{

	while (*str != '\0')

	{
		_putchar(*str++);

		_putchar('\n');
	}

}
