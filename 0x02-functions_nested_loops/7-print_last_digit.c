#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: 'Calc and Print last digit of number'
 *
 *@n :integer stores number value to calculate
 *
 * Return: Results (Last Value)
 *
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
