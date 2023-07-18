#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 *0c: the character to print
 *
 * Description: printing a word to appear on the screen.
 *
 * Return: on success 1
 *         on error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)

{
return (write(1, &c, 1));
}
