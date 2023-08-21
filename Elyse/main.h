#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int handle_c(va_list passed_arg, char specifier);
int handle_s(va_list passed_arg, char specifier);
int handle_mod(char specifier);
int handle_int(va_list passed_arg, char specifier);
int handle_hex(va_list passed_arg, char specifier);
int handle_octal(va_list passed_args, char specifier);
int handle_un(va_list passed_args, char specifier);
int handle_HEX(va_list passed_args, char specifier);
int handle_rev(va_list passed_args, char specifier);
#endif
