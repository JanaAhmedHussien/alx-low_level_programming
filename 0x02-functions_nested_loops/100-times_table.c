#include "main.h"


/**
 * print_times_table - Print the n times table, starting with 0.
 * @n: The number of times table to print.
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}

int num, mult, prod;
for (num = 0; num <= n; num++)
{

for (mult = 0; mult <= n; mult++)
{
prod = mult * num;
if (mult == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');
if (prod <= 9)
{
_putchar(' ');
_putchar(' ');
}
else if (prod <= 99)
{
_putchar(' ');
}
_putchar((prod / 100) + '0');
_putchar(((prod / 10) % 10) + '0');
_putchar((prod % 10) + '0');
}
}
_putchar('\n');
}
}

