#include "main.h"
/**
 * print_octal - Function that print
 * octal int
 * @ap: variable argument list
 * Return: the length of numbers printed
 */
int print_octal(va_list ap)
{
unsigned int x;
int len = 0;
char o[50];
int i, j;
x = va_arg(ap, unsigned int);

if (x == 0)
{
_putchar('0');
len++;
}
else
{
for (j = 0; x > 0; j++)
{
o[j] = ((x % 8) + '0');
x /= 8;
}

for (i = j - 1; i >= 0; i--)
{
_putchar(o[i]);
len++;
}
}

return (len);
}
