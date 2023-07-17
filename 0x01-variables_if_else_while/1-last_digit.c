#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ln;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	if (n > 5)
		{printf("Last digit of%d ", n);
		printf(" is%d", ln);
		printf(" and is greater than 5\n");
		}
	else if (n== 0)
		{printf("Last digit of%d", n);
		printf(" is%d", ln);
		printf(" and is 0\n");}

	else if	(n < 6 && 0)
		{printf("Last digit of %d", n);
		printf(" is%d", ln);
		printf(" and is less than 6 and not 0\n");}
	return (0);
}
