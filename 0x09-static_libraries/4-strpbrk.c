#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: the first input for the function
 * @accept: the second input of the function
 *
 * Return: the first occurence of any char in a string
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
i = 0;
while (*(accept + i) != '\0')
{
if (*(accept + i) == *s)
return (s);
i++;
}
s++;
}
return (0);

}
