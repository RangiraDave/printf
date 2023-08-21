#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
  *handle_un - measure the size of the number
  *@passed_args: argument received
  *@specifier: chceks for appropriate specifier
  *
  *Return: length of the digit
  */
int handle_un(va_list passed_args, char specifier)
{
	unsigned int num = va_arg(passed_args, unsigned int);
	char *un_str;
	unsigned int tmp;
	int n_digits = 0;

	tmp = num;

	if (specifier != 'u')
		return (0);
	un_str = malloc(sizeof(char) * (n_digits + 1));

	if (num == 0)
	{
		if (un_str == NULL)
		{
			return (-1);
		}
		strcpy(un_str, "0");
		return (0);
	}
	do {
		tmp /= 10;
		n_digits++;
	} while (tmp > 0);

	return (n_digits);
}

/**
  *print_un - prints unsigned int
  *@un_str: string with unsignd numbrs in it
  *@n_digits: lenght of the number
  *@num: calculates the number
  *
  *Return: lenght of the pritd number
  */
int print_un(char *un_str, int n_digits, unsigned int num)
{
	int i;

	if (un_str == NULL)
	{
		return (-1);
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


