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

	printf("****WELCOME TO THE _PRINTF BREAKER****\n");
	printf("ye who dare come forth, compile and despair!\n");

/*MISC Tests*/ printf("-----------------MISC TESTS---------------\n");

	printf("1.Act: single percent[%]\n", 'H');
	_printf("single percent[%]\n", 'H');

	printf("2.Act: percent and spaces[%   ]\n", 'H');
	_printf("percent and spaces:[%   ]\n", 'H');


	printf("3.Act: percent and spaces and character[%    c]\n", 'H');
	_printf("percent and spaces and character:[%    c]\n", 'H');

	printf("4.Act: percent and spaces and character[%    s]\n", "Hello");
	_printf("percent and spaces and character:[%    s]\n", "Hello");

	printf("5.Act: Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'H');


	printf("6.Act: Character NULL:[%c]\n", NULL);
	_printf("Character NULL:[%c]\n", NULL);

	printf("7.Act: integers passed to string- real:[%c]\n", '9');
	_printf("integer passed to string  NULL:[%c]\n", '9');

	_printf("Test positive:[%i]\n", 762534);
	printf("8.Act:[%i]\n", 762534);

	_printf("Test negative:[%i]\n", -762534);
	printf("9.Act:[%i]\n", -762534);

	printf("Testprint NULL:[%d]\n", NULL);
        _printf("10.Act:[%d]\n", NULL);
	printf("Unknown: [%r]\n");
	_printf("11.Unknown: [%r]\n");


/*NULL Tests*/printf("-----------------NULL TESTS-------------\n");
	_printf("Edg: %s\n", NULL);
	printf("1.Act: %s\n", NULL);

	len = _printf("Edg: [%c]\n", NULL); /*noprint, newline */
	len2 = printf("2.Act: [%c]\n", NULL);

	_printf("Edg: Length: %d\n", len);
	printf("3.Act: Length: %d\n", len2);


	_printf("Edg: %i\n", NULL);
	printf("4.Act: %i\n", NULL);

	_printf("Edg: %d\n", NULL);
	printf("5.Act: %d\n", NULL);
	printf("6.Act: %d\n", NULL);
	_printf("%d\n", NULL);
	printf("7.Act: %c\n", NULL);
	_printf("%c\n", NULL);
	printf("8.Act: %i\n", NULL);
	_printf("%i\n", NULL);
	printf("9.Act:%%\n", NULL);
	_printf("%%\n", NULL);

/*INT_MIN & MAX*/printf("----------------INT_MIN & MAX TESTS----------------\n");
	_printf("Edge: %i\n", INT_MAX);
	printf("%i\n", INT_MAX);
	_printf("Edge: %i\n", INT_MIN);
	printf("%i\n", INT_MIN);

/* Percentage Test*/printf("--------PERCENTAGE TESTS-----------------\n");
	_printf("1.Edge Case: %%s multiple percents\n");
	printf("REdge Case: %%s multiple percents\n");
	_printf("2.Edge Case: %  %  s multiple percents\n");
        printf("REdge Case: %  %  s multiple percents\n");
	_printf("3.Edge Case: %     %   multiple percents\n");
        printf("REdge Case: %     %   multiple percents\n");
	_printf("4.Edge Case: %     d multiple percents\n", 20);
        printf("REdge Case: %     d multiple percents\n", 20);

/*Given Tests*/printf("-----------------GIVEN TESTS----------------\n");
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
