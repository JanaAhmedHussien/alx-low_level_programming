#include "lists.h"
/**
 * string_length - function to measure the length of the string.
 *
 * @s: pointer to string we want to measure.
 *
 * Return: length of the string
 *
 */
int string_length(char *s)
{
int i = 0;
if (!s)
{
return (0);
}
while (*s++)
i++;
return (i);
}
/**
 * print_list - prints linked lists
 *
 * @h: pointer for the first node.
 *
 * Return: linked lists.
 */
size_t print_list(const list_t *h)
{
size_t j = 0;
while (h)
{
printf("[%d] %s \n", string_length(h->str), h->str ? h->str : "(nil)");
h = h->next_node;
j++;
}
return (j);
}
