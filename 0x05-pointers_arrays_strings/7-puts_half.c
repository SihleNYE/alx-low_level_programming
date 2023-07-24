#include "main.h"

/**
 * puts_half - a function that prints half of a string
 *
 * if odd len, n = (length_of_the_string - 1) / 2
 *
 * @str: input
 *
 * Return: Void.
 */

void puts_half(char *str)

{

	int full;
	int half;
	int slength;

	slength = 0;


	for (full = 0; str[full] != '\0'; full++)
	{
		slength++;
	}

		half = (slength / 2);


		if ((slength % 2) == 1)

		{half = ((slength + 1) / 2);
		}

	for (full = half; str[full] != '\0'; full++)

	{	_putchar(str[full]);
	}

		_putchar('\n');
}
