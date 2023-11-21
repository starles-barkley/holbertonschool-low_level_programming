#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_dlistint - prints all elements of a list_t list
  * @h: doubly linked list to print
  * Return: number of nodes in the list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
