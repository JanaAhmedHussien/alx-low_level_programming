#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: first input
 * @src: second input
 * @n: third input
 */
char *_strncat(char *dest, char *src, int n)
{
int c, c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
dest[c + c2] = src[c2];
dest[c + c2] = '\0';
return (dest);
}
