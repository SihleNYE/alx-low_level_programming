#include "main.h"


/**
 *main - Entry point
 *
 * Description: ''
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int min;
	int hour;

	for (min =0; hour <24 ;hour++)

		{
			for (min = 0; min <= 59; min++)
				{
					_putchar(hour);
					_putchar(':');
					_putchar(min);

				}
		}
	


}
