# include "printf.h"

/**
 * _print_string - prints a string to stdout
 * @str: pointer to the string to print
 */

int	_print_string(char *str)
{
	int count = 0;
	while (*str)
		count += write(1, str++, 1);
	return (count);
}
