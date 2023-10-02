#include "main.h"
/**
 * print_numbers - prints numbers
 *
 * Return: void
 */
void prints_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('n/');
}
