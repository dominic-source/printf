#include "main.h"

/**
 * _printf - prints string
 * @format: pointer to the string to print
 * Return: length of string
 */
int _printf(const char *format, ...)
{
va_list arg;
int i = 0, count = 0;
char t;
if (format == NULL)
return (-1);
va_start(arg, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
t = format[++i];
if (t == 'u' || t == 'x' || t == 'X' || t == 'o')
args_uint_p(va_arg(arg, unsigned int), t, &count);
else if (t == 'd' || t == 'i')
args_int_p(va_arg(arg, int), t, &count);
else if (t == '%')
args_p(&count);
else if (t == 's')
count += str_p(va_arg(arg, char *));
else if (t == 'c')
count += chr_p((char)va_arg(arg, int));
else
{
_putchar('%');
_putchar(format[i]);
count += 2;
}
}
else
{
_putchar(format[i]);
count++;
}
i++;
}
va_end(arg);
return (count);
}

/**
 * args_uint_p - prints the variadic argument
 * @v: unsigned interger variable
 * @c: string
 * @count: pointer to the count
 * Return: Nothing
 */
void args_uint_p(unsigned int v, char c, int *count)
{
switch (c)
{
case 'u':
*count += uns_int_p(v);
break;
case 'x':
*count += uns_hex_p(v, c);
break;
case 'X':
*count += uns_hex_p(v, c);
break;
case 'o':
*count += uns_oct_p(v);
break;
}
}

/**
 * args_int_p - prints the variadic argument
 * @v: unsigned interger variable
 * @c: string
 * @count: pointer to the count
 * Return: Nothing
 */
void args_int_p(int v, char c, int *count)
{
switch (c)
{
case 'd':
*count += deci_p(v);
break;
case 'i':
*count += int_p(v);
break;
}
}

/**
 * args_p - print %
 * @count: pointer to the counter
 * Return: Nothing
 */
void args_p(int *count)
{
_putchar('%');
++(*count);
}
