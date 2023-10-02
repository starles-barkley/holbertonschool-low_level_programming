#include "main.h"

/**
 * print_square - prints a square of size
 *
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar('#');
				b++;
			}
		b = 0;
		a++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
