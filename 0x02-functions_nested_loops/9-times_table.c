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

	int Num1;
	int Num2;
	int rslt;
	

	for (Num1 = 0; Num1 <= 9; Num1++)
	{
		for (Num2 = 0; Num2 <= 9; Num2++)
		{
			rslt = Num1 * 9;
			_putchar(rslt);
		}

			_putchar('\n');
	}



}

