#include "main.h"

/**
 * print_alphabet_x10 -print lowercase  a-z 10 tim * es in nested loop
 *
 * Description: 'print the alphabet'
 *
 * Return: Always 0 (Success)
 *
 */

	void print_alphabet_x10(void)
{		char i;
		char j;

	for (i = '0'; i <= '10'; i++)
	{ 
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
	
			_putchar('\n');
		}
	}
}
