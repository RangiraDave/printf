#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * handle_b - Function to hundle b
 * @passed_arg: Passed argment
 * @specifier: Character to be checked
 * Return: 1 or 0
 */
int handle_b(va_list passed_arg, char specifier)
{
	int i, n;
	char temp[64];

	if (specifier != 'b')
		return (0);
	i = 0;
	n = va_arg(passed_arg, int);
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
