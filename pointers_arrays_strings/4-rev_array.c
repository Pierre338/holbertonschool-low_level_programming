#include "main.h"

/**
 * reverse_array - switch
 *
 * @a: a
 * @n: n
 *
 * Return: i to s
 */

void reverse_array(int *a, int n)
{

	int i, temp;

	i = 0;
	temp = 0;

	n -= 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
