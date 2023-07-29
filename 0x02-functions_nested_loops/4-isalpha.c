#include "main.h"


/**
 *_isalpha -  checks for alphabetic character
 *@c: returns ascii value
 * Description: 'Returns zero if not uppercase'
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{

	if (c >= 'A' && c <= 'Z')

	{	return (1); }
	else
	return (0);
}
