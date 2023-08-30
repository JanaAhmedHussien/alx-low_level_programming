#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer of the first node of linked lists
 * @index: index of the node, starting at 0
 * Return: index
 *
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int n;
for (node = head, n = 0; node && n < index; node = node->next, n++)
;
return (node);
}
