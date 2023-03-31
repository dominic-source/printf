#include "main.h"
/**
 * _printf - prints string
 * @format: pointer to the string to print
 * Return: length of string
 */
int _printf(const char *format, ...)
{
va_list arg;
int i = 0, c = 0;
char t, z;
if (format == NULL)
return (-1);
va_start(arg, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
t = format[++i];
z = format[i];
if (t == 'u' || t == 'x' || t == 'X' || t == 'o' || t == 'b')
args_uint_p(va_arg(arg, unsigned int), t, &c);
else if (t == 'd' || t == 'i' || t == 'l' || t == 'h')
a_int_p(va_arg(arg, long), t, &c, (t == 'l' || t == 'h' ? format[++i] : z));
else if (t == '%')
args_p(&c);
else if (t == 's' || t == 'S')
c += str_p(va_arg(arg, char *), t);
else if (t == 'c')
c += chr_p((char)va_arg(arg, int));
else if (t != '\0')
{
_putchar('%');
_putchar(format[i]);
c += 2;
}
else if (t == '\0')
return (-1);
}
else
{
_putchar(format[i]);
c++;
}
i++;
}
va_end(arg);
return (c);
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
case 'b':
*count += uns_bin_p(v);
break;
}
}

/**
 * a_int_p - prints the variadic argument
 * @v: unsigned interger variable
 * @c: string
 * @s: for long or short
 * @count: pointer to the count
 * Return: Nothing
 */
void a_int_p(long int v, char c, int *count, char s)
{
switch (c)
{
case 'd':
*count += deci_p((int)v);
break;
case 'i':
*count += int_p((int)v);
break;
case 'l':
*count += lng_sht_p(v, s, 'l');
break;
case 'h':
*count += lng_sht_p(v, s, 'h');
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
