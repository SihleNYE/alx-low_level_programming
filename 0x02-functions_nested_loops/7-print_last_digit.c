#include "main.h"


/**
 *Print_last_digit - Calculate and print last digit
 *
 * @n : store value of last digit
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{        

	int result;

	result = n % 10;
	if (result > 0)
	{_putchar(result + 48);
	return (result); }
	else
	{_putchar((-result + 48));
	return (-result); }
}
