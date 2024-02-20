#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* Positive anything is better than negative nothing */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*
	 * if (n > 0) {
	 * result = 'postitive';
	 * } else {
	 * result = 'zero'
	 * }else if {
	 *result = 'NOT positive';
	 */
	return (0);
}
