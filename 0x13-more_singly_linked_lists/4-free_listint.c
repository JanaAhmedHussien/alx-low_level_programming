#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer of the first node of list
 * Return: fred linked list.
 */
void free_listint(listint_t *head)
{
listint_t *node;
while (head)
{
node = head;
head = head->next;
free (node);


}
}
