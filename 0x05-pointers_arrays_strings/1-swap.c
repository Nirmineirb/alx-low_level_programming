#include "main.h"
#include <stdio.h>

/**
 * swap_int -  a function that swaps the values of two integers
 *
 * @a: input parameter
 * @b: iput parameter
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;
		
	temp = *a;
	*a = *b;
	*b = temp;
}
