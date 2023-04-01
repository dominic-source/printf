#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
int _printf(const char *format, ...);
char *tostring_lh(long int num, char t, char lh);
char *tostring_u(unsigned int num);
char *tohex_oct(unsigned int num, char c, unsigned int base);
int chr_p(char c);
int str_p(char *s, char t);
int int_p(int i);
int deci_p(int i);
int lng_sht_p(long int i, char s, char c);
int _putchar(char c);
int uns_int_p(unsigned int i);
int uns_hex_p(unsigned int i, char c);
int uns_oct_p(unsigned int deci_n);
int uns_bin_p(unsigned int deci_n);
void a_int_p(long int v, char c, int *count, char s);
void args_uint_p(unsigned int v, char c, int *count);
void args_p(int *count);
void unprint_print(char);
char *ini_lh(unsigned int *, char *, unsigned int *, long int *, char *);
#endif
