#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct speci_format - a structure for
 * specifier format and functions
 *
 * @s: The specifier format
 * @f: The function associated
 */

typedef struct speci_format
{
	char *s;
	int (*f)();
} sp_f;

int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(void);
int print_int(va_list ap);
int print_decimal(va_list ap);
int print_binary(va_list ap);
int print_binary(va_list ap);
int print_unsigned(va_list ap);
int print_octal(va_list ap);
int handle_format_specifier(const char *format, va_list ap);
int _printf(const char *format, ...);
#endif
