#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  *handle_octal - it handles octal values
  *@passed_args: arguments received
  *@specifier: check for specifier
  *
  *Return: lenght of the number
  */

int handle_octal(va_list passed_args, char specifier)
{
	unsigned int n = va_arg(passed_args, unsigned int);
	int i;
	int idx_counter = 0;
	char octal_size[12];

	if (specifier == 'o')
	{
		if (n == 0)
		{
			octal_size[idx_counter++] = '0';
		}
		else
		{
			do {
				octal_size[idx_counter++] = n % 8 + '0';
				n /= 8;
			} while (n > 0);
		}
		octal_size[idx_counter] = '\0';
		for (i = idx_counter - 1; i >= 0; i--)
		{
			write(1, &octal_size[i], 1);
		}
		return (idx_counter);
	}
	else
	{
		return (0);
	}
}
