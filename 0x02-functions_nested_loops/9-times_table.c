#include "main.h"

/**
 *times_table - Entry point
 *
 * Description: 'Display 9 x 1 to 9 x 9 table'
 *
 * Return: Void/Nothing
 */

void times_table(void)
{
	const int n = 9;
	int a;
	int b;


	for (a = 0; a <= n; a++)
	{
		for (b = 2 * a; b <= 2 * n; b++)
		{

			_putchar(b + 48);
		}

			_putchar('\n');
	}
}
