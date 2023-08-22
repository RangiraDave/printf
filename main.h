#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
<<<<<<< HEAD
int specifier(char c);
int spec_handler(const char *format, va_list args);
int handle_c(va_list passed_args);
int handle_s(va_list passed_args);
int handle_mod(void);
int handle_int(va_list passed);
int handle_hex(va_list passed_args, char specifier);
int handle_octal(va_list passed_args);
int handle_un(va_list passed_args);
int print_un(char *un_str, int n_digits, unsigned int num);
int handle_addr(va_list passed_args);
int handle_rev(va_list passed_args);
int handle_b(va_list passed_args);
=======
int handle_c(va_list passed_arg, char specifier);
int handle_s(va_list passed_arg, char specifier);
int handle_mod(char specifier);
int handle_int(va_list passed_arg, char specifier);
>>>>>>> parent of 7edd24b (Adding funtion to handle b)
#endif
