#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: the character to be printed
 * Return: 1 (on success)
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
 * print_percent - prints a percent character
 * @args:number of arguments
 * Return: 1 (on success)
*/
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
/**
 * print_d - prints an integer
 * @args:number of arguments
 * Return: count of digits printed
*/
int print_d(va_list args)
{
	unsigned int i = 0;
	unsigned int div = 1;
	int numb = va_arg(args, int);
	unsigned int tmp;

	if (numb < 0)
	{
		_putchar('-');
		i++;
		tmp = -numb;
	}
	tmp = numb;
	while (tmp / div > 9) /* checks if the leftmost digit of tmp is greater than 9 */
	{
		div *= 10; /* inceasing div, to move one place to the left along the number */
	}
	while (div >= 1) /* the loop continues until div becomes less than 1, meaning that all digits have been printed */
	{
		_putchar((tmp / div) + 48); /* extracts the leftmost digit of tmp, converts it to string and prints it */
		i++;
		tmp %= div; /* gets the value of tmp without the leftmost digit */
		div /= 10; /* moves div one place to the right to extract the next digit in the next iteration*/
	}
	return (i);
}
