#include "main.h"
#include <ctype.h>
/**
 * print_sign -> printing of signs 
 * @n: int input
 * Return: 0 success and 1 unsuccess
 */
int print_sign(int n)
{
	if (isprint(n) > 0)
	{ 
	return (1);
	}
	else if (isprint(n) == 0)
	{
	return (0);
	}
	else (isprint(n) < -1)
	{
	return (-1);
	}
}
