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
while (s[i])
i++;
while (i--)
{
_putchar(s[i]);

}
_putchar('\n');
}
