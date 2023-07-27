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
/**
 * print_s - prints a string
 * @args:number of arguments
 * Return: 1 (on success)
*/
int print_s(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char*);
	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	return (i);
}
/**
 * print_100 - prints a percentage
 * @args:number of arguments
 * Return: 1 (on success)
*/
int print_100(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
