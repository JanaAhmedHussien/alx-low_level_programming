#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: first input of the function
 * @b: second input of the function
 * @n:third input of the function
 *
 * Return: memory filling
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
char *start = s;

while (i < n)
{
*s++ = b;
i++;
}
return (start);

}
