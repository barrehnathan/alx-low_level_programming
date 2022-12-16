#include "main.h"
/**
 *print_diagonal - to prints diagonal line
 * @n: Is the number of times
 *
 * Return: 0 value
 */
void print_diagonal(int n)
{
	int p;
	int q;

	for (p = 0; p < n; p++)
	{
		if (n <= 0)
		{
			break;
		}
		else
		{
			for (q = 0; q < p; q++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
