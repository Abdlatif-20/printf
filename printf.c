# include "printf.h"

/**
 * _printf - prints a string to stdout
 * @format: pointer to the string to print
 */

int		_printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'x')
			{
				_print_unsigned_int(va_arg(args, int), 16, 1);
				count++;
			}
			else if (format[i] == 'X')
			{
				_print_unsigned_int(va_arg(args, int), 16, 0);
				count++;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				_print_num_hexa(va_arg(args, int));
				count++;
			}
			else if (format[i] == 'u')
			{
				_print_unsigned_int(va_arg(args, unsigned int), 10, 2);
				count++;
			}
			else if (format[i] == 'o')
			{
				_print_unsigned_int(va_arg(args, unsigned int), 8, 2);
				count++;
			}
			else if (format[i] == 'X')
			{
				_print_unsigned_int(va_arg(args, unsigned int), 16, 0);
				count++;
			}
			else if (format[i] == 'p')
			{
				_print_address(va_arg(args, unsigned long long));
				count++;
			}
			else if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
				count++;
			}
			else if (format[i] == 's')
			{
				_print_string(va_arg(args, char *));
				count++;
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}