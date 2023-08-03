#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: input of the function
 * @value: sqrt
 *
 * Return: square root of n
 */
int _help(int n, int value);
int _sqrt_recursion(int n)
{
return (_help(n, 1));
}
/**
 * _help - help main function
 *
 * @n: first input
 * @value: second input
 *
 * Return: square root fot the main function
 */
int _help(int n, int value)
{
if (value * value == n)
return (value);
else if (value * value < n)
return (_help(n, value + 1));
else
return (-1);
}
