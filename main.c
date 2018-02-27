#include <limits.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Edge: %i\n", INT_MAX);
	printf("%i\n", INT_MAX);
	_printf("Edge: %i\n", INT_MIN);
	printf("%i\n", INT_MIN);
	/* Percentage Test*/
	_printf("1.Edge Case: %%s multiple percents\n");
	printf("REdge Case: %%s multiple percents\n");
	_printf("2.Edge Case: %  %  s multiple percents\n");
        printf("REdge Case: %  %  s multiple percents\n");
	_printf("3.Edge Case: %     %   multiple percents\n");
        printf("REdge Case: %     %   multiple percents\n");
	_printf("4.Edge Case: %     d multiple percents\n", 20);
        printf("REdge Case: %     d multiple percents\n", 20);

	/*Given Tests*/
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	printf("String:[%s]\n", NULL);
	_printf("String:[%s]\n", NULL);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
