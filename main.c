#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
		int len;
		int len2;
		char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
		char a[] = "Holberton";

		len = _printf("Let's try to printf a simple sentence.");
		len2 = printf("Let's try to printf a simple sentence.");
		_printf("Length:[%d, %i]\n", len, len);
		printf("Length:[%d, %i]\n", len2, len2);
		_printf("Negative:[%d]\n", -762534);
		printf("Negative:[%d]\n", -762534);
		_printf("Character:[%c]\n", 'H');
		printf("Character:[%c]\n", 'H');
		_printf("String:[%s]\n", "I am a string !");
		printf("String:[%s]\n", "I am a string !");
		len = _printf("Percent:[%%%]\n");
		len2 = printf("Percent:[%%%]\n");
		len = _printf("Percent:[%%]\n");
                len2 = printf("Percent:[%%]\n");
		len = _printf("Percent:[%]\n");
                len2 = printf("Percent:[%]\n");
		_printf("mine: %%%%%%%%%%%\n");
		printf("theirs: %%%%%%%%%%%\n");
		_printf("%%s \n", "yolo");
		printf("%%s \n", "yolo");
		_printf("Len:[%d]\n", len);
		printf("Len:[%d]\n", len2);
		len = _printf("binarymine: %b\n", 20);
                _printf("my len binary: %d\n", len);
		len = _printf("%R", s);
		_printf("my len rot13: %d\n", len);
		len = _printf("%r\n", a);
                _printf("my len reverse: %d\n", len);
	return (0);
}
