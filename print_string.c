# include "printf.h"

/**
 * _print_string - prints a string to stdout
 * @str: pointer to the string to print
 */

void	_print_string(char *str)
{
    while (*str)
        write(1, str++, 1);
}
