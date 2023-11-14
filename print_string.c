#include "main.h"

/**
 * print_string - Function that print a string
 * @ap: variable argument list
 * Return: the number of characters printed
 */
int print_string(va_list ap)
{
char *s;
int len = 0;
int i;
s = va_arg(ap, char*);
if (s == NULL)
{
s = "(null)";
}

for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
len++;
}

return (len);
}
