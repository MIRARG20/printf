#include "main.h"
/**
 * handle_format_specifier - a Function
 * to handle the format specifier
 * @format: a character string
 * @ap: variable argument list
 * Return: the number of characters printed
 */
int handle_format_specifier(const char *format, va_list ap)
{
sp_f spf[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"i", print_int},
{"d", print_decimal},
{"b", print_binary},
{"u", print_unsigned},
{"o", print_octal},
{"x", print_hexadecimal},
{NULL, NULL},
};
int length = 0;
int i;

for (i = 0; spf[i].s; i++)
{
if (spf[i].s[0] == *format)
{
length += spf[i].f(ap);
break;
}
}

return (length);
}
