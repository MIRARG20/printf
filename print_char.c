#include "main.h"
/**
 * print_char - Function that print a char
 * @ap: variable argument list
 * Return: 1
 */
int print_char(va_list ap)
{
char ch;
ch = va_arg(ap, int);
_putchar(ch);
return (1);
}
