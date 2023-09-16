#include "printf.h"

/**
 * _print_unsigned_int - prints an unsigned int and handles other bases
 * @num: number to print
 * @base: b
 * @flag: f
 * Return: number of digits printed
 * get_len - gets the length of a number
 */

int	get_len(unsigned int num, int base)
{
	int len = 0;

	while (num != 0)
	{
		num /= base;
		len++;
	}
	return (len);
}

int	_print_unsigned_int(unsigned int num, int base, int flag)
{
	char *hexa = "0123456789abcdef";
	char *hex = "0123456789ABCDEF";
	int count;
	if (num >= base)
	{
	_print_unsigned_int(num / base, base, flag);
	_print_unsigned_int(num % base, base, flag);
	}
	else
	{
		if (base == 16 && flag == 1)
			_putchar(hexa[num]);
		else if (base == 16 && !flag)
			_putchar(hex[num]);
		else
			_putchar('0' + num);
	}
	count = get_len(num, base);
	return (count);
}
