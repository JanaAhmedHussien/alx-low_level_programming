#include "main.h"
/**
 * print_sign -  function that prints the sign of a number.
 *
 * @n: check input of the function
 *
 * Return: 1 and prints + if n is greater than zero
 *         otherwise 0 and prints 0 if n is zero
 *         -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
if (n == 0)
{
putchar('0');
return (0);

}
putchar('-');
return (-1);
}
