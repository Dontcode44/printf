#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_b - A function that prints a binary
 * @args: Arguments
 * Return: size of number
 */
int print_b(va_list args)
{
	int i = 0, n, one = 1, zero = 0;

	n = va_arg(args, int);
	while (n > 0)
	{
		if (n % 2 == 0)
		{
			_putchar(one);
			i++;
		}
		else
			_putchar(zero);
	}
	return (i);
}

