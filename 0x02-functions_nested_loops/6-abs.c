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

	if (n > 0)

	{int sign = n * -1;
	_putchar(sign);
	return (-sign); }


	return (n);
}
