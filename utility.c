#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
#define STDOUT 1
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(STDOUT, &c, 1));
}
/**
 * _strlen - returns length of a string
 * @s: pointer to string whose length will be returned
 * Return: length.
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
