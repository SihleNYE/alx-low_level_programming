#include "main.h"


/**
 *Print_last_digit - Calculate and print last digit
 *
 *Description: ' Calculate Print Last digit of number,
 *
 * n is assigned to a value called results,that value has
 * the modulus operation of n % 10,which grabs the last dig
 * it of the n value. Finally we return result and add 48 
 * which is the ascii value of 0 ar the add of the digit. '
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
