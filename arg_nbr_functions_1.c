#include <stdarg.h>
#include "holberton.h"
#include <limits.h>

/**
 * print_unsigned - manage unsigned int
 * @ap: arg list
 * Return: value number of printed chars
 */

int print_unsigned(va_list ap)
{
	unsigned int argument = va_arg(ap, unsigned int);

	if (argument < 0)
		argument = UINT_MAX - argument;
	return (print_unsigned_number(argument));
}
