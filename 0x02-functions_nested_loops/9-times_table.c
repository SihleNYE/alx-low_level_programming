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
	int LstDgt;
	int Mtply;

	for (Num1 = 0; Num1 <= 9; Num1++)
	{
	for (Num2 = 0; Num2 <= 9; Num2++)
	{
		rslt = Num1 * Num2;
	if (rslt > 9)
	{
		LstDgt = rslt % 10;
		Mtply = (rslt - LstDgt) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(Mtply + 48);
		_putchar(LstDgt + 48);
	}
	else
	{
		if (Num2 != 0)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		}
		_putchar(48);
	}


	}
	}

		_putchar('\n');

}




