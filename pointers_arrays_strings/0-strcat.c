#include "main.h"

/**
 * *_strcpy - copy the string pointed to by pointer src to the buffer pointed to by dest
 * @dest: char type string
 * @src: char type string
 * Return: pointer to dest 
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
