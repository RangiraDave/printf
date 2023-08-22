#include "main.h"
#include <unistd.h>
/**
 * handle_s - Function that prints a string
 * @passed_arg: Passed character
 * @specifier: The character to be checked
 * Return: 1 or 0
 */
int handle_s(va_list passed_arg, char specifier)
{
	int i;
	char *str;

	if (specifier != 's')
		return (0);
	str = va_arg(passed_arg, char*);
	if (!str)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);
	return (i);
}
