#include "main.h"

/**
 * _pow_recursion - x to y
 * @x: n
 * @y: p
 *
 * Return: 1.
 * -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
