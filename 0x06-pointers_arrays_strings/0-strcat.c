#include "main.h"

/**
 * _strcat - concetenate two strings/join two strings into one.
 *@dest : input
 *@src : input
 *Return: combined string
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	

	
	while (src[j] != '\0')
	{
		i++;
		j++;
	}}
	dest[i] = '\0';

	return (dest);
}
