#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'print  number is positive or negative'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{printf("is positive%d\n", n); }
	else if (n < 0)
	{printf("is negative%d\n",n); }
	else
	{printf("is zero %d\n",n); }
	return (0);
}
