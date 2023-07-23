#include "main.h"

int handle_s(const char *format, va_list args, int *count)
{
	char *s = va_arg(args, char *);
	while (*s)
	{
		write(1, s, 1);
		(*count)+=1;
		s++;
	}
}
