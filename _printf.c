#include "main.h"

/**
 * _printf - basic implementation of printf
 * @format: unformatted output
 * Return: written characters
 */


int _printf(const char *format, ...)
{
	char writter[B_SIZE];
	int i, printed, printed_chars = 0;

	int w_index = 0;
	int options;

	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			writter[w_index++] = format[i];
			if (w_index == B_SIZE)
				print_writter_content(writter, &w_index);
			printed_chars++;
		}
		else
		{
			print_writter_content(writter, &w_index);
			options = check_options(format, &i);
			i += options;
			printed = handle_cases(format, &i, args, writter,
					options);
			i++;
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	print_writter_content(writter, &w_index);
	va_end(args);
	return (printed_chars);
}
