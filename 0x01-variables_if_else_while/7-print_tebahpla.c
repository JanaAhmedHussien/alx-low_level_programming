#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: mirror alphabets.
 *
 * Return: 0 Always(success).
 */
int main(void)
{
char al = 'z';
while (al <= 'a')
{
putchar(al);
al--;
}
putchar('\n');
return (0);
}
