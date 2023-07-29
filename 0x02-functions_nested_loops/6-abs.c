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

		{_putchar('+');

		return (n); } 
		
		else if (n == 0)

		{

			_putchar(48);

		return (n);

		} 
		
		else if (n < 0)
		{

			_putchar('-');

		}

		return (1);
}
