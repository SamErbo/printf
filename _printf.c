#include "main.h"

/**
 * print_fun - check every single character coming as
 *	string and passess them to other functions
 *
 * @str: character string
 * @args: list of optional arguments
 *
 * Return: 0 (Sucess)
 */
void print_fun(const char *str, va_list args);

/**
 * _printf - write output to stdout
 * @format: character string
 *
 * Return: the number of characters printed (excluding the
 *	null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	print_fun(format, args);

	va_end(args);

	return (0);
}

/**
 * print_fun - check every single character coming as
 *	string and passess them to other functions
 *
 * @str: character string
 * @args: list of optional arguments
 *
 * Return: 0 (Sucess)
 */
void print_fun(const char *str, va_list args)
{
	int state = 0;

	while (*str)
	{
		if (state == 0)
		{
			if (*str == '%')
				state = 1;
			else
				_putchar(*str);
		}
		else if (state == 1)
		{
			switch (*str)
			{
			case 'c':
				{
					char *ch = va_arg(args, char *);

					_putchar(*ch);
					break;
				}
			case 's':
				{
					char *m = va_arg(args, char *);

					while (*m)
					{
						_putchar(*m);
						m++;
					}

					break;
				}

				state = 0;
			}
		}
		str++;
	}
}
