#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char - print single char
 * @ap: arg list
 * Return: number of printed char
 */

int print_char(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
 * print_str - print string
 * @ap: arg list
 * Return: number of printed char
 */

int print_str(va_list ap)
{
	return (_puts(va_arg(ap, char *)));
}

/**
 * print_nbr - print number
 * @ap: arg list
 * Return: number of printed char
 */

int print_nbr(va_list ap)
{
	char *s;
	int argument, size;

	argument = va_arg(ap, int);
	size = _nbr_len(argument);
	s = malloc(sizeof(char) * size + 1);

	if (!s)
	{
		return (0);
	}

	s = _itoa(argument);
	return (_puts(s));
}
