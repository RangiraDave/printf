#include "main.h"
#include <unistd.h>
/**
 * handle_mod - Function to handle %
 * @specifier: The charactor to be checked
 * Return: 0 or 1
 */
int handle_mod()
{

	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}
