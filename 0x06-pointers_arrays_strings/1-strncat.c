#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: the first input of the function
 * @src: the second input of the function
 *
 * Return: returns concatenated string
 */
char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
while (dest[c])
{
c++;
}
for (c2 = 0; src[c2]; c2++)
dest[c++] = src[c2];

return (dest);
}
