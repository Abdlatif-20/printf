# include "printf.h"

/**
 * _print_num_hexa - prints a number in hexadecimal format;
 * @num: number to print
 * @base: base to print the number in
 */

void	_print_num_hexa(int num, int base)
{
	char *hexa = "0123456789abcdef";
	if (num == -2147483648)
	{
		_print_num_hexa(num / base, base);
		_putchar('0' + (num % base) * -1);
	}
	else if (num < 0)
	{
		_putchar('-');
		_print_num_hexa(num * -1, base);
	}
	else if (num >= base)
	{
		_print_num_hexa(num / base, base);
		_print_num_hexa(num % base, base);
	}
	else
	{
		if (base == 16)
			_putchar(hexa[num]);
		else
			_putchar('0' + (num % base));
	}
}
