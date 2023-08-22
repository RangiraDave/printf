#include "main.h"
#include <unistd.h>
/**
 * handle_s - Function that prints a string
 * @passed_args: Passed character
 * Return: 1 or 0
 */
int handle_s(va_list Args)
{
	int i;
	char *str;

	str = va_arg(Args, char*);

	if (!str)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);
	return (i);
}
