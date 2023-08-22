#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
  *handle_rev - prints a string which is reversed
  *@passed_args: received arguments by the function
  *
  *Return: number of printed characters
  */
int handle_rev(va_list passed_args)
{
	char *rev_str;
	int i = 0;
	int j;

	rev_str = va_arg(passed_args, char*);

	if (rev_str == NULL)
		return (0);

	i = strlen(rev_str);

	for (j = i - 1; j >= 0; j--)
	{
		write(1, &rev_str[j], 1);
	}
	return (i);
}
