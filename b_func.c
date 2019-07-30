#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * b_func - function to print integers
 * @args: string passed into function
 *
 * Return: number of digits printed
 */

int b_func(va_list args)
{
	unsigned int binum[32];
	int n, j;
	int i = 0;

	n = va_arg(args, int);
<<<<<<< HEAD

=======
>>>>>>> 13e0826a58fabc2c1befad26c65feb0f5fd3beda
	while (n > 0)
	{
		binum[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(binum[j] + '0');
<<<<<<< HEAD

=======
>>>>>>> 13e0826a58fabc2c1befad26c65feb0f5fd3beda
	return (i);
}
