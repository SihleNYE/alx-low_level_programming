#include "main.h"


/**
 *_isalpha -  checks for alphabetic character
 *@c returns ascii value
 * Description: 'Returns zero if not uppercase'
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 90 )

	{	return (1); }

	if (c <= 97 && c >= 122)

	{	return (1);

	}

	return (0);
}
