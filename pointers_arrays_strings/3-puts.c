#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: the string
 *
 * Return: length of string
 */

void _puts(char *str)
{
	int i = o;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
