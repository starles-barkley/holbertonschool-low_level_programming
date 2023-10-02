#include "main.h"
/**
 * _isdigit - checks for digit 0-9
 *
 * @c: the character to check
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
