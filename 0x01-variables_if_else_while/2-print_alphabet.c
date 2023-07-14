#include <stdio.h>
/**
 * main - Entry point of program c
 *
 * Description: printing  chars in lowercase of alphabitics.
 *
 * Return: 0 always(success)
 */
int main(void)
{
char al = 'a';
while (al <= 'z')
{
putchar(al);
al++;
}
putchar('\n');
return (0);
}
