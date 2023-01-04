#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print sum of a diagnols in a matri
 * @a: is the name of array
 * @size: is the size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int j;
	int i;
	int y;
	int z;

	/* y is the sum of main diagnoa */
	y = 0;
	/* z is the sum of minor diagnol */
	z = 0;
	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			y = y + a[i];
			printf("sum of main diagnol is %d: ", y);
			z = z + a[j];
			printf("sum of minor diagnol is %d", z);
		}
	}
}
