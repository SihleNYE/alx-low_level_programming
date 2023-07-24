#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *@s : stores string value to reverse
 * Return: Void/Nothing
 */

	void print_rev(char *s)
{
	int slength = 0;
	int rev ;

	while (*s != '\0')
	{
		slength++;
		s++;
	}
		s--;

	for (rev = slength; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
