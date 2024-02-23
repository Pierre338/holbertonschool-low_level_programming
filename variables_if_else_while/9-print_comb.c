#include <stdio.h>

/**
 * main - Print all single digits in all combinations
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)

	{

		putchar(n + '0');

		if (n <= 10)

		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar ('\n');

	return (0);
}
