#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning
 *
 * @head: address of the pointer of the head
 * @str: the second of the function
 *
 * Return: list with the added node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
if (!head || !new_node)
return (NULL);
if (str)
{
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->len = string_length(new_node->str);
}
new_node->next = *head;
*head = new_node;
return (new_node);
}
