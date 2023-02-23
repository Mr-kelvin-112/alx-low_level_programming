#include "main.h"
/**
 * print_alphabet_x10 -> printing alphabet in 10 line using _putchar
 *
 * Return: 0 always (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int num;

	for (num = 0; num < 10; num++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
	}
return;
}
