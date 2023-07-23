#include "main.h"


/**
 *jack_bauer - Entry point
 *
 * Description: 'Print all minutes of the day'
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int m1;
	int m2;
	int s1;
	int s2;

	for (m1 = 0; m1 <= 2; m1++)

	{
		for (m2 = 0; m2 <= 9; m2++)
		{
			for (s1 = 0; s1 <= 5; s1++)

			{
				for (s2 = 0; s2 <= 9; s2++)
				{
					if (m1 <= 2 && m2 >= 4)
					break;
				_putchar(m1 + 48);
				_putchar(m2 + 48);
				_putchar(58);
				_putchar(s1 + 48);
				_putchar(s2 + 48);
				_putchar('\n');
				}
			}
		}
	}


}
