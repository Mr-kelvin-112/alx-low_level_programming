#include "main.h"
#include <ctype.h>
/**
 * _isdigit - function for digits
 * @c: int input
 * Return: 0 success 1 unsuccess
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
