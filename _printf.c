#include "main.h"
#include <stdlib.h>

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
	int len = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	len = print_fun(format, args);

	va_end(args);

	return (len);
}
