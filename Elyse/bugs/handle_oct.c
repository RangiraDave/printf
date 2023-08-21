#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int handle_octal(va_list passed_args, char specifier)
{
	unsigned int n = va_arg(passed_args, unsigned int);
	int i;
	int idx_counter = 0;
	char octal_num[] = "01234567";
	char octal_size[12];

	if (specifier != 'o' && specifier != 'i')
		return(0);
	if (n == 0)
	{
		octal_size[idx_counter++] = '0';
	}
	else
	{
		do
		{
			octal_size[idx_counter++] = octal_num[n % 8];
			n /= 8;
		}
		while (n > 0);
	}
	for ( i = idx_counter -1; i >= 0; i--)
	{
		write(1, &octal_size[i],1);
	}

	return (idx_counter);
}

