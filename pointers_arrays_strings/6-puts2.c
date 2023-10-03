#include "main.h"

/**
 * puts2 - prints 1 char/2 of a string
 *
 * @str: parameters for puts2
 *
 * Return: 0
 */

void puts2(char *str)
{
	int c;
	char l;

	for (c = 0; str [c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			l = str[c];
			_putchar(1);
		}
	}
	_putchar('\n');
}
