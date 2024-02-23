#include <stdio.h>

/**
 * main - Print ascii 16
 * Return: 0
 */
int main(void)
{
	int n;
	char letter = 'a';

	for (n = '0'; n <= '9'; n++)

	{

		putchar(n);

	}

	while (letter <= 'f')

	{
		putchar(letter);
		letter++;
	}

	putchar ('\n');

	return (0);
}
