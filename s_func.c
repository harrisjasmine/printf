#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * s_func - function to print strings
 * @args: string passed into function
 *
<<<<<<< HEAD
 * Return: number of characters in string
=======
 * Return: counter
>>>>>>> 13e0826a58fabc2c1befad26c65feb0f5fd3beda
 */

int s_func(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		return (0);
	}
	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
