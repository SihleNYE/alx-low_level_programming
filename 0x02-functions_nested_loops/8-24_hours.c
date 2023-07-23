#include "main.h"


/**
 *main - Entry point
 *
 * Description: ''
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int min;
	int hour;

	for (hour =0; hour < 24; hour++)

	{for (min = 0; min <= 59; min++)
	{_putchar(hour);
	_putchar(':');
	_putchar(min); }
_putchar('\n'); }

}
