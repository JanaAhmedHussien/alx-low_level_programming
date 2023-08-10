#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: input of the function
 *
 * Return: allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *m = malloc(b);
if (m == NULL)
exit(98);
return (m);

}