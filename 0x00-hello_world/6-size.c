#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * return: 0
 */
int main(void)
{
char a;
int b;
long int;
long long int d;
float;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)/n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byted(s)\n", (unsigned long)sizeof(f));
return (0);
}
