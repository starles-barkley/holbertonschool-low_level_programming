#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculate factorial of number with recursion.
 * @n: Number for factorial calculation
 * Return: Factorial of the number, or -1 if n is negative.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
