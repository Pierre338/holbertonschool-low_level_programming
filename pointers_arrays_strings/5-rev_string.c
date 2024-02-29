#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void rev_string(char *s)

{
	int i, j, k;

	char temp;

	for (i = 0; s[i] != '\0'; i++)

	{
	}

	k = i - 1;

	for (j = 0; j < i / 2; j++)

	{
		temp = s[j];
		s[j] = s[k];
		s[k] = temp;
	k--;

	}
}
