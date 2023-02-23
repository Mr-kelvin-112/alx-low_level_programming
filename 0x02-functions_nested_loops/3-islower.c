#include "main.h"
#include <ctype.h>
/**
 * _islower -> for checking lower letter
 * @c: an integer input
 * Return: 1 for unsuccessful and 0 for success
 */
int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
