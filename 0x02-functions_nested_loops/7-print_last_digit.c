#include "main.h"


/**
 *main - Entry point
 *
 * Description: ''
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{        

	int result;

	result = n % 10;
	if (result > 0)
	{_putchar(result +48); 
	return (result); }
	else
	{_putchar((-result + 48)); 
	return (-result);}
}
