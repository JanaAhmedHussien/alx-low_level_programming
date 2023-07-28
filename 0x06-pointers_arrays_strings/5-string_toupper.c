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
char *r = str;
while (*str)
{
if (*str >= 'a' && *str <= 'z')
*str -= 32;
str++;
}
return (r);


}
