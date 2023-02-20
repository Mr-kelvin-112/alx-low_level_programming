#include <stdio.h>
/**
 * main - printing alphabet and digits
 *
 * Return: 0 always(success)
 */

int main(void)
{
	int num = 48;
	char alpha;

	while (num <= 57)
	{
	putchar(num);
	num++;
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
		putchar('\n');
	return (0);
}
