#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: takes the first argument in the function
 * @n: takes the second argument in the function
 *
 * Return: prints n elements of an array
 */
void print_array(int *a, int n)
{

int i;
for (i = 0; i < n; i++)
printf("%d", a[i]);

}
