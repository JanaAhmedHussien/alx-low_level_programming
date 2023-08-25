#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 *
 * @head: first parameter of the function
 *
 * Return freed list
 */
void free_list(list_t *head)
{
list_t *node;
while (head)
{
node = head->next;
free(head->str);
free(head);
head = node
}
}
