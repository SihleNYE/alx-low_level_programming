#include "main.h"


/**
 *_isalpha -  checks for alphabetic charac
 *@c returns ascii value 
 * Description: 'Returns zero if not uppercase'
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	

	if (c >= 65 && c <= 90 ||c <= 97 && c >= 122)
		{
			return (1);
			_putchar('\n');
		}

	return (0);
		
        



}
