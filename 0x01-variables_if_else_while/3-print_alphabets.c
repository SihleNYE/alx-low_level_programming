#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: ' Print Alphabets using ASCII from a-Z '
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int lower;
	int upper;

	lower = 97;
	upper = 65;

	while (lower <= 122)
	{	putchar(lower);

		lower++;	}

	while (upper <= 90)
	{	putchar(upper);

		upper++;	}
		putchar('\n');
	return (0);
}
