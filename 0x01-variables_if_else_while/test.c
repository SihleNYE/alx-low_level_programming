#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	float nl = n %10
	if (nl>5){
		printf("Last digit of", n);
		printf(" is%.2f", nl);
		printf(" and is greater than%d\n", 5);}
	else if (n<0){
		printf("Last digit of%d", n);
                printf(" is%.2f", nl);
                printf(" and is equal to zero%d\n", 0);}
		
	else
	{	printf("Last digit of", n);
                printf(" is%.2f", nl);
                printf(" and is less than 6 and not 0 %d\n");}
                
	return (0);
}
