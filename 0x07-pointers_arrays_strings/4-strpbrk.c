#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: function parameter 1
 * @accept: function parameter 2
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
