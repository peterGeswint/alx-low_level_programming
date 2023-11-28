#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to head of list_t list
 *
 * Return: void
 */

void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
