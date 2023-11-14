#include "lists.h"
#include <stdlib.h>
/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
  * add_node - add new nodes to the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *content;
	list_t *new;


