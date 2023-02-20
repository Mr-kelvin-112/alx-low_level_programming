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
	num++;
	putchar(44);
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
