#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#define STDOUT 1
/**
 * count_digit - counts the number of digits in an int.
 *@n: int passed to function.
 *Return: length.
 */
int count_digit(int n)
{
	int digit_count = 0;

	while (n > 0)
	{
		digit_count++;
		n = n / 10;
	}
	return (digit_count);
}
/**
 * _itoa - converts and integer to ASCII character.
 *@n: integer to be converted.
 *Return: length.
 */
int _itoa(int n)
{
	char *s;
	int digit_count = 0;
	int len;

	if (n < 0)
	{
		n = -n;
		digit_count++;
	}
	digit_count = digit_count + count_digit(n);
	s = malloc(sizeof(char) * (digit_count + 1));
	if (s == NULL)
		return (-1);
	s[digit_count] = '\0';

	while (n > 0)
	{
		s[digit_count - 1] = (n % 10) + '0';
		n = n / 10;
		digit_count--;
	}
	if (digit_count == 1)
		s[0] = '-';

	len = _strlen(s);
	write(STDOUT, s, len);
	free(s);
	return (len);
}
