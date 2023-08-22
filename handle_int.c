#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * handle_int - Function to handle all integers.
 * @passed_args: Passed character
 * Return: 1 or 0
 */

int handle_int(va_list passed_args)
{
	int num, i, j;
	char temp, str[20];


	if (str == NULL)
		return (-1);

	num = va_arg(passed_args, int);
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	i = 0;
	while (num)
	{
		str[i++] = num % 10 + '0';
		num /= 10;
	}

	for (j = 0; j < i / 2; j++)
	{
		temp = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = temp;
	}
	write(1, str, sizeof(char) * i);
	return (i);
}
