#include "lists.h"
/**
 * listint_len - function forthe number of elements in a linked listint_t list.
 * @h: pointer of the first node
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;

}
return (i);
}
