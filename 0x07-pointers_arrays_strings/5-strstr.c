#include "main.h"
/**
 * _strstr - function that locates a substring.
 *
 * @haystack:the first input
 * @needle: the second input
 *
 * Return: substring located
 */
char *_strstr(char *haystack, char *needle)
{
char *occurance, *tempNeedle;
if (!*needle) /* empty needle */
return (haystack);
while (*haystack)
{
if (*haystack == *needle) /* first ch match */
{
occurance = haystack;
tempNeedle = needle;
while (*tempNeedle) /* check if match */
{
if (*haystack++ != *tempNeedle++)
{ /* not a match, reset pointer to first occurance */
haystack = occurance;
break;
}
}
if (occurance != haystack) /* didn't reset, found match */
return (occurance);
}
haystack++;
}
return (0);
}
