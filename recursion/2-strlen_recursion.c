#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Return length of string recursion style
 * @s: The string
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
