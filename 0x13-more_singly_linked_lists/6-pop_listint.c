#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list returns head
 * @head: pointer of the first node
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *node;
int n;
if (!head || !*head)
return (0);
node = (*head)->next;
n = (*head)->n;
free(*head);
*head = node;
return (n);
}
