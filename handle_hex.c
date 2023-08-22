#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *handle_hex - prints hexadecimal numbers
  *@...: passed arguments
  *@specifier: check for the specifier
  *@passed_args: arguments receiver
  *
  *Return: lenghth of the passed number
  */
int handle_hex(va_list passed_args, char specifier)
{
	unsigned int num = va_arg(passed_args, unsigned int);
	int i;
	int idx_counter = 0;
	char hex_num[] = "0123456789abcdefABCDEF";
	char hex_size[64];

	if (hex_size == NULL)
		return (-1);

	if (num == 0)
	{
		hex_size[idx_counter++] = '0';
	}
	else
	{
		do {
			hex_size[idx_counter++] = hex_num[num % 16];
			num /= 16;
		} while (num > 0);
	}


	if (specifier == 'X')
	{
		for (i = idx_counter - 1; i >= 0; i--)
		{
			hex_size[i] = toupper(hex_size[i]);
			write(1, &hex_size[i], 1);
		}
	}
	else
	{
		for (i = idx_counter - 1; i >= 0; i--)
		{
			write(1, &hex_size[i], 1);
		}
	}
	return (idx_counter);
}


