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
char n = '0';
while (n <= 'f')
{


if (n == '9')
{
putchar(n);
n = 'a';
}
putchar(n);
n++;


}
putchar('\n');
return (0);
}
