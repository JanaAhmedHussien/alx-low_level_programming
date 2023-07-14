#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print a specific string using the write function
 *
 * Return: 1 (indicating the program did not succeed)
 */
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quote, sizeof(quote) - 1);
return (1);
}

