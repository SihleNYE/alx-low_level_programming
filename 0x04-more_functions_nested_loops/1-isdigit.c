#include "main.h"

/**
 * _isdigit - check if char value is 1-9 or not in ASCII
 *@c : input value in integer
 *
 * Return: (1) if True or (0) if False.
 *
 */

	int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{return (1); }
	else
	{return (0); }

}
