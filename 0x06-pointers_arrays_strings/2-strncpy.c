#include "main.h"
/**
 * _strncpy - function that copies a string.
 *
 * @dest: first input.
 * @src: second input.
 * @n: third input.
 *
 * Return: retur copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int ctr;
for (ctr = 0; ctr < n && src[ctr] != '\0'; ctr++)
dest[ctr] = src[ctr];
while (ctr < n)
{
dest[ctr] = '\0';
ctr++;
}
return (dest);

}
