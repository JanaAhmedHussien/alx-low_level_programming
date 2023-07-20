#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: takes input from function
 *
 * Return: numbers from n to 98
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
_putchar(i);
if (i == 98)
{
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
}
putchar('\n');
}
if (n > 98)
{
for (int i = n; i <= 98; i--)
{
_putchar(i);

if (i == 98)
{
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
}
putchar('\n');
}
