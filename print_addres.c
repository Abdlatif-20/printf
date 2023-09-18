# include "printf.h"

/**
 * _print_address - prints an address to stdout
 * @num: number to print
 *  * Return: number of digits printed
 */

int	_print_address(unsigned long num)
{
	int count = 0;
	static int flag;
	char hexa[] = "0123456789abcdef";

	if (!flag)
	{
	_print_string("0x");
	flag = 1;
	}
	if (num >= 16)
	{
	_print_address(num / 16);
	_print_address(num % 16);
	}
	else
	{
	if (num < 10)
	_putchar('0' + num);
	else
	{
	_putchar(hexa[num]);
	}
	}
	count = get_len(num, 16);
	return (count);
}
