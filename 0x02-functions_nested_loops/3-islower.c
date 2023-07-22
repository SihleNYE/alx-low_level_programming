#include "main.h"

/**
 *_islower- Entry point
 *
 * Description: 'checks for lowercase character and return 1'
 *@c :integer returns ascii value
 * Return: Always 0 (Success)
 */

int _islower(int c)
{	c = 0;	

	if (c >= 97 && c <= 122)
	{return (1); }


	return (0);
}
