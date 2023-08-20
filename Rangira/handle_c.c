#include "main.h"
#include <unistd.h>
/**
 * handle_c - Function that handles c
 * @c: Passed charachte
 * Return: None
 *
 */
void handle_c(char c)
{
	if (c == '\0')
		c = NULL;
	if (c != '\0')
		write(1, &c, 1);
}
