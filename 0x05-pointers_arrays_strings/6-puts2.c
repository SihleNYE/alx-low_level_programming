#include "main.h"

/**
 * puts2 - prints inputs value from string
 *@str :  stores return value
 * Return: Void.
 */

	void puts2(char *str)
{
	int slength = 0;
	int arrSize = 0;
	char *addr = str;
	int rslt;

	while (*addr != '\0')
	{
		addr++;
		slength++;
	}
		arrSize = slength - 1;

	for (rslt = 0; rslt <= arrSize; rslt++)
	{
		if (rslt % 2 == 0)
		{
			_putchar(str[rslt]);
		}
	}
			_putchar('\n');
}
