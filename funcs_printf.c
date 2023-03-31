#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * chr_p - print character
 * @c: char argument
 * Return: length of string
 */

int chr_p(char c)
{
_putchar(c);
return (1);
}


/**
 * str_p - print string
 * @s: pointer to char argument
 * @t: the character specifier
 * Return: length of string
 */

int str_p(char *s, char t)
{
int i = 0, len = 0;
char hld;
if (s == NULL)
s = "(null)";

len = strlen(s);
while (s[i] != '\0')
{
hld = s[i];
if (t == 'S' && ((hld > 0 && hld < 32) || hld >= 127))
{
i++;
unprint_print(hld);
len += 3;
}
else
_putchar(s[i++]);
}
return (len);
}

/**
 * int_p - print character
 * @i: int argument
 * Return: length of string
 */

int int_p(int i)
{
int p = 0, t = 0, len;
char *s;
unsigned int j;

if (i == 0)
{
_putchar('0');
return (1);
}

if (i < 0)
{
j = -i;
t = 1;
}
else
j = i;
s = tostring_u(j);
len = strlen(s) + t;

if (t)
_putchar('-');

while (s[p] != '\0')
_putchar(s[p++]);
free(s);
return (len);
}

/**
 * deci_p - print character
 * @i: char argument
 * Return: length of string
 */

int deci_p(int i)
{
int j = 0, t = 0, len;
char *s;
unsigned int k;

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
s = tostring_u(k);
len = strlen(s) + t;

if (t)
_putchar('-');

while (s[j] != '\0')
_putchar(s[j++]);
free(s);
return (len);
}

/**
 * uns_int_p - print character
 * @i: unsigned integer argument
 * Return: length of string
 */

int uns_int_p(unsigned int i)
{
char *s;
int j = 0, len;

if (i == 0)
{
_putchar('0');
return (1);
}

s = tostring_u(i);
len = strlen(s);
while (s[j] != '\0')
_putchar(s[j++]);
free(s);
return (len);
}
