#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: number of printed char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - write all char from string to stdout
 * @str: string to print
 * Return: number of printed char
 */

int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
