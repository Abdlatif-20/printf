# ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

void	_putchar(char c);
void	_print_num_hexa(int num);
void	_print_string(char *str);
void	_print_unsigned_int(unsigned int num, int base, int flag);
void	_print_address(unsigned long long num);
int	_printf(const char *format, ...);

# endif
