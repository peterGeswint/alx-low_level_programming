#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int i = 0;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

while (str[i] != '\0')
i++;
new->str = strdup(str);
new->len = i;
new->next = *head;
*head = new;
return (new);
}
