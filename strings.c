#include <unistd.h>

int _putchar(char c)
{
	write(1, &c, 1);
}

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
