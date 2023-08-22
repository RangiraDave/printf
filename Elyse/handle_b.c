#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * handle_b - Function to hundle b
 * @passed_args: Passed argment
 *
 * Return: 1 or 0
 */
int handle_b(va_list passed_args)
{
	int i, n;
	char temp[64];

	i = 0;
	n = va_arg(passed_args, int);
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n)
	{
		temp[i] = n % 2 + '0';
		n /= 2;
		i++;
	}
	while (i--)
		write(1, &temp[i], 1);
	return (i);
}
