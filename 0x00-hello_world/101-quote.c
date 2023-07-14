#include <stdio.h>
/**
 * main - entry point
 *
 * description: print without using any function as printf or puts but we can use write function
 *
 * return: 1 (not success)
 */
int main(void)
{
char quotes[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quotes, 59);
return (1);
}
