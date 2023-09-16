# ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int	_putchar(char c);
int	_print_num(int num);
int	_print_string(char *str);
int	_print_unsigned_int(unsigned int num, int base, int flag);
int	_print_address(unsigned long long num);
int	get_len(unsigned int num, int base);
int	_printf(const char *format, ...);

# endif
