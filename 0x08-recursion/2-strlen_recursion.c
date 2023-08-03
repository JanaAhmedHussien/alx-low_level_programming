#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: input of the function
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
int l = 0;
if (*s > '\0')
{
l += _strlen_recursion(s + 1) + 1;
}
return (l);

}
