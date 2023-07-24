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
		{
			printf("%d ", n);
			printf(",");
		}
	}

	if (n == 98)
	{
		printf("%d", n);
	}

		printf("\n");
}
