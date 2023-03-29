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
 * Return: length of string
 */

int str_p(char *s)
{
int i = 0;
while (s[i] != '\0')
_putchar(s[i++]);
return (strlen(s));
}

/**
 * int_p - print character
 * @i: int argument
 * Return: length of string
 */

int int_p(int i)
{
int p = 0;
char *s = tostring(i);
while (s[p] != '\0')
_putchar(s[p++]);
return (strlen(s));
}

/**
 * deci_p - print character
 * @i: char argument
 * Return: length of string
 */

int deci_p(int i)
{
int j = 0;
char *s = tostring(i);

while (s[j] != '\0')
_putchar(s[j++]);
return (strlen(s));
}

/**
 * uns_int_p - print character
 * @i: unsigned integer argument
 * Return: length of string
 */

int uns_int_p(unsigned int i)
{
int j = 0;
char *s = tostring_u(i);

while (s[j] != '\0')
_putchar(s[j++]);
return (strlen(s));
}

