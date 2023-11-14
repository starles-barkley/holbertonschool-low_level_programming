#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - free a `listint_t` list
  * @head: head of linked list
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
