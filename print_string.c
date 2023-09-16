# include "printf.h"

void	_print_string(char *str)
{
    while (*str)
        write(1, str++, 1);
}
