#include "main.h"
#include <stdlib.h>

/**
 * print_fun - check every single character coming as
 *	string and passess them to other functions
 *
 * @str: character string
 * @args: list of optional arguments
 *
 * Return: 0 (Sucess)
 */
int print_fun(const char *str, va_list args)
{
	int count = 0;
	int i = 0;

	while (str && str[i])
	{
		if (str[i] != '%')
			count += _putchar(str[i]);
		else
		{
			if (str[i + 1] == '\0')
				return (-1);
			i++;
			while (str[i] == ' ')
				i++;
			if (str[i] == '%')
				count += _putchar(str[i]);
			else
				if (is_specifier_valid(str[i]) == 0)
					count = print_invalid_specifier(str[i - 1], str[i], count);
			else
				if (is_specifier_valid(str[i]) == 1)
					count += print_specifier(str[i], args);
		}
		i++;
	}
	return (count);
}

/**
 * is_specifier_valid - checks the specifier if valid or not
 * @specif: specifier to check if valid
 * Return: 1 if valid, and 0 if not valid
 */
int is_specifier_valid(char specif)
{
	char spec[] = {'c', 's'};
	int i = 0;

	while (spec[i])
	{
		if (spec[i] == specif)
			return (1);
		i++;
	}
	return (0);
}

/**
 * print_invalid_specifier - prints specifiers that do not support
 * @pre_str: the previous specifier character
 * @str: the specifier to print
 * @count: the previous number of printed characters
 * Return: the number of characters printed
 */
int print_invalid_specifier(char pre_str, char str, int count)
{
	count += _putchar('%');

	if (pre_str == ' ')
		count += _putchar(' ');
	count += _putchar(str);
	return (count);
}

/**
 * print_specifier - prints specifier with corresponding type
 * @str: the specifier to print
 * @args: list of arguments
 * Return: the length of prined specifier
 */
int print_specifier(char str, va_list args)
{
	int i = 0;
	int len = 0;
	spec spec_type[] = {{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	while (spec_type[i].specifier)
	{
		if (*spec_type[i].specifier == str)
			len = spec_type[i].f(args);
		i++;
	}
	return (len);
}
