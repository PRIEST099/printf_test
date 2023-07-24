#include "main.h"

/**
 * check_options - checks for the number of options febore format
 * @format: format string
 * @i: the current index in string
 * Return: the number of options found
 */

int check_options(const char *format, int *i)
{
	int opt = 0;
	int j, current;

	current = *i + 1;

	while (format[current] != '\0')
	{
		if ((format[current] < 'a' || format[current] > 'z') &&
				(format[current] < 'A' || format[current] > 'Z'))
		{
			opt += 1;
		}
		else
		{
			return (opt);
		}
		current++;
	}

	return (opt);
}
