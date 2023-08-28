#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: function value 1
 * @b: function value 2
 * @n: function value 3
 * Return: changed arrays with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
