#include "main.h"

/**
 * print_diagonal - print diaginal line in std io
 *@n : input number of times to print line
 * Return: Void.
 */

void print_diagonal(int n)

{

	if (n <= 0)

	{

		_putchar('\n');

	} else

	{

		int i;
		int j;


	for (i = 0; i < n; i++)

	{

		for (j = 0; j < n; j++)

			{

			if (j == i)

				_putchar('\\');

			else if (j < i)

				_putchar(' ');

			}

				_putchar('\n');

	}

	}

}
