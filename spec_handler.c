#include "main.h"
/**
 * spec_handler - handles cases of specifiers
 * @format: ist the passed string that has the specifeir
 * @Args: passed arguments other than the format strng
 * Return: 1 when no specifier encounterd
 */
int spec_handler(const char *format, va_list Args)
{
	switch (*format)
	{
		case 'c':
			return (handle_c(Args));
		case 's':
			return (handle_s(Args));
		case 'x':
		case 'X':
			return (handle_hex(Args, *format));
		case '%':
			return (handle_mod());
		case 'd':
		case 'i':
			return (handle_int(Args));
		case 'o':
			return (handle_octal(Args));
		case 'u':
			return (handle_un(Args));
		case 'b':
			return (handle_b(Args));
		case 'p':
			return (handle_addr(Args));
		default:
			{
				write(1, format, 1);
			}
	}
	return (1);
}
