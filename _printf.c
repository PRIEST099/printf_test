#include "main.h"

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if(*format != '%')
		{
			count = handle_regular(format, &count);
			count++;
			format++;
		}
		else
		{
			switch(*(format + 1))
			{
				case 's':
					count = handle_s(format, args, &count);
					count++;
					format+= 2;
					break;
				default:
					format++;
			}
		}
	}
	va_end(args);

	return count;
}

