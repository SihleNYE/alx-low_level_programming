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

	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{	_putchar(ch * 48);
	


		for (ch = '0'; ch <= '9'; ch++)
		{       _putchar(ch * 50);

		}


	}

}
