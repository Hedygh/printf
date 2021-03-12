#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _nbr_len - length of a number
 * @prmNumber: number
 * Return: length of the number
 */

int _nbr_len(int prmNumber)
{
	int cLoop = 0, number;

	if (prmNumber == 0)
		return (1);

	number = prmNumber;

	if (number < 0)
	{
		number *= -1;
		cLoop++;	/* for the sign char */
	}

	while (number)
	{
		number /= 10;
		cLoop++;
	}

	return (cLoop);
}

/**
 * _itoa - Convert an int to a string
 * @prmNumber: int to convert
 * Return: converted string
 */

char *_itoa(int prmNumber)
{
	char *s;
	int cLoop;
	long number;

	number = prmNumber;
	cLoop = _nbr_len(number);
	s = malloc(sizeof(char) * cLoop + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	s[cLoop] = '\0';

	if (number == 0)
	{
		s = "0";
	}
	else if (number < 0)
	{
		s[0] = '-';
		number *= -1;
	}

	while (number)
	{
		s[--cLoop] = number % 10 + 48;
		number /= 10;
	}

	return (s);
}
