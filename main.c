#include "holberton.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	char c = 'o';
	char str[] = "toto";
	int i = 32907978, j = 0, k = -97984372, l = INT_MIN;

	_printf("[string] %s\n hello %c\n", str, c);
	printf("[string] %s\n hello %c\n", str, c);
	printf("[itoa] %s\n", _itoa(i));
	printf("[itoa] %s\n", _itoa(j));
	printf("[itoa] %s\n", _itoa(k));
	printf("[itoa] %s\n", _itoa(l));
	_printf("[integer] %i\n%i\n%i\n%i\n", i, j, k, l);
	printf("[integer] %i\n%i\n%i\n%i\n", i, j, k, l);
	_printf("[decimal] %d\n%d\n%d\n%d\n", i, j, k, l);
	printf("[decimal] %d\n%d\n%d\n%d\n", i, j, k, l);
	_printf("[%%] %%\n");
	printf("[%%] %%\n");
	return (0);
}
