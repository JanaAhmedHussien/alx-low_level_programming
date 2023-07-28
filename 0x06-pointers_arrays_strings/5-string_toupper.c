#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters.
 *
 * @str: first input to the fun
 *
 * Return: letters to uppercase
 */
char *string_toupper(char *str)
{
char *r = s;

while (*s)
{
if (*s >= 'a' && *s <= 'z')
*s -= 32;
s++;
}
return (r);


}
