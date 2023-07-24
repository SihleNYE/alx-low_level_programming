#include "main.h"

/**
 * reset_to_98 - check the code
 *Description - 'Change pointer value in parameter'
 * @n : stores pointer value
 * Return: Void
 */

void reset_to_98(int *n)
{
	int p = *n;

	p = 98;

	_putchar(p);
	_putchar('\n');
}
