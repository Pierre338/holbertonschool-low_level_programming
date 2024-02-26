#include "main.h"

/**
 * more_numbers(void) - print 10 times 0-14
 *
 * Return: Always 0.
 */

	void more_numbers(void)

{
	int i, n;

		for (i = 0; i < 10; i++)

		{

			for (n = 0; n < 15; n++)

				{

					if (n < 10)

					{

						_putchar('0' + n);

					}

					else

					{
					_putchar('1');
					_putchar('0' + n - 10);
					}
				}
			_putchar('\n');
		}
}
