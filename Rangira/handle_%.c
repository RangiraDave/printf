#include "main.h"
#include <unistd.h>
/**
 * hanle_mod - Function to handle %
 *
 * Return: None
 */
void handle_mod(void)
{
	/*_printf("mod simbol: %%");*/
	write(1, "%", 1);
}
