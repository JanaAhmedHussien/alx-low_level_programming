#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: takes input from function
 *
 * Return: 0 Always(success)
 */
void puts2(char *str)
{
int i = 0;
int j;
while (str[i])
i++;

for (j = 0; j < i; j += 2)
{
_putchar(str[j]);

}
_putchar('\n');

}
