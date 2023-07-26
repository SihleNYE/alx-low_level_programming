#include "main.h"

/**
 * print_line- print straight line
 *@n : input
 * Return: void
 */

void print_line(int n)

{
	int i;

		if (n <= 0)
	{_putchar('\n'); }

	else

	{
	for (int i = 1; i <= n; i++)

	{_putchar('_'); }

	_putchar('\n');
	}
}
