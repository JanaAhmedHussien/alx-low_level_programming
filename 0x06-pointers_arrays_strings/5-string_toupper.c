#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters.
 *
 * @'': first input to the fun
 *
 * Return: letters to uppercase
 */
char *string_toupper(char *)
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
