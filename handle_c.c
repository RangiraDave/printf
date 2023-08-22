#include "main.h"
#include <unistd.h>
/**
 * handle_c - Function to handle c
 * @passed_args: Passed character
 * Return: 1
 */
int handle_c(va_list Args)
{
	char c;

	{
		c = (char) va_arg(Args, int);
		write(1, &c, 1);
		return (1);
	}
	return (0);
}
