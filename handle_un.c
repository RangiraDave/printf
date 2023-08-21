#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>

int handle_un(va_list passed_args, char specifier)
{
	unsigned int num = va_arg(passed_args, unsigned int);
	char *un_str;
	unsigned int tmp;
	int n_digits = 0;
	int i;

	tmp = num;
	
	if (specifier != 'u')
		return (0);
	if (num == 0)
	{
		un_str = malloc(2);
		if (un_str == NULL)
		{
			return(0);
		}
		strcpy(un_str, "0");
		return (0);
	}
	do
	{
		tmp /= 10;
		n_digits++;
	}
	while (tmp > 0);

	un_str = malloc(n_digits + 1);
	if (un_str == NULL)
	{
		return(0);
	}
	for (i = n_digits - 1; i >= 0; i--)
	{
		un_str[i] = '0' + (num % 10);
		num /= 10;
	}
	un_str[n_digits] = '\0';

	write(1, un_str, strlen(un_str));

	free(un_str);
	return (n_digits);
}



