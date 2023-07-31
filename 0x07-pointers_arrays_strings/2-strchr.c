#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 *
 * @s: the first input of the function
 * @c: the second input of the function
 *
 * Return: locates a character in a string
 */
char *_strchr(char *s, char c)
{

int i = 0;

while (*(s + i))
{
if (*(s + i) == c)
return (s + i);
i++;
}
if (*(s + i) == c)
		
return (s + i);
return (NULL);


}
