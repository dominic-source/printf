#include <unistd.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>


/**
 * uns_hex_p - print character
 * @i: unsigned integer argument
 * Return: length of string
 * @c: character
 */
int uns_hex_p(unsigned int i, char c)
{
char *s;
int j = 0, len;
if (i == 0)
{
_putchar('0');
return (1);
}

s = tohex_oct(i, c, 16);
len = strlen(s);
while (s[j] != '\0')
_putchar(s[j++]);
free(s);
return (len);
}


/**
 * uns_oct_p - print character
 * @deci_n: decimal number
 * Return: length of string
 */
int uns_oct_p(unsigned int deci_n)
{
char *s;
unsigned int j = 0;
char c = 'o';
if (deci_n == 0)
{
_putchar('0');
return (1);
}

s = tohex_oct(deci_n, c, 8);
while (s[j] != '\0')
_putchar(s[j++]);
free(s);
return (strlen(s));
}


/**
 * uns_bin_p - print character
 * @deci_n: decimal number
 * Return: length of string
 */
int uns_bin_p(unsigned int deci_n)
{
char *s;
unsigned int j = 0;
char c = 'b';
if (deci_n == 0)
{
_putchar('0');
return (1);
}

s = tohex_oct(deci_n, c, 2);
while (s[j] != '\0')
_putchar(s[j++]);
free(s);
return (strlen(s));
}

/**
 * lng_sht_p - print long or short decimal or integer
 * @i: integer to print
 * @p: decimal or integer
 * @lh: long or short specifier
 * Return: length
 */
int lng_sht_p(long int i, char p, char lh)
{
char *s;
unsigned int j = 0, t = 0, len;
unsigned long int k;

if (i == 0)
{
_putchar('0');
return (1);
}

if (i < 0)
{
k = -i;
t = 1;
}
else
k = i;

if (lh == 'l')
s = tostring_lh(k, p, 'l');
else
s = tostring_lh(k, p, 'h');
len = strlen(s) + t;

if (t)
_putchar('-');

while (s[j] != '\0')
_putchar(s[j++]);
free(s);
return (len);
}


/**
 * unprint_print - print unprintable character
 * @hld: special unprintable character
 * Return: Nothing
 */
void unprint_print(char hld)
{
unsigned char byte1, byte2;
_putchar('\\');
_putchar('x');
byte1 = ((unsigned char)hld >> 4);
byte1 += (byte1 < 10) ? '0' : 'A' - 10;
byte2 = ((unsigned char)hld & 0x0F);
byte2 += (byte2 < 10) ? '0' : 'A' - 10;
_putchar(byte1);
_putchar(byte2);
}
