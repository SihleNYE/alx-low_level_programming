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
		{printf("Last digit of%d ", n);
		printf(" is%d", ln);
		printf(" and is greater than 5\n "); }
	else if (ln == 0)
		{printf("Last digit of%d ", n);
		printf(" is%d ", ln); }

	else if	(ln < 6 && ln > 0)
		{printf("Last digit of %d ", n);
		printf(" is%d ", ln);
		printf(" and is less than 6 and not 0\n"); }

	return (0);
}
