#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#define STDOUT 1
/**
 */
int print_in(va_list args)
{
	int in, ret_val;

	in = va_arg(args, int);
	ret_val = _itoa(in);
	return (ret_val);
}
/**
 * print_ch - print char
 *@args: char to be printed.
 */
int print_ch(va_list args)
{
	char ch;
	int len = 1;

	ch = va_arg(args, int);
	write(STDOUT, &ch, len);
	return(len);
}
/**
 * print_st - print string.
 *@args: string to be printed.
 */
int print_st(va_list args)
{
	char *s;
	int len;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		return(-1);
	}
	len = _strlen(s);
	write(STDOUT, s, len);
	return (len);

}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strlen - returns length of a string
 * @s: pointer to string whose length will be returned
 * Return: None
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
