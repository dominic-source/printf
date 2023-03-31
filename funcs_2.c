#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * tostring_lh - print long format for string
 * @num: number to convert
 * @lh: either long or short
 * @t: type conversion
 * Return: pointer to chars
*/

char *tostring_lh(long int num, char t, char lh)
{
char *p_str;
unsigned int len = 0, base = 10;
unsigned long int n;
if (lh == 'h')
{
if (t == 'u')
num = (unsigned short int)num;
else
num = (short int)num;
}
else if (lh == 'l')
{
if (t == 'u')
num = (unsigned long int)num;
else
num = (short int)num;
}
n = num;

if (t == 'o')
base = 8;
else if (t == 'x' || t == 'X')
base = 16;

while (n != 0)
{
len++;
n /= base;
}

p_str = malloc(sizeof(char) * (len  + 1));
if (p_str == NULL)
return (NULL);

p_str = ini_lh(&base, &t, &len, &num, p_str);
return (p_str);
}

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
 * ini_lh - initialize long or short integers
 * @b: base conversion
 * @t: the character specifier
 * @len: length of string
 * @num: the number for conversion
 * @p: the pointer to the malloced space
 * Return: a pointer to p_str
 */

char *ini_lh(unsigned int *b, char *t, unsigned int *len, long *num, char *p)
{
unsigned int i, rem;
if (*t == 'd' || *t == 'i' || *t == 'u')
{
for (i = 0; i < *len; i++)
{

rem = *num % 10;
*num = *num / 10;

p[*len - i - 1] = '0' + rem;

}
p[*len] = '\0';
}
else if (*t == 'o' || *t == 'x' || *t == 'X')
{
while (*num != 0)
{
rem  = *num % *b;
if (rem < 10)
p[--(*len)] = rem + 48;
else
{

if ((*t) == 'x')
p[--(*len)] = rem + 87;
else
p[--(*len)] = rem + 55;
}
*num /= *b;
}

}
else
_putchar(*t);

return (p);

}

