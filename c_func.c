#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * c_func - function that prints characters
 * @args: character passed into function
 *
<<<<<<< HEAD
 * Return: 1 for number of char
=======
 * Return: counter
>>>>>>> 13e0826a58fabc2c1befad26c65feb0f5fd3beda
 */

int c_func(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
