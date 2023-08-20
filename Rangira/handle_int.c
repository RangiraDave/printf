#include <unistd.h>
/**
 * handle_int - Function to handle all integers.
 * @num: Number passed as argment
 * Return: 0
 */

void handle_int(int num)
{
	int i;
	char str[20];

	if (num == 0)
	{
		write(1, "0", 1);
		return;
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
	while (i--)
	{
		write(1, &str[i], 1);
	}
	return;
}
