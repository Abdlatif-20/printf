# include "main.h"

/**
 * _printf - prints a string to stdout ecrire une chaine de caractaires
 * @format: pointer to the string to print pointeur vers une chaine de
 *
 * Return: count
 */

int		_printf(const char *format, ...)
{
	va_list args;
	int i = -1;
	int count = 0;

	if (!format)
		return (-1);
	va_start(args, format);
	while (format && format[++i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == 'x')
				count += _print_unsigned_int(va_arg(args, int), 16, 1);
			else if (format[i] == 'X')
				count += _print_unsigned_int(va_arg(args, int), 16, 0);
			else if (format[i] == 'd' || format[i] == 'i')
				count += _print_num(va_arg(args, int));
			else if (format[i] == 'u')
				count += _print_unsigned_int(va_arg(args, unsigned int), 10, 2);
			else if (format[i] == 'o')
				count += _print_unsigned_int(va_arg(args, unsigned int), 8, 2);
			else if (format[i] == 'p')
				count += _print_address(va_arg(args, unsigned long));
			else if (format[i] == 'c')
				count += _putchar(va_arg(args, int));
			else if (format[i] == 's')
				count += _print_string(va_arg(args, char *));
			else if (format[i] == '%')
				count += _putchar('%');
			else
				count += _putchar('%') + _putchar(format[i]);
		}
		else
			count += _putchar(format[i]);
	}
	return (va_end(args), count);
}
