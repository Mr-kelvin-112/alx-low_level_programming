#include "main.h"
#include <ctype.h>
/**
 * _isalpha -> out puting checks of alphabet
 * @c: int input
 * Return: 1 unsuccessful 0 success
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
