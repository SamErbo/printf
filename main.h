#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct specifiers
{
	char *specifier;
	int (*f)(va_list args);
} spec;

int print_fun(const char *str, va_list args);
int _putchar(char c);
int _printf(const char *format, ...);

int is_specifier_valid(char specif);
int print_invalid_specifier(char pre_str, char str, int count);
int print_specifier(char str, va_list args);

int print_char(va_list args);
int print_string(va_list args);

#endif
