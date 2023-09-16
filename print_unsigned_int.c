# include "printf.h"

/**
 * _print_unsigned_int - prints an unsigned int to stdout
 * @num: number to print
 */

void	_print_unsigned_int(unsigned int num, int base, int flag)
{
    char *hexa = "0123456789abcdef";
	char *hex = "0123456789ABCDEF";
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
}