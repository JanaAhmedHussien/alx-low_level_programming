#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: takes input from function
 *
 * Return: numbers from n to 98
 */
void print_to_98(int n)
{
int c;
if (n < 98)
for (c = n; c < 98; c++)
printf("%d, ", c);
else
for (c = n; c > 98; c--)
printf("%d, ", c);
printf("98,\n");
}
