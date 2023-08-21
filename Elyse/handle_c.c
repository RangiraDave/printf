#include "main.h"
#include <unistd.h>
/**
 * handle_c - Function to handle c
 * @passed_arg: Passed character
 * @specifier: The character to be checked
 * Return: 1
 */
int handle_c(va_list passed_arg, char specifier)
{
	char c;

	if (specifier == 'c')
	{
		c = (char) va_arg(passed_arg, int);
		write(1, &c, 1);
		return (1);
	}
	return (0);
}
