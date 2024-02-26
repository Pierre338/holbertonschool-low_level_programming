#include "main.h"

/**
  * _isupper - a function that checks for uppercase character
  *
  * @c: is a letter uppercase
  *
  * Return: On 0 or 1
 */

int _isupper(int C)
{

	if (C >= 'A' && C <= 'Z')
	{
		return (1);
	}
	return (0);
}
