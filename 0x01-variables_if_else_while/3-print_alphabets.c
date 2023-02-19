#include <stdio.h>
/**
 * main - printing with putchar to output a lowercase and uppercase alphabet
 *
 * Return: always 0 success
 */
int main(void)
{
	char loweralpha, upperalpha;

	for (loweralpha = 'a'; loweralpha <= 'z'; loweralpha++)
	{
	putchar(loweralpha);
	}
	for (upperalpha = 'A'; upperalpha <= 'Z'; upperalpha++)
	{
	putchar(upperalpha);
	}
	putchar('\n');
	return (0);
}
