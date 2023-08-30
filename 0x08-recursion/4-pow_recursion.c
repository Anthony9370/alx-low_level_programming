#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: function parameter 1
 * @y: function parameter 2
 * Return: result of raised to the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
