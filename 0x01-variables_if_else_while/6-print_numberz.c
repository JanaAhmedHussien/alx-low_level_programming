#include <stdio.h>
/**
 * main - Entry point.
 *
 * Descrption: printing numberrs using putchat function.
 *
 * Return: 0 Always(success).
 */
int main(void)
{
int n = 0;
while (n <= 9)
{
putchar(n + '0');
n++;
}
putchar('\n');
return (0);
}
