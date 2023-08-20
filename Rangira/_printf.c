#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
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

	i = j = 0;
	va_start(Args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					handle_c(va_arg(Args, int));
					break;
				case 's':
					handle_s(va_arg(Args, char*));
					break;
				case '%':
					handle_mod();
					break;
				case 'd':
					handle_int(va_arg(Args, int));
					break;
				case 'i':
					handle_int(va_arg(Args, int));
					break;
				case 'u':
					handle_int(va_arg(Args, int);
							break;
				default:
					write(1, &format[i], 1);
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
