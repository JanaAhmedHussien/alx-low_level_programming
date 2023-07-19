#include "main.h"
/**
 * print_alphabet_x10 - print 10 lines have alphabets in lowercase
 */
void print_alphabet_x10(void)
{
int l, ch;
for (l = 0; l <= 9; l++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
