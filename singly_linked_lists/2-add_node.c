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
