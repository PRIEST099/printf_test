#include "main.h"

/**
 * print_writter_content - prints characters to stdout
 * @writter: array of characters to write
 * @w_index: index for reseting
 * Return: null
 */

void print_writter_content(char writter[], int *w_index)
{
	if (*w_index > 0)
		write(1, &writter[0], *w_index);

	*w_index = 0;
}
