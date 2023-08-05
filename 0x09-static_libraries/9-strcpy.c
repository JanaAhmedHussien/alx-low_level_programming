#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 *
 * @dest: take the first argument for the function
 * @src: take the second argument for the function
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j;
while (src[i])
i++;
for (j = 0; j < i; j++)
dest[j] = src[j];
dest[i] = '\0';

return (dest);



}
