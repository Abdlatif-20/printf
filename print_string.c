# include "main.h"

/**
 * _print_string - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of characters printed
 */

int	_print_string(char *str)
{
:	int count = 0;

	if (!str)
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	while (*str)
		count += write(1, str++, 1);
	return (count);
}
