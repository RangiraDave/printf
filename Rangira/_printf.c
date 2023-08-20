#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - Prints out what is passed
 * @format: Pointer to last argment
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
		/*_printf("Ans is: %c", a, "another str");
		*/
		{
			i++;
			switch(format[i])
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
				default:
					write(1, &format[i], 1);
					j++;
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
	return (j);
}
