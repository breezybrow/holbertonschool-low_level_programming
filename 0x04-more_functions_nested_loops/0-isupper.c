#include "holberton.h"
#include <stdio.h>

/**
 * _isupper- checking for uppercase character
 * @c: int type
 * Return: 1 if yes, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

	return (1);

	else
		return (0);
}
