#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
  *handle_addr - prints address of a viod ponter
  *@passed_args: arguments received
  *
  *Return: number of printed numbers
  */
int handle_addr(va_list passed_args)
{
	void *ptr =  va_arg(passed_args, void*);
	char ad_len[64];
	char hex_ar[] = "123456789abcdefABCDEF";

	int i, j;

	unsigned long int addr = (unsigned long int)ptr;

	i = 0;

	do {
		ad_len[i++] = hex_ar[addr % 16];
		addr /= 16;
	} while (addr > 0);

	ad_len[i] = '\0';

	for (j = i - 1; j >= 0; j--)
	{
		write(1, &ad_len[j], 1);
	}
	return (i);
}
