#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer of the head of linked lists
 * Return: freed linked list
 */
void free_listint2(listint_t **head)
{
listint_t *node, *temp;
if (!head)
return;
node = *head;
while (node)
{
temp = node;
node = node->next;
free(temp);
}
*head = NULL;
}
