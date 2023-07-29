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
	{

		char ch;

		int i;



		i = 0;


	while (i < 10)

	{

			ch = 'a';

		while (ch <= 'z')

			{

				_putchar(ch);

				ch++;

			}

		_putchar('\n');

				i++;

	}
}
