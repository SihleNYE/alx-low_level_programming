#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: 'Evaluate the last number of random input'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	if (ln > 5)
		{printf("Last digit of %d is %d and is greater than 5\n", n, ln); }


	else if	(ln > 6 && ln != 0)
	{printf("Last digit of %d is %d and is greater than 5\n", n, ln); }

	else
	{printf("Last digit of %d is %d and is 0\n", n, ln);
	}

	return (0);
}
