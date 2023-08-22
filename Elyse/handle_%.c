#include "main.h"
#include <unistd.h>
/**
 * handle_mod - Function to handle %
 *
 * Return: 0 or 1
 */
int handle_mod(void)
{

	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}
