#include "main.h"
/**
 * _islower - check if the alphabets is in lowercase or not
 *
 * @c: checks the input of the function
 *
 * Return: return 1 if c is lowercase otherwise always 0(success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);

}
