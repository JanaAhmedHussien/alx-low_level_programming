#include "main.h"
/**
 * _memcpy - function that copies memory area.
 *
 * @dest: the first input for the function
 * @src: the second input for the function
 * @n: the third input for the function
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
char *start = dest;

while (i < n)
{
*dest++ = *src++;
i++;
}
return (start);








}
