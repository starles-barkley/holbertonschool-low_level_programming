#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Checks if a character is an alpha character.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is letter, lowercase ir uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
