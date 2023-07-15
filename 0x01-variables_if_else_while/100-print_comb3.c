#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: printing two of all possible values.
 *
 * Return: 0 Always(success).
 */
int main(void)
{
int n = 0;
int n2 = 1;
while (n <= 9)
{

if (n != 9)
{
putchar(',');
putchar(' ');
}
while (n2 <= 8)
{
putchar(n);
putchar(n2);
n2++;
}
n++;
}
putchar('\n');
return (0);
}
