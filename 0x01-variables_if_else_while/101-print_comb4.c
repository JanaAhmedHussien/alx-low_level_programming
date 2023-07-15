#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: printing three combination numbers.
 *
 * Return: 0 Always(success).
 */
int main(void)
{
int i, j, k;
for (i = 0; i <= 7; i++)
{
for (j = 1; j <= 8; j++)
{
for (k = 2; k <= 9; k++)
{
putchar(i + '0');
putchar(j + '1');
putchar(k + '2');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
