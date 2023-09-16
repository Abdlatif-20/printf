# include "printf.h"

/**
 * _print_num_hexa - prints a number in hexadecimal format;
 * @num: number to print
 */

void	_print_num_hexa(int num)
{
	if (num == -2147483648)
	{
		_print_num_hexa(num / 10);
		_putchar('0' + (num % 10) * -1);
	}
	 if (num < 0)
	{
		_putchar('-');
		_print_num_hexa(num * -1);
	}
	else if (num >= 10)
	{
		_print_num_hexa(num / 10);
		_print_num_hexa(num % 10);
	}
	else
		_putchar('0' + (num % 10));
}
