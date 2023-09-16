# ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	_putchar(char c);
void	_print_num_hexa(int num, int base);
void	_print_string(char *str);
int		_printf(const char *format, ...);
# endif