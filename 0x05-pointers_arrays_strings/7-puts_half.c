#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: takes input for the function
 *
 * Return: print half of the string
 */
void puts_half(char *str)
{
int i = 0;
while (str[i])
i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');

}
