#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: check the input of the function.
 *
 * Return: fuction returns 1 for alphabets and 0 otherwise.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
if (c >= 'A' && c <= 'Z')
return (1);
return (0);

}
