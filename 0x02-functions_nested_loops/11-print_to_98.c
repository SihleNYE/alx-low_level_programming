#include "main.h"

/**
 *print_to_98 - 'Print from input up to 98'
 *@n : input to increment
 *
 *
 * Return: void
 */
	void print_to_98(int n)
{
	do {
		_putchar(n);
		_putchar('\n');

		n++;
		}
	while (n < 99);

}
