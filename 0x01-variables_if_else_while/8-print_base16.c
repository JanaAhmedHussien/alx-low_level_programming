#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 Always(success).
 */
int main(void)
{
int n = 0;
while (n <= 15)
{
putchar(n + '0');
n++;

}
putchar('\n');
return (0);
}
