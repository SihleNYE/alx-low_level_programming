#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: 'Iterating a list of numbers  '
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int j;

	j = 0;

	do {	printf("%d", j);
		j++;		}

	while (j < 10);

	printf("\n");

	return (0);
}
