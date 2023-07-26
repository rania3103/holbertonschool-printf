#include "main.h"
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
		while(str)
		{
			_putchar(str[i]);
			i++;
		}
	}
	return (1);
}
