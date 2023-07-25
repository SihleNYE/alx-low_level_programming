#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers- 'prin (0-9) ; skip 2 and 4'
 *
 * Return: Void
 */
int main(void)
{
        void print_most_numbers(void)

{
        char c;

        for (c = '0'; c <= '9'; c++)
        {
                if (c == '2' && c == '4')
                        {continue;
                        putchar(c);    }
                else
                        {break; }
        }
        _putchar('\n');
}

	return (0);
	}
