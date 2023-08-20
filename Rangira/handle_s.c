#include "main.h"
#include <unistd.h>
/**
 * handle_s - Function that prints a string
 * @str: Point to string passed
 * Return: None
 */
void handle_s(char *str)
{
	int i;

	i = 0;
	if (!str)
		str = NULL;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
