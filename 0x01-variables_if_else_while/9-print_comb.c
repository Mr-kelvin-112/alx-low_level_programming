#include <stdio.h>
/**
 * main - printing combinations of single-digit number
 *
 * Return: 0 always(success)
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
	putchar(num);
	if (num != 57)
	{
	putchar(44);
	putchar(' ');
	}
	num++;
	}
	putchar('\n');
	return (0);
}
