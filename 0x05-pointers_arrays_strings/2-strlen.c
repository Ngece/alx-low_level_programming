#include "main.h"

/**
 * str: Is the string to get the length of.
 *
 * aftr getting the length the funx tion will return the length of the string.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
