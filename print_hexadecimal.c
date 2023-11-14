#include "main.h"
/**
 * print_hexadecimal - Function that print
 * hexadecimal numbers
 * @ap: variable argument list
 * Return: the length of numbers printed
 */
int print_hexadecimal(va_list ap)
{
unsigned int x;
int len = 0;
char h[16];
int r, i, j;
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
r = x % 16;
h[j] = (r < 10) ? (r + '0') : (r - 10 + 'a');
x /= 16;
}

for (i = j - 1; i >= 0; i--)
{
_putchar(h[i]);
len++;
}
}

return (len);
}
