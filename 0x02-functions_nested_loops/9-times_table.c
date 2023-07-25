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
	const char n = 57;
	char a;
	char b;


	for (a = 48; a <= n; a++)
	{
		for (b = 2 * a; b <= 2 * n; b++)
		{
			_putchar('a');
			_putchar('b');
		}

			_putchar('\n');
	}
}
