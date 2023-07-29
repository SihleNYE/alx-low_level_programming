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

	char z;
	char a = 'a';

	for (z = 'z'; z >= a; z--)
	{
	putchar(z);
	}
	putchar('\n');
	return (0);
}
