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

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
<<<<<<< HEAD
			j += spec_handler(&format[i], Args);
			while (specifier(format[i]))
				i++;
=======
			j += handle_c(Args, format[i]);
			j += handle_s(Args, format[i]);
			j += handle_mod(format[i]);
			j += handle_int(Args, format[i]);
		}
		else
		{
			write(1, &format[i], 1);
			j++;
>>>>>>> parent of 7edd24b (Adding funtion to handle b)
		}
	write(1, &format[i], 1);
	i++;
	j++;
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
		c == '%' || c == 'i' || c == 'o' || c == 'u' || c == 'b' || c == 'p');
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
			handle_c(Args);
			break;
		case 's':
			handle_s(Args);
			break;
		case 'x':
		case 'X':
			handle_hex(Args, *format);
			break;
		case '%':
			handle_mod();
			break;
		case 'd':
		case 'i':
			handle_int(Args);
			break;
		case 'o':
			handle_octal(Args);
			break;
		case 'u':
			handle_un(Args);
			break;
		case 'b':
			handle_b(Args);
			break;
		case 'p':
			handle_addr(Args);
			break;
		default:
			{
				write(1, format, 1);
			}
	}
	return (1);
}
