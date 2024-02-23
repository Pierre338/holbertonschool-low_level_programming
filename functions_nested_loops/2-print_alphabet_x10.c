#include "main.h"

/**
 * print_alphabet_x10 : print x10 alphabet
 * Description : print_alphabet
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char letter = 'a';

	for (n = 0; n <= 10; n++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar ('\n');
	}
}
