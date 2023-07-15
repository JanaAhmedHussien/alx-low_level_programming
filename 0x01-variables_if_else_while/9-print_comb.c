#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: printing single digits with connections.
 *
 * Return: 0 Always(success).
 */
int main(void)
{
int n = 0;
while (n <= 9)
{
putchar(n + '0');
putchar(',');
putchar(' ');
n++;

}
putchar('\n');
return (0);
}
