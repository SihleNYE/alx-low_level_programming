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
	const char n = '9';
	 char a = '0'
	 char b = '2'

	for (a = '0' ; a <= n; a++)
	{
		for (b = b * a; b <= b * n; b++)
		{
			_putchar(a);
			_putchar(b);
		}

			_putchar('\n');
	}
}
