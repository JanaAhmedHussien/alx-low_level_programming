#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: printing alphabetically in lowercase then upper case.
 *
 * Return: 0 Always(success)
 */
int main(void)
{
char al = 'a';
char Al = 'A';
while (al <= 'z')
{
putchar(al);
al++;
}
while (Al <= 'Z')
{
putchar(Al);
Al++;
}
putchar('\n');
return (0);
}
