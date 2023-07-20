#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 *
 * @c: takes input of the function
 *
 * Return: return 1 for uppercase otherwise 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);

}
