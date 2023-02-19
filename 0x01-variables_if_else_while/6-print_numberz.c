#include <stdio.h>
/**
 * main - printing num through aascii table using the code
 *
 * Return: 0 always(success)
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
	putchar(num);
	num += 1;
	}
	putchar('\n');
return (0);
}
