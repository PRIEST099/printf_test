#ifndef MAIN_H
#define MAIN_H

#define B_SIZE 1024

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct op - defines a structure for calling functions
 * @c: format character
 * @f: function pointer for that char
 */

typedef struct op
{
	char c;
	int (*f)(const char *format, va_list args, int flags);
} types;

int _printf(const char *format, ...);
int handle_c(const char *format, va_list args, int flags);
void print_writter_content(char writter[], int *w_index);
int check_options(const char *format, int *i);
int handle_cases(const char *format, int *i, va_list args,
		char *writter, int options);

#endif
