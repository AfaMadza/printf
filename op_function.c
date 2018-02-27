#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define STDOUT 1
/**
 * print_in - prints an int to STDOUT.
 *@args: argument to be printed.
 *Return: length.
 */
int print_in(va_list args)
{
	unsigned int in, ret_val;

	in = va_arg(args, int);
	ret_val = _itoa(in);
	return (ret_val);
}
/**
 * print_ch - print char
 *@args: char to be printed.
 *Return: length.
 */
int print_ch(va_list args)
{
	char ch;
	int len = 1;

	ch = va_arg(args, int);
	write(STDOUT, &ch, len);
	return (len);
}
/**
 * print_st - print string.
 *@args: string to be printed.
 *Return: length;
 */
int print_st(va_list args)
{
	char *s;
	char *null = "(null)";
	int len;

	if (args == NULL)
		return (0);
	s = va_arg(args, char *);
	if (s == NULL)
	{
		write(STDOUT, null, 6);
		return (6);
	}
	len = _strlen(s);
	write(STDOUT, s, len);
	return (len);

}
/**
 * print_di - prints a digit.
 * @args: digit to be printed.
 * Return: number of characters printed.
 */
int print_di(va_list args)
{
	int in, ret_val;

	in = va_arg(args, int);
	ret_val = _itoa(in);
	return (ret_val);
}
