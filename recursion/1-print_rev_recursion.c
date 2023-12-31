#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse w/ recursion
 * @s: the string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
