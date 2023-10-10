#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Print sum of two diagonals of a square matrix.
 * @a: pointer to the square matrix (1D array).
 * @size: size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int primary_diag_sum = 0;
	int secondary_diag_sum = 0;
	int i = 0;

	while (i < size)
	{
		primary_diag_sum += a[i * size + i];
		secondary_diag_sum += a[i * size + (size - 1 - i)];
		i++;
	}
	printf("%d, ", primary_diag_sum);
	printf("%d\n", secondary_diag_sum);
}
