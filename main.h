# ifndef MAIN_H
# define MAIN_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "main.h"
int _print_num(int num);
int _print_string(char *str);
int _print_unsigned_int(unsigned int num, int base, int flag);
int _print_address(unsigned long num);
int get_len(int num, int base);
int _printf(const char *format, ...);
int _putchar(char c);

# endif
