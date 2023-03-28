#ifndef MAIN
#define MAIN
#include <stdarg.h>
#include <stddef.h>
int _printf(const char *format, ...);
char *tostring(int num);
char *tostring_u(unsigned int num);
char *tohex_oct(unsigned int num, char c, unsigned int base);
int chr_p(char c);
int str_p(char *s);
int int_p(int i);
int deci_p(int i);
int _putchar(char c);
int uns_int_p(unsigned int i);
int uns_hex_p(unsigned int i, char c);
int uns_oct_p(unsigned int deci_n);
void args_int_p(int v, char c, int *count);
void args_int_p(int v, char c, int *count);
void args_uint_p(unsigned int v, char c, int *count);
void args_p(int *count);
#endif
