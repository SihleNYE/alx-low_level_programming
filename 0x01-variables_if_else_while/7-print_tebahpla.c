#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: 'Decrementing the alphabet loop  '
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	char z = 'z';
	char a = 'a';

	while (z >= a)
	{
	z--;
	putchar(z);
	}
	putchar('\n');
	return (0);
}
