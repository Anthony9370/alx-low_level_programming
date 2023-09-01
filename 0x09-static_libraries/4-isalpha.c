#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: function parameter
 * Return: 1 if c is a letter, 0 if c is not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
