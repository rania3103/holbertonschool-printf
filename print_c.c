#include "main.h"
/**
 * print_c - prints a character
 * @args:number of arguments
 * Return: 1 (on success)
*/

int print_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
