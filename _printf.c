#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...)
{
	va_list prints;
	int i;
	char *pass1;
	int j = 0;

	va_start(prints, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		j++;
	}
	pass1 = malloc((j + 1) * sizeof(char));

	for (i = 0; format[i] != '\0'; i++)
	{
		pass1[i] = format [i];
	}

	pass1[i] = '\0';

	arg_print(pass1, prints);

	free(pass1);

	va_end(prints);
	
	return (i);
}
