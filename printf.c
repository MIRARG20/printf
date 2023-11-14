#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - a function that produces
 * output according to a format.
 * @format: a character string.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
int length = 0;
va_list ap;
va_start(ap, format);
while (*format)
{
if (*format == '%')
{
format++;
length += handle_format_specifier(format, ap);
format++;
}
else
{
_putchar(*format);
length++;
format++;
}
}

va_end(ap);
return (length);
}
