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
 * Return: count of characters printed
*/
int print_s(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
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
/**
 * print_d - prints integer
 * @args:number of arguments
 * Return: count of digits printed
*/
int print_d(va_list args)
{
	int i = 0;
	int numb = va_arg(args, int);

	if (numb < 0)
	{
		_putchar('-');
		i++;
		numb = -numb;
	}
	while (numb != 0)
	{
		numb /= 10;
		i++;
	}
	return (i);
}
