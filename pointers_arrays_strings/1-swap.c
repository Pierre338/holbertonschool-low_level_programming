#include "main.h"

/**
 * swap_int - change a to b
 * @a: value one
 * @b: value two
 * Return: Always 0.
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
