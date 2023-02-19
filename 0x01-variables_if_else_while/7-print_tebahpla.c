#include <stdio.h>
/**
 * main - printing alphabet in reverse
 *
 * Return: 0 always(success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
