#include "main.h"
/**
 * print_line - function for printing lines
 * uses _putchar
 *
 * @n: int input
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
