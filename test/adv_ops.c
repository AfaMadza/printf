#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"
#define STDOUT 1
/**
 * itoa_adv - convert int to ascii accounting for base.
 *@n: number to be converted.
 *@base: base of number.
 *Return: length.
 */
int itoa_adv(unsigned int n, int base)
{
	int i = 0;
	int negative = 0;
	int mod;
	int digit_count = 0;
	char s[1024];

	if (n == 0)
	{
		s[i] = '0';
		s[1] = '\0';
		return (s);
	}
	if (n < 0 && base == 10)
	{
		negative = 1;
		n = -n;
	}
	while (n != 0)
	{
		mod = n % base;
		if (mod > 9)
		{
			s[i] = (mod - 10) + 'a';
			i++;
		}
		else
		{
			s[i] = mod + '0';
			i++;
		}
	}
	if (negative)
	{
		s[i] = '-';
		i++;
	}
	s[i] = '\0';
	digit_count = _strlen(s);
	string_rev(s);
	write(STDOUT, s, digit_count);
	free(s);
	return(digit_count);

}
/**
 * string_rev - reverse a string in memory.
 *@s: string to be reversed.
 *Return: None.
 */
void string_rev(char *s)
{
	char *begin, *end, temp;

	begin = s;
	end = s + _strlen(s) - 1;

	while (begin < end)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;

		begin++;
		end--;
	}
}
