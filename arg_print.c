#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
  *arg_print - it writes passed characters to the output
  *
  *Return: 1 on sucess
  *-1 when fails
  */
int arg_print(char *passed, va_list prints)
{
	int i;
	int num;

	for (i = 0; passed[i] != '\0'; i++)
	{
		if (passed[i] == '%')
		{
			i++;
			switch (passed[i])
			{
				case 'd':
					num = va_arg(prints, int);
					num_print(num);
					break;
			}
		}
		else
		{
			write(1, &passed[i], sizeof(char));
		}

	}
	return(1);
}

