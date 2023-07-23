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
	return ((result +48)* -1);
	else 
	return (result + 48);
	
}
