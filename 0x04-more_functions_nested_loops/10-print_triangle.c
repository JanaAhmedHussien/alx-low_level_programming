#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 *
 * @size: takes input from the function
 *
 * Return: # triangle
 */
void print_triangle(int size)
{
int x, y, z;
if (size <= 0)
{
_puttchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = size - x; y > 1; y--)
{
_putchar(32);
}

for (z = 0; z <= x; z++)
{
_putchar(35);
}

_putchar('\n');
}
}
}
