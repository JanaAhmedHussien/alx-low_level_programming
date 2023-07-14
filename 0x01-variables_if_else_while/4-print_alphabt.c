#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: skipping letter durind printing alphabets
 *
 * Return: 0 always(success)
 */
int main(void)
{
char al = 'a';
while (al <= 'z')
{
if (al == 'q' || al == 'e')
al++;
putchar(al);
al++;
}
putchar('\n');
return (0);
}
