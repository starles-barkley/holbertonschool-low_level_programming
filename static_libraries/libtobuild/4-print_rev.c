#include "main.h"

/**
 * print_rev - prints a string in reverse with new line
 * @s: declaration of s & parameters for function
 * Return: 0
 */

void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	for (c = c - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
