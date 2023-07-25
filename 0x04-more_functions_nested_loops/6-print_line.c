#include "main.h"

/**
 * print_line- print straight line
 *@n : input
 * Return: Always 0.
 */

void print_line(int n)
{	
	char l;

	for (n = 0; n > 0; n++)
	{	if (l == n)
		{ 
			for (l = '0'; l > '0'; l++)
			{ _putchar('_'); }
			else
			{
				_putchar('\n');
			}
		}
	}
}
