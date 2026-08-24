#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <unistd.h> /*unix standar header file, access to low level operation system*/
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_number(va_list args);
int get_struct(char spec, va_list args);
int _putchar(char c);

typedef struct print_struct
{
  char *ps;
  int (*f)();
} print_struct;

#endif
