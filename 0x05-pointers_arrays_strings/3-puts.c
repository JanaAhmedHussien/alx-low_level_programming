#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @str: takes the input for the function
 *
 * Return: printing string followed by new line
 */
void _puts(char *str)
{
int ctr;
for (ctr = 0; *str != '\0'; str++)
_putchar(str[ctr]);


}
_putchar('\n');
