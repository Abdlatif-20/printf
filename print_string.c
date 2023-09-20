#include"main.h"

/**
 * _print_string - prints a string
 * @str: pointer to string to print
 *
 * Return: number of characters
 */

int _print_string(char *str)
{
	int count = 0;

	if (!str)
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	while (*str)
		count += write(1, str++, 1);
	return (count);
}
