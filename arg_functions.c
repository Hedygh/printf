#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>

int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
}
