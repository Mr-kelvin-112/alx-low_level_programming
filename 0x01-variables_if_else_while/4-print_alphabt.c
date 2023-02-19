#include <stdio.h>
/**
 * main - printing alphabet and ! printing e & q
 *
 * Return: 0 always(success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if ((alpha != 'q') && (alpha != 'e'))
		putchar(alpha);
	}
		putchar('\n');
	return (0);
}
