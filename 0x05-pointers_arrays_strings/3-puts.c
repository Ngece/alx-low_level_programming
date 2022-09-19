#include "main.h"

/**
 *
 * str: Is the string to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
