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
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
}

/**
 * print_decimal - prints a decimal data type
 * @args: list of arguments
 * Return: the length of decimal printed
 */
int print_decimal(va_list args)
{
	int count = 1;
	int temp = 0;
	unsigned int arg = va_arg(args, int);

	temp = arg;

	if (temp == 0)
	{
		_putchar(0 + '0');
		count++;
	}
	if (temp < 0)
	{
		_putchar('-');
		temp *= -1;
		arg = temp;
		count += 1;
	}

	while (arg > 9)
	{
		arg /= 10;
		count++;
	}

	int_recursion(temp);

	return (count);
}

/**
 * int_recursion - prints out integer
 * @value: integer
 *
 * Return: nothing
 **/
void int_recursion(int value)
{
	unsigned int a;

	a = value;

	if (a != 0)
	{
		int_recursion(a / 10);
		_putchar((a % 10) + '0');
	}
}
