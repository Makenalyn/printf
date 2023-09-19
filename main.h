#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int print_d(long, int);
void print_o(long);
void print_u(unsigned int);
int _printf(const char *format, ...);
int (*sortfunc(char fmtspecifiers))(va_list args);
int formatC(va_list args);
int formatD(va_list args);

#endif
