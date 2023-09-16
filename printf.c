# include "printf.h"

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
				_print_num_hexa(va_arg(args, int), 16);
				count++;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				_print_num_hexa(va_arg(args, int), 10);
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