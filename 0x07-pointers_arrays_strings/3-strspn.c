#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s:the first input of the function
 * @accept: the second input of the function
 *
 * Return: length of the first occurence char
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int consistC = 0;
int prevC;

while (*s)
{
i = 0;
prevC = consistC;
while (*(accept + i) != '\0')
{
if (*(accept + i) == *s)
consistC++;
i++;
}
if (prevC == consistC) /* didn't equal a char from accept */
break;
s++;
}
return (consistC);
}
