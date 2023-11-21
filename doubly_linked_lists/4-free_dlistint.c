#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: start of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
