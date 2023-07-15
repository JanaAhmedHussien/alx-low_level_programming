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
int i, j;
for (i = 0; i <= 8; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
if (j == 9 && i == 8)
{
putchar('\n');
}
}
}
return (0);
}

