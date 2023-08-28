#include "main.h"
/**
 * _strchr - locates a characters in a string
 * @s: function value 1
 * @c: function value 2
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
