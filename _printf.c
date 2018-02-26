#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int _printf(const char *format, ...)
{
	va_list args;
	op_t arg_format[] = {
		{"c", print_ch},
		{"s", print_st},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;

	va_start(args, format);
	while (format != NULL && format[j] != '\0')
	{
		if (format[j] == '%')
		{
			while (arg_format[i].op != NULL)
			{
				if (format[j] == '%')
				{
					format++;
				}
				if (format[j] == *arg_format[i].op)
				{
					arg_format[i].f(args);
				}
				i++;
			}
			i = 0;
		}
		else
		{
			_putchar(format[j]);
		}
		j++;
	}
	_putchar('\n');
	va_end(args);
	return (0);
}
