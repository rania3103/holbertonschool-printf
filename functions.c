#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
