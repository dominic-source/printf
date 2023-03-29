#include <unistd.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * _putchar - print characters
 * @c: characters
 * Return: write
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}


/**
 * uns_hex_p - print character
 * @i: unsigned integer argument
 * Return: length of string
 * @c: character
 */
int uns_hex_p(unsigned int i, char c)
{
int j = 0;
char *s = tohex_oct(i, c, 16);
int len = strlen(s);
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
unsigned int j = 0;
char c = 'o';
char *s = tohex_oct(deci_n, c, 8);
while (s[j] != '\0')
_putchar(s[j++]);
free(s);
return (strlen(s));
}
