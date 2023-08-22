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
			switch(format[i])
			{
				case 'c':
					j += handle_c(Args);
					break;
				case 's':
					j += handle_s(Args);
					break;
				case 'x':
				case 'X':
					j += handle_hex(Args, format[i]);
					break;
				case '%':
					j += handle_mod();
					break;
				case 'd':
				case 'i':
					j += handle_int(Args);
					break;
				case 'o':
					j += handle_octal(Args);
					break;
				case 'u':
					j += handle_un(Args);
					break;
				case 'b':
					j += handle_b(Args);
					break;
				/*case '%':
					write(1, "%", 1);*/
				default:
					write(1, &format[i - 1], 2);
					j += 2;
					break;
			}
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
