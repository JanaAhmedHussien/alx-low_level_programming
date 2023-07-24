#include "main.h"
/**
 * rev_string - function  a string, in reverse, followed by a new line.
 *
 * @s: takes input of the function.
 *
 * Return: returns a reverse string.
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
char temporary;
while (s[i])
i++;
for (j = 0; j < (i /2); j++)
{
temporary = s[j];
s[j] = s[i-1-j];
s[i-1-j] = temporary;
}
}
