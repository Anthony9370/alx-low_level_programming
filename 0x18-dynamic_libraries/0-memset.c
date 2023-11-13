#include "main.h"
/**
 * _memset - fills a block of memory with a specific value
 * @s: function parameter
 * @b: function parameter
 * @n: function parameter
 * Return: changed array with new value
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
