#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
#include <unistd.h>

void num_print(int num)
{
	char num_str[30];
	int i = 0;
	int j;
	char temp;

	if (num == 0)
	{
		num_str[0] = '0';
		i = 1;
	}
	else
	{
		if (num < 0)
		{
			write(1, "-", sizeof(char));
			num = -num;
		}
		while (num > 0)
		{
			num_str[i++] = '0' + (num % 10);
			num = num / 10;
		}

		for (j = 0; j < i / 2; j ++)
		{
			temp = num_str[j];
			num_str[j] = num_str[i - j - 1];
			num_str[i - j - 1] = temp;
		}
	}
	write(1, num_str, sizeof(char) * i);
}
