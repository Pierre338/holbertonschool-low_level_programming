#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of a number.
 *
 *@n: number
 *
 * Return: last digit of a number.
 */
int print_last_digit(int n)
{
	int ldn =  n % 10;

	if (ldn < 0)

	{

		ldn *= -1;
	}
	_putchar(ldn + 48);

	return (ldn);
}
