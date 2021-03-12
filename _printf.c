#include <stdarg.h>
#include "holberton.h"

int (*get_op(char c))(va_list)
{
	va_list ap;
	int i = 0, j;

	flags_p fp[] = {
		{"c", print_char},
		//{"s", _puts},
	//	{"%", _putchar},
	//	{"d", _itoa},
	//	{"i", _itoa},
	};	       
	while (i < 5)
	{
		if (c == fp[i].c[0])
		{
			return fp[j].f;
		}
		i++;
	}
	return (0);
}

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
