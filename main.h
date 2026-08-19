#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h> /*unix standar header file, access to low level operation system*/
int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *str);
int print_number(int n);
#endif
