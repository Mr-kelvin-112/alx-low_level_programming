#include "main.h"
/**
 * print_most_numbers - printing most numbers
 *
 * Return: 0 always success
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}
			_putchar('\n');
}
