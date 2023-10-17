#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: character to check
 *
 * Description: will return length of a string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
