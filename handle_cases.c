#include "main.h"

/**
 * handle_cases - handles cases for format specifiers
 * @format: unformatted string
 * @i: index of the format specifier
 * @args: variadic arguments
 * @writter: array of regural chacters to write
 * @options: the number of options before format specifier
 * Return: int
 */

int handle_cases(const char *format,
		int *i, va_list args,
		char *writter,
		int options)
{
	/**
	int j;
	types formats[] = {
		{'c', handle_c},
		{'\0', NULL}
	};

	for (j = 0; formats[j].a != '\0'; j++)
	{
		if (format[i] == formats[j].a)
			return (formats[j].f(args. writter, options));
	}

	if (formats[j].a == '\0')
	{
		if (format[*i] == '\0')
			return (-1);
		l += write (1, '%%', 1);

		if (format[*i - 1]

	*/

	printf("options: %d\nformat specifier: %c\n", options, format[(*i) + 1]);
	return (0);
}

