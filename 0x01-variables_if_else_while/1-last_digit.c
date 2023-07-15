#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there 7*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5) 
		{printf("Last digit of ", n, "is greater than 5\n";)}
	else if (n <6 && > 0)
		{Printf("Last digit of ", n, "is less than 6 but not zero\n");}
	else if (n = 0)
		{printf("Last digit of ", n, "is zero\n");}
	return (0);
