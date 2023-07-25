#include "main.h"

/**
 * more_numbers - print (0-14) ten times
 *
 * Return: Void
 */
	void more_numbers(void)
{
	char x;
	char y;

	for (x = '0'; x <= '9'; x++)
	{
	for (y = '0'; y <= 14; y++)
	{	_putchar(x);
	}
		_putchar('\n');
	}
}
