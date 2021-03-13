#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int print_nbr(va_list ap);
int print_number(int n);
int _putchar(char c);
int _puts(char *str);
int _nbr_len(int prmNumber);
char *_itoa(int prmNumber);
char *_itoa(int prmNumber);
char *_strdup(char *str);

/**
 * struct flags_printf
 * @c: flag string
 * @f: pointer to func
 */

typedef struct flags_printf
{
	char *c;
	int (*f)(va_list);
} flags_p;
#endif
