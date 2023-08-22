#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: function parameter 1
 * @b: function parameter 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
