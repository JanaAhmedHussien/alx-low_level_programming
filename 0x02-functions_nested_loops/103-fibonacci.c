#include "main.h"
/**
 * main - Entry point
 *
 * Descritption: finds and prints the sum of the even-valued terms,
 * 
 * Return: 0 Always(success)
 */
int main(void)
{
unsigned long f1 = 0, f2 = 1, sum;
float totalsum;
while (7)
{

sum = f1 + f2;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
totalsum += sum;

f1 = f2;
f2 = sum;
}
printf("%.0f\n, totalsum);
return(0)
}
