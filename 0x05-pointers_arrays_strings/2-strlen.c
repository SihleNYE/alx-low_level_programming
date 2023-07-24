#include "main.h"

/**
 *_strlen - get string length
 *
 * @s : stores chars from all string
 * Return: int length of string
 */

	int _strlen(char *s)

{
	int slength = 0;

	while (*s != '\0')
	{
		slength++;
		s++;
	}
	return (slength);
}
