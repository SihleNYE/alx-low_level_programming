#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: 'Skipping elements inside a loop '
 *
 * Return: Always 0 (Success)
 */

int main(void)


{	int i;

	i  = 97;

	while (i <= 122)
	{
	if (i == 101 || 113)
		{	i++;
			continue;
		}
	putchar(i);
		i++;
	}
	putchar('\n');
return (0);

}
