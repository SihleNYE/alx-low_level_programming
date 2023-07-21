#include "main.h"

/**
 *_islower- Entry point
 *
 * Description: 'checks for lowercase character and return 1'
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{	c = 0;	

	if(c > 97 && c < 123)
	{return (1); }

	else
	{return(0);}
}
