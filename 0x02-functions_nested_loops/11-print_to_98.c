#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - 'Print from input up to 98'
 *@n : input to increment
 *
 *
 * Return: void
 */
	void print_to_98(int n)
{	
	int i;
	i = 98;


	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			printf(",");
		}
	}

	if (n < 98)
	{
		for (; n <= 98; n++)
		{ if (n == i)
			{
				
				printf("%d,%d",n, i);
			}
			
			
		}
	}

	if (n == i)
	{
		printf("%d", i);
	}

		printf("\n");
}
