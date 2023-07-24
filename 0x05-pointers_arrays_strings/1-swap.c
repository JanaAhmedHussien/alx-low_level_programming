#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: the first input of the function
 * @b: the second input of the function
 *
 * Return: the two values swapped.
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
