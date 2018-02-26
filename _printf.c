#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - produces output according to a specified format.
 * @format: format specified by user.
 * Return: None.
 */
int _printf(const char *format, ...)
{
	va_list args;
	op_t arg_format[] = {
		{"c", print_ch},
		{"s", print_st},
		{"i", print_in},
		{NULL, NULL}
	};
	int temp;
	int i = 0;
	int j = 0;
	int char_count = 0;

	va_start(args, format);
	while (format != NULL && format[j] != '\0')
	{
		if (format[j] == '%')
		{
			while (arg_format[i].op != NULL)
			{
				if (format[j] == '%')
					format++;
				if (format[j] == *arg_format[i].op)
				{
					temp = arg_format[i].f(args);
					char_count += temp;
				}
				i++;
			}
			i = 0;
		}
		else
		{
			_putchar(format[j]);
			char_count++;
		}
		j++;
	}
	/*_putchar('\n');*/
	va_end(args);
	return (char_count);
}
