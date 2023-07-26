#include <stdio.h>

/**
 *Fizz_Buzz : 'Print 1-100 with fizzbuzz in between'
 *Return : Success Always (0)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{

		if (n % 3 == 0 && n % 5 == 0)
		{	printf(" fizzbuzz "); }
		else if (n % 5 == 0)
		{printf(" buzz "); }
		else if (n % 3 == 0)
		{printf(" fizz "); }
		else
		printf(" %d ", n);

	}
	printf("\n");
return (0);
}

