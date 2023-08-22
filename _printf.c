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

	i = 0;
	j = 0;
	va_start(Args, format);
	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == '%')
		{
			i++;
			j += handle_c(Args, format[i]);
			j += handle_s(Args, format[i]);
			j += handle_mod(format[i]);
			j += handle_int(Args, format[i]);
			j += handle_b(Args, format[i]);
		}
		else
		{
			write(1, &format[i], 1);
			j++;
		}
	}
	va_end(Args);
	return (j);
}
