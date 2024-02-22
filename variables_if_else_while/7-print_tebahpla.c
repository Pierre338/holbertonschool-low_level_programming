#include <stdio.h>

/**
 * main - Print alphabet in reverse with putchar
 * Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar ('\n');

	return (0);
}
