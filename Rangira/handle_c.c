#include "main.h"
#include <unistd.h>
void handle_c(char c)
{
	if (c != '\0')
		write(1, &c, 1);
}
