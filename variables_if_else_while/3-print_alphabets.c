#include <stdio.h>

/**
 * main - Print alphabet lowercase uppercase
 * Return: 0
 */
int main(void)
{
	char letter = 'a';
	char Letter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (Letter <= 'Z')
	{
		putchar(Letter);
		Letter++;
	}
	putchar ('\n');

	return (0);
}
