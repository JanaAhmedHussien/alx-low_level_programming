#include "main.h"
/**
 * flip_bits - number of bits flip to get from one number to another.
 * @n: first parameter
 * @m: second parameter
 * Return: flip bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_number = n ^ m;
unsigned int c = 0;
while (xor_number)
{
if (xor_number & 1ul)
c++;
xor_number = xor_number >> 1;
}
return (c);
}
