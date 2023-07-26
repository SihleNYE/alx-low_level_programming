#include "main.h"

/**
 * positive_or_negative - Check if @n is + or - or zero
 *@n : input integer
 * Description: 'print  number is positive or negative'
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{

	if (i > 0)

	{printf("%d", i);
	printf(" is positive\n"); }
	else if (i < 0)
	{	printf("%d", i);
	printf(" is negative\n"); }
	else{ printf("%d", i);
	printf(" is zero\n"); }
	
}
