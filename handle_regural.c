#include "main.h"

int handle_regular(const char *format, int *count)
{
	write(1, format, 1);
	(*count) += 1;
}
