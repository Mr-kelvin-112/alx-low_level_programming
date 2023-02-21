#include "main.h"

/**
 * main - using _putchar to print a word
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int i;
	char ch[] = "_putchar\n";

	for (i = 0; i < 9; i++)
		_putchar(ch[i]);
	return (0);
}
