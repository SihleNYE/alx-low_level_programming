#include "main.h"


/**
 *print_sign - prints the sign of a number
 *@n : value of number
 * Description: ''
 *
 * Return: Always 0 (Success)
 */

	int print_sign(int n)
{

if (n > 0)
		{_putchar('+');
		return (1); }
if (n == 0)
		{_putchar('0');
			return (0); }

if (n < 0)
		{_putchar('-');
			return (-1); }

	_putchar('\n');
	return (0);
}
