#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: function parameter 1
 *@src: function parameter 2
 *@n: function parameter 3
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
