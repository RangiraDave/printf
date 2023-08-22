#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - Prints out what is passed
 * @format: Pointer to last argment
 * @...: Pointer to infinity argument
 * Return: Number of characters
 */
int _printf(const char *format, ...)
{
	int i, j;
	va_list Args;

	i = 0;
	j = 0;

	va_start(Args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j += spec_handler(&format[i], Args);
			while (specifier(format[i]))
				i++;
		}
		else
		{
			write(1, &format[i], 1);
			j++;
		}
		i++;
	}
	va_end(Args);
	return (j);
}

/**
  *specifier - it stores the specifier in char c
  *@c: the charcter that stores specifeir
  *
  *Return: returns the encountered specifier
  */
int specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'x' || c == 'X' || c == 'd' ||
		c == '%' || c == 'i' || c == 'o' || c == 'u' || c == 'b');
}

/**
 *spec_handler - handles cases of specifiers
 *@format: ist the passed string that has the specifeir
 *@Args: passed arguments other than the format strng
 *Return: 1 when no specifier encounterd
 */

int spec_handler(const char *format, va_list Args)
{
	switch (*format)
	{
		case 'c':
			return (handle_c(Args));
		case 's':
			return (handle_s(Args));
		case 'x':
		case 'X':
			return (handle_hex(Args, *format));
		case '%':
			return (handle_mod());
		case 'd':
		case 'i':
			return (handle_int(Args));
		case 'o':
			return (handle_octal(Args));
		case 'u':
			return (handle_un(Args));
		case 'b':
			return (handle_b(Args));
		default:
			write(1, format - 1, 1);
			return (1);
	}
}
