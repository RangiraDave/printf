#include "main.h"
#include <unistd.h>
/**
 * handle_mod - Function to handle %
 *
 * Return: 0 or 1
 */
int handle_mod(va_list Args)
{
	char m = va_arg(Args, int);
	
	if (m == '\0')
	{
		return (-1);
	}
	else if (m == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}
