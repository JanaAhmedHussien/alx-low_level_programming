#include "main.h"
/**
 * print_rev - function  a string, in reverse, followed by a new line.
 *
 * @s: takes input of the function.
 *
 * Return: returns a reverse string.
 */
void print_rev(char *s)
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
