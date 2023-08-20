#include <unistd.h>
/**
 * handle_int - Function to handle all integers.
 * @num: Number passed as argment
 * Return: 0
 */

void handle_int(int num)
{
	int i, j;
	char temp, str[20];

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
	for (j = 0; j < i / 2; j++)
	{
		temp = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = temp;
	}
	write(1, str, sizeof(char) * i);
}
