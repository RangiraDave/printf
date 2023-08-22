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
	while (format[i] != '\0')
	{
		{
			if (format[i] == '%')
			{
				i++;

				switch (format[i])
				{
					case 'c': j += handle_c(a
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
