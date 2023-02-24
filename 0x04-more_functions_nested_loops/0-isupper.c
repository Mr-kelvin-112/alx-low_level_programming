#include "main.h"
#include <ctype.h>
/**
 * _isupper - function for printing uppercase
 * @c: int input
 * Return: 0 success and 1 unsuccess
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
