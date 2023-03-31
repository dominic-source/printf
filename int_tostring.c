#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * tostring_u - converts integers to string
 * Return: pointer to char
 * @num: unsigned integer number
 */
char *tostring_u(unsigned int num)
{
char *p_str;
unsigned int i, rem, len = 0;
unsigned int n;

n = num;

while (n != 0)
{
len++;
n /= 10;
}

p_str = malloc(sizeof(char) * (len  + 1));
if (p_str == NULL)
return (NULL);

for (i = 0; i < len; i++)
{

rem = num % 10;
num = num / 10;

p_str[len - i - 1] = '0' + rem;

}
p_str[len] = '\0';

return (p_str);
}



/**
 * tohex_oct - convert unsigned integers to hexadecimal
 * @i: unsigned integer
 * @c: character
 * @base: base for conversion
 * Return: pointer to a string
 */
char *tohex_oct(unsigned int i, char c, unsigned int base)
{
char *hex_ptr;
unsigned int p = i;
int rem, count = 0;

while (p != 0)
{
p /= base;
count++;
}
hex_ptr = malloc(sizeof(char) * (count + 1));
if (hex_ptr == NULL)
return (NULL);
hex_ptr[count] = '\0';
while (i != 0)
{
rem  = i % base;
if (rem < 10)
hex_ptr[--count] = rem + 48;
else
{
if (c == 'x')
hex_ptr[--count] = rem + 87;
else
hex_ptr[--count] = rem + 55;
}
i /= base;
}
return (hex_ptr);
}
