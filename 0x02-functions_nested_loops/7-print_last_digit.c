#include "main.h"


/**
 *Print_last_digit - Calculate and print last digit
 *
 *Description: ' Calculat Print Last digit of number
 *
 * @n : store value of last digit
 *
 * Return: Results ,the last value of digit.
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
