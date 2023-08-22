#include "main.h"
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
			j += spec_handler(&format[i], Args);
			while (specifier(format[i]))
				i++;
		}
	write(1, &format[i], 1);
	i++;
	j++;
	}

	va_end(Args);
	return (j);
}
