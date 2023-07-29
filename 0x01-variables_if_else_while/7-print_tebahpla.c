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
	int i;

	i = 122;
	while (i <= 97)
	{putchar(i + 48);
	i--;
	}
	putchar('\n');
	return (0);
}
