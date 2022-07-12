#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_char - prints a char data type
 * @args: list of arguments
 * Return: the length of printed char
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - prints a string data type
 * @args: list of arguments
 * Return: the length of string printed
 */
int print_string(va_list args)
{
	int i = 0;
	char *arg = va_arg(args, char *);

	if (arg != NULL)
	{
		while (arg[i])
		{
			_putchar(arg[i]);
			i++;
		}
		return (i);
	}
	else
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return (5);
	}
}
