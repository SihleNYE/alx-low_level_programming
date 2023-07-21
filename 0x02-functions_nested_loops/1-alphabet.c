#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets a-z
 * @c: The character to print
 *
 * Return Success Always (0)
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	
	{_putchar(c);}

	_putchar('\n');

}
