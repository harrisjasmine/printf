#include <limits.h>
#include <stdio.h>
#include "holberton.h"

void even_tests(void) {
	printf("================== Even number percent test BEGIN ============\n");
	printf("2 even number percent test ========\n");
	_printf(", Len:[%d]\n", _printf("Percent:[%%]"));
	printf(", Len:[%d]\n", printf("Percent:[%%]"));
	printf("4 even number percent test ========\n");
	_printf(", Len:[%d]\n", _printf("Percent:[%%%%]"));
	printf(", Len:[%d]\n", printf("Percent:[%%%%]"));
	printf("6 even number percent test ========\n");
	_printf(", Len:[%d]\n", _printf("Percent:[%%%%%%]"));
	printf(", Len:[%d]\n", printf("Percent:[%%%%%%]"));
	printf("8 even number percent test ========\n");
	_printf(", Len:[%d]\n", _printf("Percent:[%%%%%%%%]"));
	printf(", Len:[%d]\n", printf("Percent:[%%%%%%%%]"));
	printf("10 even number percent test ========\n");
	_printf(", Len:[%d]\n", _printf("Percent:[%%%%%%%%%%]"));
	printf(", Len:[%d]\n", printf("Percent:[%%%%%%%%%%]"));
	printf("================== Even number percent test END ============\n");
}


void odd_tests(void) {
	printf("================== Odd number percent test BEGIN ============\n");
	printf("1 odd number percent test ========\n");
	_printf(", Len:[%d]\n", _printf("Percent:[%]"));
	printf(", Len:[%d]\n", printf("Percent:[%]"));
	printf("3 odd number percent test ========\n");
	_printf(", Len:[%d]\n", _printf("Percent:[%%%]"));
	printf(", Len:[%d]\n", printf("Percent:[%%%]"));
	printf("5 odd number percent test ========\n");
	_printf(", Len:[%d]\n", _printf("Percent:[%%%%%]"));
	printf(", Len:[%d]\n", printf("Percent:[%%%%%]"));
	printf("7 odd number percent test ========\n");
	_printf(", Len:[%d]\n", _printf("Percent:[%%%%%%%]"));
	printf(", Len:[%d]\n", printf("Percent:[%%%%%%%]"));
	printf("9 odd number percent test ========\n");
	_printf(", Len:[%d]\n", _printf("Percent:[%%%%%%%%%]"));
	printf(", Len:[%d]\n", printf("Percent:[%%%%%%%%%]"));
	printf("================== Odd number percent test END ============\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len;
	int len2;

	even_tests();
	odd_tests();

	printf("================\n");
	len = _printf("Percent:[%y]\n");
	len2 = printf("Percent:[%y]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
