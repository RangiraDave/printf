#include "main.h"
#include <unistd.h>
/**
 * handle_mod - Function to handle %
 * @specifier: The charactor to be checked
 * Return: -1, 0 or 1
 */
int handle_mod(char specifier)
{
	/*if (!specifier)
	{
		write(1, "", 1);
		return (0);
	}*/
	if (specifier == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	/*if(specifier == ' ')
	{
		
		write(1, " ", 1);
		return (-1);
	}*/
	return (0);
}
