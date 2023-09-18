# include "main.h"

/**
 * _print_num - prints a number to stdout;
 * @num: number to print
 * Return: number of characters printed
*/

int	_print_num(int num)
{
	int count = 0;

	if (num == -2147483648)
	{
		_print_num(num / 10);
		_putchar('0' + (num % 10) * -1);
	}
	if (num < 0)
	{
		_putchar('-');
		_print_num(num * -1);
	}
	else if (num >= 10)
	{
		_print_num(num / 10);
		_print_num(num % 10);
	}
	else
		_putchar('0' + (num % 10));
	count = get_len(num, 10);
	return (count);
}
