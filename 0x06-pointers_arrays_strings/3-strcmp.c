#include "main.h"
/**
 * _strcmp - function that compares two strings.
 *
 * @s1: first input
 * @s2: second input
 *
 * Return: 0 ifthey are te same
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 - *s2 != 0)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
return (0);
}
