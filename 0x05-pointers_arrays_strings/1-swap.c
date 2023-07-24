#include "main.h"

/**
 *swap_int - check the code
 *Desscription - 'swaps the values of two integers'
 *@a : Stores value of type int to swap
 *@b : int value to swap
 * Return: Void
 */

	void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
