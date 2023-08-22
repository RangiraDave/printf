#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int specifier(char c);
int spec_handler(const char *format, va_list args);
int handle_c(va_list Args);
int handle_s(va_list Args);
int handle_mod(va_list Args);
int handle_int(va_list Args);
int handle_hex(va_list Args, char specifier);
int handle_octal(va_list Args);
int handle_un(va_list Args);
int print_un(char *un_str, int n_digits, unsigned int num);
int handle_addr(va_list Args);
int handle_rev(va_list Args);
int handle_b(va_list Args);
#endif
