#include "main.h"


/**
 *_abs - Print absolute value i.e remove negative sign
 *@n : value of number
 * Description: ''
 *
 * Return: Always 0 (Success)
 */
	int _abs(int n)
{
	int sign = n * -1;

	if (n < 0)
		{_putchar(sign);
			return (sign);}
	if (n > 0)
		{_putchar(n);
			return (n);}

	return (0);
}
