#include "main.h"
#include <unistd.h>
/**
 * handle_c - Function to handle c
 * @passed_args: Passed character
 * Return: 1
 */
int handle_c(va_list passed_args)
{
	char c;

	{
		c = (char) va_arg(passed_args, int);
		write(1, &c, 1);
		return (1);
	}
	return (0);
}
