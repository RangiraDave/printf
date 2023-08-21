#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>

int handle_hex(va_list passed_args, char specifier)
{
	unsigned int num = va_arg(passed_args, unsigned int);
	int i;
	int idx_counter = 0;
	char hex_num[] = "0123456789abcdefABCDEF";
	char hex_size[64];
	char u_str[64];

	if (specifier != 'x' && specifier != 'X') 
		return (0);
	if (num == 0)
	{
		hex_size[idx_counter++] = '0';
	}
	else
	{
		do
		{
			hex_size[idx_counter++] = hex_num[num % 16];
			num /= 16;
		}
		while (num > 0);
	}


	if (specifier == 'X')
	{
		u_str[idx_counter] = toupper(hex_size[idx_counter]);
		write(1, u_str, sizeof(char) * idx_counter);
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


