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
putchar(n);
n++;
if (n == '10')

n = 'a';
putchar(n);
n++;


}
putchar('\n');
return (0);
}
