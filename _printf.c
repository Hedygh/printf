#include <stdarg.h>
#include "holberton.h"

/**
 * get_op - select function for conversion char
 * @c: char to check
 * Return: pointer to function
 */

int (*get_op(char c))(va_list)
{
	va_list ap;
	int i = 0;

	flags_p fp[] = {
		{"c", print_char},
		{"s", print_str},
	};
	while (i < 2)
	{
		if (c == fp[i].c[0])
		{
			return (fp[i].f);
		}
		i++;
	}
	return (0);
}

/**
 * _printf - Reproduce behavior of printf function
 * @format: format string
 * Return: value of printed chars
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int sum = 0;
	int i = 0;
	int (*func)(va_list);

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			func = get_op(format[i + 1]);
			func(ap);
			//increment i
			i += 2;
			continue;
		}
		_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (sum);
}
